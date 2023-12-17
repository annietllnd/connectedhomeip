/*
 *
 *    Copyright (c) 2023 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#pragma once

#include <app-common/zap-generated/cluster-objects.h>
#include <app/clusters/microwave-oven-control-server/microwave-oven-control-server.h>
#include <app/clusters/mode-base-server/mode-base-server.h>
#include <app/clusters/operational-state-server/operational-state-server.h>
#include <app/util/af-enums.h>
#include <app/util/config.h>
#include <cstring>
#include <protocols/interaction_model/StatusCode.h>
#include <utility>

namespace chip {
namespace app {
namespace Clusters {

/**
 * set default value for the optional attributes
 */
constexpr uint8_t kDefaultMinPower  = 10u;
constexpr uint8_t kDefaultMaxPower  = 100u;
constexpr uint8_t kDefaultPowerStep = 10u;

constexpr uint8_t ModeNormal  = 0;
constexpr uint8_t ModeDefrost = 1;

class ExampleMicrowaveOvenDevice : public MicrowaveOvenControl::Delegate,
                                   public ModeBase::Delegate,
                                   public OperationalState::Delegate
{

public:
    /**
     * This class is responsible for initialising all the microwave oven device clusters and managing the interactions between them
     * as required by the specific "business logic".
     * @param aClustersEndpoint The endpoint ID where all the microwave oven clusters exist.
     */
    explicit ExampleMicrowaveOvenDevice(EndpointId aClustersEndpoint) :
        mOperationalStateInstance(this, aClustersEndpoint),
        mMicrowaveOvenModeInstance(this, aClustersEndpoint, MicrowaveOvenMode::Id, 0),
        mMicrowaveOvenControlInstance(this, aClustersEndpoint, MicrowaveOvenControl::Id, mOperationalStateInstance,
                                      mMicrowaveOvenModeInstance)
    {}

    /**
     * Init all the clusters used by this device.
     */
    void MicrowaveOvenInit();

    // delegates from MicrowaveOvenControl cluster
    /**
     * handle command for microwave oven control: set cooking parameters
     */
    Protocols::InteractionModel::Status HandleSetCookingParametersCallback(uint8_t cookMode, uint32_t cookTime,
                                                                           uint8_t powerSetting) override;

    /**
     * handle command for microwave oven control: add more time
     */
    Protocols::InteractionModel::Status HandleModifyCookTimeCallback(uint32_t finalCookTime) override;

    /**
     * Get the value of MinPower.
     */
    uint8_t GetMinPower() const override { return kDefaultMinPower; }

    /**
     * Get the value of MaxPower.
     */
    uint8_t GetMaxPower() const override { return kDefaultMaxPower; }

    /**
     * Get the value of PowerStep.
     */
    uint8_t GetPowerStep() const override { return kDefaultPowerStep; }

    // delegates from OperationalState cluster
    using ModeTagStructType = detail::Structs::ModeTagStruct::Type;
    /**
     * Get the countdown time.
     * return actual cook time.
     */
    app::DataModel::Nullable<uint32_t> GetCountdownTime() override;

    /**
     * Fills in the provided GenericOperationalState with the state at index `index` if there is one,
     * or returns CHIP_ERROR_NOT_FOUND if the index is out of range for the list of states.
     * Note: This is used by the SDK to populate the operational state list attribute. If the contents of this list changes,
     * the device SHALL call the Instance's ReportOperationalStateListChange method to report that this attribute has changed.
     * @param index The index of the state, with 0 representing the first state.
     * @param operationalState  The GenericOperationalState is filled.
     */
    CHIP_ERROR GetOperationalStateAtIndex(size_t index, OperationalState::GenericOperationalState & operationalState) override;

    /**
     * Fills in the provided GenericOperationalPhase with the phase at index `index` if there is one,
     * or returns CHIP_ERROR_NOT_FOUND if the index is out of range for the list of phases.
     * Note: This is used by the SDK to populate the phase list attribute. If the contents of this list changes, the
     * device SHALL call the Instance's ReportPhaseListChange method to report that this attribute has changed.
     * @param index The index of the phase, with 0 representing the first phase.
     * @param operationalPhase  The GenericOperationalPhase is filled.
     */
    CHIP_ERROR GetOperationalPhaseAtIndex(size_t index, OperationalState::GenericOperationalPhase & operationalPhase) override;

    /**
     * Handle Command Callback in application: Pause
     * @param[out] err: get operational error after callback.
     * this method is called to set operational state to target state.
     * if success, 'err' is set to NoError, otherwise it will be set to UnableToCompleteOperation.
     */
    void HandlePauseStateCallback(OperationalState::GenericOperationalError & err) override;

    /**
     * Handle Command Callback in application: Resume
     * @param[out] err: get operational error after callback.
     * this method is called to set operational state to target state.
     * if success, 'err' is set to NoError, otherwise it will be set to UnableToCompleteOperation.
     */
    void HandleResumeStateCallback(OperationalState::GenericOperationalError & err) override;

    /**
     * Handle Command Callback in application: Start
     * @param[out] err: get operational error after callback.
     * this method is called to set operational state to target state.
     * if success, 'err' is set to NoError, otherwise it will be set to UnableToCompleteOperation.
     */
    void HandleStartStateCallback(OperationalState::GenericOperationalError & err) override;

    /**
     * Handle Command Callback in application: Stop
     * @param[out] err: get operational error after callback.
     * this method is called to set operational state to target state.
     * if success, 'err' is set to NoError, otherwise it will be set to UnableToCompleteOperation.
     */
    void HandleStopStateCallback(OperationalState::GenericOperationalError & err) override;

    // delegates from mode-base cluster
    CHIP_ERROR Init() override;

    /**
     * Handle application logic when the mode is changing.
     * @param mode The new mode that the device is requested to transition to.
     * @param response A reference to a response that will be sent to the client. The contents of which con be modified by the
     * application.
     */
    void HandleChangeToMode(uint8_t mode, ModeBase::Commands::ChangeToModeResponse::Type & response) override;

    /**
     * Get the mode label of the Nth mode in the list of modes.
     * @param modeIndex The index of the mode to be returned. It is assumed that modes are indexable from 0 and with no gaps.
     * @param label A reference to the mutable char span which will be mutated to receive the label on success. Use
     * CopyCharSpanToMutableCharSpan to copy into the MutableCharSpan.
     * @return Returns a CHIP_NO_ERROR if there was no error and the label was returned successfully.
     * CHIP_ERROR_PROVIDER_LIST_EXHAUSTED if the modeIndex in beyond the list of available labels.
     */
    CHIP_ERROR GetModeLabelByIndex(uint8_t modeIndex, MutableCharSpan & label) override;
    /**
     * Get the mode value of the Nth mode in the list of modes.
     * @param modeIndex The index of the mode to be returned. It is assumed that modes are indexable from 0 and with no gaps.
     * @param value a reference to the uint8_t variable that is to contain the mode value.
     * @return Returns a CHIP_NO_ERROR if there was no error and the value was returned successfully.
     * CHIP_ERROR_PROVIDER_LIST_EXHAUSTED if the modeIndex in beyond the list of available values.
     */
    CHIP_ERROR GetModeValueByIndex(uint8_t modeIndex, uint8_t & value) override;

    /**
     * Get the mode tags of the Nth mode in the list of modes.
     * @param modeIndex The index of the mode to be returned. It is assumed that modes are indexable from 0 and with no gaps.
     * @param tags a reference to an existing and initialised buffer that is to contain the mode tags. std::copy can be used
     * to copy into the buffer.
     * @return Returns a CHIP_NO_ERROR if there was no error and the mode tags were returned successfully.
     * CHIP_ERROR_PROVIDER_LIST_EXHAUSTED if the modeIndex in beyond the list of available mode tags.
     */
    CHIP_ERROR GetModeTagsByIndex(uint8_t modeIndex, DataModel::List<ModeTagStructType> & tags) override;

private:
    // define delegates and instances for Microwave Oven device
    OperationalState::Instance mOperationalStateInstance;
    ModeBase::Instance mMicrowaveOvenModeInstance;
    MicrowaveOvenControl::Instance mMicrowaveOvenControlInstance;

    // MicrowaveOvenMode types
    ModeTagStructType modeTagsNormal[1]  = { { .value = to_underlying(MicrowaveOvenMode::ModeTag::kNormal) } };
    ModeTagStructType modeTagsDefrost[1] = { { .value = to_underlying(MicrowaveOvenMode::ModeTag::kDefrost) } };

    const detail::Structs::ModeOptionStruct::Type kModeOptions[2] = {
        detail::Structs::ModeOptionStruct::Type{ .label    = CharSpan::fromCharString("Normal"),
                                                 .mode     = ModeNormal,
                                                 .modeTags = DataModel::List<const ModeTagStructType>(modeTagsNormal) },
        detail::Structs::ModeOptionStruct::Type{ .label    = CharSpan::fromCharString("Defrost"),
                                                 .mode     = ModeDefrost,
                                                 .modeTags = DataModel::List<const ModeTagStructType>(modeTagsDefrost) }
    };

    // Operational States
    const OperationalState::GenericOperationalState mOpStateList[4] = {
        OperationalState::GenericOperationalState(to_underlying(OperationalState::OperationalStateEnum::kStopped)),
        OperationalState::GenericOperationalState(to_underlying(OperationalState::OperationalStateEnum::kRunning)),
        OperationalState::GenericOperationalState(to_underlying(OperationalState::OperationalStateEnum::kPaused)),
        OperationalState::GenericOperationalState(to_underlying(OperationalState::OperationalStateEnum::kError)),
    };

    const app::DataModel::List<const OperationalState::GenericOperationalState> mOperationalStateList =
        Span<const OperationalState::GenericOperationalState>(mOpStateList);

    const OperationalState::GenericOperationalPhase mOpPhaseList[1] = {
        // Phase List is null
        OperationalState::GenericOperationalPhase(DataModel::Nullable<CharSpan>()),
    };

    Span<const OperationalState::GenericOperationalPhase> mOperationalPhaseList =
        Span<const OperationalState::GenericOperationalPhase>(mOpPhaseList);
};

} // namespace Clusters
} // namespace app
} // namespace chip

void MatterMicrowaveOvenServerInit();

void MatterMicrowaveOvenServerShutdown();
