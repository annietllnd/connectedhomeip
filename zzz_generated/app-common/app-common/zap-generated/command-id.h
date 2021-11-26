/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
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

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

// Global, non-cluster-specific commands
#define ZCL_READ_ATTRIBUTES_COMMAND_ID (0x00)
#define ZCL_READ_ATTRIBUTES_RESPONSE_COMMAND_ID (0x01)
#define ZCL_WRITE_ATTRIBUTES_COMMAND_ID (0x02)
#define ZCL_WRITE_ATTRIBUTES_UNDIVIDED_COMMAND_ID (0x03)
#define ZCL_WRITE_ATTRIBUTES_RESPONSE_COMMAND_ID (0x04)
#define ZCL_WRITE_ATTRIBUTES_NO_RESPONSE_COMMAND_ID (0x05)
#define ZCL_DEFAULT_RESPONSE_COMMAND_ID (0x0B)
#define ZCL_READ_ATTRIBUTES_STRUCTURED_COMMAND_ID (0x0E)
#define ZCL_WRITE_ATTRIBUTES_STRUCTURED_COMMAND_ID (0x0F)
#define ZCL_WRITE_ATTRIBUTES_STRUCTURED_RESPONSE_COMMAND_ID (0x10)

// Commands for cluster: Identify
#define ZCL_IDENTIFY_COMMAND_ID (0x00)
#define ZCL_IDENTIFY_QUERY_RESPONSE_COMMAND_ID (0x00)
#define ZCL_IDENTIFY_QUERY_COMMAND_ID (0x01)
#define ZCL_TRIGGER_EFFECT_COMMAND_ID (0x40)

// Commands for cluster: Groups
#define ZCL_ADD_GROUP_COMMAND_ID (0x00)
#define ZCL_ADD_GROUP_RESPONSE_COMMAND_ID (0x00)
#define ZCL_VIEW_GROUP_COMMAND_ID (0x01)
#define ZCL_VIEW_GROUP_RESPONSE_COMMAND_ID (0x01)
#define ZCL_GET_GROUP_MEMBERSHIP_COMMAND_ID (0x02)
#define ZCL_GET_GROUP_MEMBERSHIP_RESPONSE_COMMAND_ID (0x02)
#define ZCL_REMOVE_GROUP_COMMAND_ID (0x03)
#define ZCL_REMOVE_GROUP_RESPONSE_COMMAND_ID (0x03)
#define ZCL_REMOVE_ALL_GROUPS_COMMAND_ID (0x04)
#define ZCL_ADD_GROUP_IF_IDENTIFYING_COMMAND_ID (0x05)

// Commands for cluster: Scenes
#define ZCL_ADD_SCENE_COMMAND_ID (0x00)
#define ZCL_ADD_SCENE_RESPONSE_COMMAND_ID (0x00)
#define ZCL_VIEW_SCENE_COMMAND_ID (0x01)
#define ZCL_VIEW_SCENE_RESPONSE_COMMAND_ID (0x01)
#define ZCL_REMOVE_SCENE_COMMAND_ID (0x02)
#define ZCL_REMOVE_SCENE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_REMOVE_ALL_SCENES_COMMAND_ID (0x03)
#define ZCL_REMOVE_ALL_SCENES_RESPONSE_COMMAND_ID (0x03)
#define ZCL_STORE_SCENE_COMMAND_ID (0x04)
#define ZCL_STORE_SCENE_RESPONSE_COMMAND_ID (0x04)
#define ZCL_RECALL_SCENE_COMMAND_ID (0x05)
#define ZCL_GET_SCENE_MEMBERSHIP_COMMAND_ID (0x06)
#define ZCL_GET_SCENE_MEMBERSHIP_RESPONSE_COMMAND_ID (0x06)
#define ZCL_ENHANCED_ADD_SCENE_COMMAND_ID (0x40)
#define ZCL_ENHANCED_ADD_SCENE_RESPONSE_COMMAND_ID (0x40)
#define ZCL_ENHANCED_VIEW_SCENE_COMMAND_ID (0x41)
#define ZCL_ENHANCED_VIEW_SCENE_RESPONSE_COMMAND_ID (0x41)
#define ZCL_COPY_SCENE_COMMAND_ID (0x42)
#define ZCL_COPY_SCENE_RESPONSE_COMMAND_ID (0x42)

// Commands for cluster: On/Off
#define ZCL_OFF_COMMAND_ID (0x00)
#define ZCL_ON_COMMAND_ID (0x01)
#define ZCL_TOGGLE_COMMAND_ID (0x02)
#define ZCL_OFF_WITH_EFFECT_COMMAND_ID (0x40)
#define ZCL_ON_WITH_RECALL_GLOBAL_SCENE_COMMAND_ID (0x41)
#define ZCL_ON_WITH_TIMED_OFF_COMMAND_ID (0x42)

// Commands for cluster: Level Control
#define ZCL_MOVE_TO_LEVEL_COMMAND_ID (0x00)
#define ZCL_MOVE_COMMAND_ID (0x01)
#define ZCL_STEP_COMMAND_ID (0x02)
#define ZCL_STOP_COMMAND_ID (0x03)
#define ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID (0x04)
#define ZCL_MOVE_WITH_ON_OFF_COMMAND_ID (0x05)
#define ZCL_STEP_WITH_ON_OFF_COMMAND_ID (0x06)
#define ZCL_STOP_WITH_ON_OFF_COMMAND_ID (0x07)

// Commands for cluster: Alarms
#define ZCL_RESET_ALARM_COMMAND_ID (0x00)
#define ZCL_ALARM_COMMAND_ID (0x00)
#define ZCL_RESET_ALL_ALARMS_COMMAND_ID (0x01)
#define ZCL_GET_ALARM_RESPONSE_COMMAND_ID (0x01)
#define ZCL_GET_ALARM_COMMAND_ID (0x02)
#define ZCL_RESET_ALARM_LOG_COMMAND_ID (0x03)

// Commands for cluster: Power Profile
#define ZCL_POWER_PROFILE_REQUEST_COMMAND_ID (0x00)
#define ZCL_POWER_PROFILE_NOTIFICATION_COMMAND_ID (0x00)
#define ZCL_POWER_PROFILE_STATE_REQUEST_COMMAND_ID (0x01)
#define ZCL_POWER_PROFILE_RESPONSE_COMMAND_ID (0x01)
#define ZCL_GET_POWER_PROFILE_PRICE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_POWER_PROFILE_STATE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_GET_OVERALL_SCHEDULE_PRICE_RESPONSE_COMMAND_ID (0x03)
#define ZCL_GET_POWER_PROFILE_PRICE_COMMAND_ID (0x03)
#define ZCL_ENERGY_PHASES_SCHEDULE_NOTIFICATION_COMMAND_ID (0x04)
#define ZCL_POWER_PROFILES_STATE_NOTIFICATION_COMMAND_ID (0x04)
#define ZCL_ENERGY_PHASES_SCHEDULE_RESPONSE_COMMAND_ID (0x05)
#define ZCL_GET_OVERALL_SCHEDULE_PRICE_COMMAND_ID (0x05)
#define ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_REQUEST_COMMAND_ID (0x06)
#define ZCL_ENERGY_PHASES_SCHEDULE_REQUEST_COMMAND_ID (0x06)
#define ZCL_ENERGY_PHASES_SCHEDULE_STATE_REQUEST_COMMAND_ID (0x07)
#define ZCL_ENERGY_PHASES_SCHEDULE_STATE_RESPONSE_COMMAND_ID (0x07)
#define ZCL_GET_POWER_PROFILE_PRICE_EXTENDED_RESPONSE_COMMAND_ID (0x08)
#define ZCL_ENERGY_PHASES_SCHEDULE_STATE_NOTIFICATION_COMMAND_ID (0x08)
#define ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_NOTIFICATION_COMMAND_ID (0x09)
#define ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_RESPONSE_COMMAND_ID (0x0A)
#define ZCL_GET_POWER_PROFILE_PRICE_EXTENDED_COMMAND_ID (0x0B)

// Commands for cluster: Appliance Control
#define ZCL_EXECUTION_OF_A_COMMAND_COMMAND_ID (0x00)
#define ZCL_SIGNAL_STATE_RESPONSE_COMMAND_ID (0x00)
#define ZCL_SIGNAL_STATE_COMMAND_ID (0x01)
#define ZCL_SIGNAL_STATE_NOTIFICATION_COMMAND_ID (0x01)
#define ZCL_WRITE_FUNCTIONS_COMMAND_ID (0x02)
#define ZCL_OVERLOAD_PAUSE_RESUME_COMMAND_ID (0x03)
#define ZCL_OVERLOAD_PAUSE_COMMAND_ID (0x04)
#define ZCL_OVERLOAD_WARNING_COMMAND_ID (0x05)

// Commands for cluster: Poll Control
#define ZCL_CHECK_IN_COMMAND_ID (0x00)
#define ZCL_CHECK_IN_RESPONSE_COMMAND_ID (0x00)
#define ZCL_FAST_POLL_STOP_COMMAND_ID (0x01)
#define ZCL_SET_LONG_POLL_INTERVAL_COMMAND_ID (0x02)
#define ZCL_SET_SHORT_POLL_INTERVAL_COMMAND_ID (0x03)

// Commands for cluster: Bridged Actions
#define ZCL_INSTANT_ACTION_COMMAND_ID (0x00)
#define ZCL_INSTANT_ACTION_WITH_TRANSITION_COMMAND_ID (0x01)
#define ZCL_START_ACTION_COMMAND_ID (0x02)
#define ZCL_START_ACTION_WITH_DURATION_COMMAND_ID (0x03)
#define ZCL_STOP_ACTION_COMMAND_ID (0x04)
#define ZCL_PAUSE_ACTION_COMMAND_ID (0x05)
#define ZCL_PAUSE_ACTION_WITH_DURATION_COMMAND_ID (0x06)
#define ZCL_RESUME_ACTION_COMMAND_ID (0x07)
#define ZCL_ENABLE_ACTION_COMMAND_ID (0x08)
#define ZCL_ENABLE_ACTION_WITH_DURATION_COMMAND_ID (0x09)
#define ZCL_DISABLE_ACTION_COMMAND_ID (0x0A)
#define ZCL_DISABLE_ACTION_WITH_DURATION_COMMAND_ID (0x0B)

// Commands for cluster: Basic
#define ZCL_START_UP_COMMAND_ID (0x00)
#define ZCL_MFG_SPECIFIC_PING_COMMAND_ID (0x00)
#define ZCL_SHUT_DOWN_COMMAND_ID (0x01)
#define ZCL_LEAVE_COMMAND_ID (0x02)

// Commands for cluster: OTA Software Update Provider
#define ZCL_QUERY_IMAGE_COMMAND_ID (0x00)
#define ZCL_APPLY_UPDATE_REQUEST_COMMAND_ID (0x01)
#define ZCL_NOTIFY_UPDATE_APPLIED_COMMAND_ID (0x02)
#define ZCL_QUERY_IMAGE_RESPONSE_COMMAND_ID (0x03)
#define ZCL_APPLY_UPDATE_RESPONSE_COMMAND_ID (0x04)

// Commands for cluster: OTA Software Update Requestor
#define ZCL_ANNOUNCE_OTA_PROVIDER_COMMAND_ID (0x00)

// Commands for cluster: General Commissioning
#define ZCL_ARM_FAIL_SAFE_COMMAND_ID (0x00)
#define ZCL_ARM_FAIL_SAFE_RESPONSE_COMMAND_ID (0x01)
#define ZCL_SET_REGULATORY_CONFIG_COMMAND_ID (0x02)
#define ZCL_SET_REGULATORY_CONFIG_RESPONSE_COMMAND_ID (0x03)
#define ZCL_COMMISSIONING_COMPLETE_COMMAND_ID (0x04)
#define ZCL_COMMISSIONING_COMPLETE_RESPONSE_COMMAND_ID (0x05)

// Commands for cluster: Network Commissioning
#define ZCL_SCAN_NETWORKS_COMMAND_ID (0x00)
#define ZCL_SCAN_NETWORKS_RESPONSE_COMMAND_ID (0x01)
#define ZCL_ADD_WI_FI_NETWORK_COMMAND_ID (0x02)
#define ZCL_ADD_WI_FI_NETWORK_RESPONSE_COMMAND_ID (0x03)
#define ZCL_UPDATE_WI_FI_NETWORK_COMMAND_ID (0x04)
#define ZCL_UPDATE_WI_FI_NETWORK_RESPONSE_COMMAND_ID (0x05)
#define ZCL_ADD_THREAD_NETWORK_COMMAND_ID (0x06)
#define ZCL_ADD_THREAD_NETWORK_RESPONSE_COMMAND_ID (0x07)
#define ZCL_UPDATE_THREAD_NETWORK_COMMAND_ID (0x08)
#define ZCL_UPDATE_THREAD_NETWORK_RESPONSE_COMMAND_ID (0x09)
#define ZCL_REMOVE_NETWORK_COMMAND_ID (0x0A)
#define ZCL_REMOVE_NETWORK_RESPONSE_COMMAND_ID (0x0B)
#define ZCL_ENABLE_NETWORK_COMMAND_ID (0x0C)
#define ZCL_ENABLE_NETWORK_RESPONSE_COMMAND_ID (0x0D)
#define ZCL_DISABLE_NETWORK_COMMAND_ID (0x0E)
#define ZCL_DISABLE_NETWORK_RESPONSE_COMMAND_ID (0x0F)

// Commands for cluster: Diagnostic Logs
#define ZCL_RETRIEVE_LOGS_REQUEST_COMMAND_ID (0x00)
#define ZCL_RETRIEVE_LOGS_RESPONSE_COMMAND_ID (0x01)

// Commands for cluster: Software Diagnostics
#define ZCL_RESET_WATERMARKS_COMMAND_ID (0x00)

// Commands for cluster: Thread Network Diagnostics
#define ZCL_RESET_COUNTS_COMMAND_ID (0x00)

// Commands for cluster: WiFi Network Diagnostics
#define ZCL_RESET_COUNTS_COMMAND_ID (0x00)

// Commands for cluster: Ethernet Network Diagnostics
#define ZCL_RESET_COUNTS_COMMAND_ID (0x00)

// Commands for cluster: Bridged Device Basic
#define ZCL_START_UP_COMMAND_ID (0x00)
#define ZCL_SHUT_DOWN_COMMAND_ID (0x01)
#define ZCL_LEAVE_COMMAND_ID (0x02)
#define ZCL_REACHABLE_CHANGED_COMMAND_ID (0x03)

// Commands for cluster: AdministratorCommissioning
#define ZCL_OPEN_COMMISSIONING_WINDOW_COMMAND_ID (0x00)
#define ZCL_OPEN_BASIC_COMMISSIONING_WINDOW_COMMAND_ID (0x01)
#define ZCL_REVOKE_COMMISSIONING_COMMAND_ID (0x02)

// Commands for cluster: Operational Credentials
#define ZCL_ATTESTATION_REQUEST_COMMAND_ID (0x00)
#define ZCL_ATTESTATION_RESPONSE_COMMAND_ID (0x01)
#define ZCL_CERTIFICATE_CHAIN_REQUEST_COMMAND_ID (0x02)
#define ZCL_CERTIFICATE_CHAIN_RESPONSE_COMMAND_ID (0x03)
#define ZCL_OP_CSR_REQUEST_COMMAND_ID (0x04)
#define ZCL_OP_CSR_RESPONSE_COMMAND_ID (0x05)
#define ZCL_ADD_NOC_COMMAND_ID (0x06)
#define ZCL_UPDATE_NOC_COMMAND_ID (0x07)
#define ZCL_NOC_RESPONSE_COMMAND_ID (0x08)
#define ZCL_UPDATE_FABRIC_LABEL_COMMAND_ID (0x09)
#define ZCL_REMOVE_FABRIC_COMMAND_ID (0x0A)
#define ZCL_ADD_TRUSTED_ROOT_CERTIFICATE_COMMAND_ID (0x0B)
#define ZCL_REMOVE_TRUSTED_ROOT_CERTIFICATE_COMMAND_ID (0x0C)

// Commands for cluster: Mode Select
#define ZCL_CHANGE_TO_MODE_COMMAND_ID (0x00)

// Commands for cluster: Door Lock
#define ZCL_LOCK_DOOR_COMMAND_ID (0x00)
#define ZCL_LOCK_DOOR_RESPONSE_COMMAND_ID (0x00)
#define ZCL_UNLOCK_DOOR_COMMAND_ID (0x01)
#define ZCL_UNLOCK_DOOR_RESPONSE_COMMAND_ID (0x01)
#define ZCL_TOGGLE_COMMAND_ID (0x02)
#define ZCL_TOGGLE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_UNLOCK_WITH_TIMEOUT_COMMAND_ID (0x03)
#define ZCL_UNLOCK_WITH_TIMEOUT_RESPONSE_COMMAND_ID (0x03)
#define ZCL_GET_LOG_RECORD_COMMAND_ID (0x04)
#define ZCL_GET_LOG_RECORD_RESPONSE_COMMAND_ID (0x04)
#define ZCL_SET_PIN_COMMAND_ID (0x05)
#define ZCL_SET_PIN_RESPONSE_COMMAND_ID (0x05)
#define ZCL_GET_PIN_COMMAND_ID (0x06)
#define ZCL_GET_PIN_RESPONSE_COMMAND_ID (0x06)
#define ZCL_CLEAR_PIN_COMMAND_ID (0x07)
#define ZCL_CLEAR_PIN_RESPONSE_COMMAND_ID (0x07)
#define ZCL_CLEAR_ALL_PINS_COMMAND_ID (0x08)
#define ZCL_CLEAR_ALL_PINS_RESPONSE_COMMAND_ID (0x08)
#define ZCL_SET_USER_STATUS_COMMAND_ID (0x09)
#define ZCL_SET_USER_STATUS_RESPONSE_COMMAND_ID (0x09)
#define ZCL_GET_USER_STATUS_COMMAND_ID (0x0A)
#define ZCL_GET_USER_STATUS_RESPONSE_COMMAND_ID (0x0A)
#define ZCL_SET_WEEKDAY_SCHEDULE_COMMAND_ID (0x0B)
#define ZCL_SET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0B)
#define ZCL_GET_WEEKDAY_SCHEDULE_COMMAND_ID (0x0C)
#define ZCL_GET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0C)
#define ZCL_CLEAR_WEEKDAY_SCHEDULE_COMMAND_ID (0x0D)
#define ZCL_CLEAR_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0D)
#define ZCL_SET_YEARDAY_SCHEDULE_COMMAND_ID (0x0E)
#define ZCL_SET_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0E)
#define ZCL_GET_YEARDAY_SCHEDULE_COMMAND_ID (0x0F)
#define ZCL_GET_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x0F)
#define ZCL_CLEAR_YEARDAY_SCHEDULE_COMMAND_ID (0x10)
#define ZCL_CLEAR_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x10)
#define ZCL_SET_HOLIDAY_SCHEDULE_COMMAND_ID (0x11)
#define ZCL_SET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x11)
#define ZCL_GET_HOLIDAY_SCHEDULE_COMMAND_ID (0x12)
#define ZCL_GET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x12)
#define ZCL_CLEAR_HOLIDAY_SCHEDULE_COMMAND_ID (0x13)
#define ZCL_CLEAR_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x13)
#define ZCL_SET_USER_TYPE_COMMAND_ID (0x14)
#define ZCL_SET_USER_TYPE_RESPONSE_COMMAND_ID (0x14)
#define ZCL_GET_USER_TYPE_COMMAND_ID (0x15)
#define ZCL_GET_USER_TYPE_RESPONSE_COMMAND_ID (0x15)
#define ZCL_SET_RFID_COMMAND_ID (0x16)
#define ZCL_SET_RFID_RESPONSE_COMMAND_ID (0x16)
#define ZCL_GET_RFID_COMMAND_ID (0x17)
#define ZCL_GET_RFID_RESPONSE_COMMAND_ID (0x17)
#define ZCL_CLEAR_RFID_COMMAND_ID (0x18)
#define ZCL_CLEAR_RFID_RESPONSE_COMMAND_ID (0x18)
#define ZCL_CLEAR_ALL_RFIDS_COMMAND_ID (0x19)
#define ZCL_CLEAR_ALL_RFIDS_RESPONSE_COMMAND_ID (0x19)
#define ZCL_OPERATION_EVENT_NOTIFICATION_COMMAND_ID (0x20)
#define ZCL_PROGRAMMING_EVENT_NOTIFICATION_COMMAND_ID (0x21)

// Commands for cluster: Window Covering
#define ZCL_UP_OR_OPEN_COMMAND_ID (0x00)
#define ZCL_DOWN_OR_CLOSE_COMMAND_ID (0x01)
#define ZCL_STOP_MOTION_COMMAND_ID (0x02)
#define ZCL_GO_TO_LIFT_VALUE_COMMAND_ID (0x04)
#define ZCL_GO_TO_LIFT_PERCENTAGE_COMMAND_ID (0x05)
#define ZCL_GO_TO_TILT_VALUE_COMMAND_ID (0x07)
#define ZCL_GO_TO_TILT_PERCENTAGE_COMMAND_ID (0x08)

// Commands for cluster: Barrier Control
#define ZCL_BARRIER_CONTROL_GO_TO_PERCENT_COMMAND_ID (0x00)
#define ZCL_BARRIER_CONTROL_STOP_COMMAND_ID (0x01)

// Commands for cluster: Thermostat
#define ZCL_SETPOINT_RAISE_LOWER_COMMAND_ID (0x00)
#define ZCL_CURRENT_WEEKLY_SCHEDULE_COMMAND_ID (0x00)
#define ZCL_SET_WEEKLY_SCHEDULE_COMMAND_ID (0x01)
#define ZCL_RELAY_STATUS_LOG_COMMAND_ID (0x01)
#define ZCL_GET_WEEKLY_SCHEDULE_COMMAND_ID (0x02)
#define ZCL_CLEAR_WEEKLY_SCHEDULE_COMMAND_ID (0x03)
#define ZCL_GET_RELAY_STATUS_LOG_COMMAND_ID (0x04)

// Commands for cluster: Color Control
#define ZCL_MOVE_TO_HUE_COMMAND_ID (0x00)
#define ZCL_MOVE_HUE_COMMAND_ID (0x01)
#define ZCL_STEP_HUE_COMMAND_ID (0x02)
#define ZCL_MOVE_TO_SATURATION_COMMAND_ID (0x03)
#define ZCL_MOVE_SATURATION_COMMAND_ID (0x04)
#define ZCL_STEP_SATURATION_COMMAND_ID (0x05)
#define ZCL_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID (0x06)
#define ZCL_MOVE_TO_COLOR_COMMAND_ID (0x07)
#define ZCL_MOVE_COLOR_COMMAND_ID (0x08)
#define ZCL_STEP_COLOR_COMMAND_ID (0x09)
#define ZCL_MOVE_TO_COLOR_TEMPERATURE_COMMAND_ID (0x0A)
#define ZCL_ENHANCED_MOVE_TO_HUE_COMMAND_ID (0x40)
#define ZCL_ENHANCED_MOVE_HUE_COMMAND_ID (0x41)
#define ZCL_ENHANCED_STEP_HUE_COMMAND_ID (0x42)
#define ZCL_ENHANCED_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID (0x43)
#define ZCL_COLOR_LOOP_SET_COMMAND_ID (0x44)
#define ZCL_STOP_MOVE_STEP_COMMAND_ID (0x47)
#define ZCL_MOVE_COLOR_TEMPERATURE_COMMAND_ID (0x4B)
#define ZCL_STEP_COLOR_TEMPERATURE_COMMAND_ID (0x4C)

// Commands for cluster: IAS Zone
#define ZCL_ZONE_ENROLL_RESPONSE_COMMAND_ID (0x00)
#define ZCL_ZONE_STATUS_CHANGE_NOTIFICATION_COMMAND_ID (0x00)
#define ZCL_INITIATE_NORMAL_OPERATION_MODE_COMMAND_ID (0x01)
#define ZCL_ZONE_ENROLL_REQUEST_COMMAND_ID (0x01)
#define ZCL_INITIATE_TEST_MODE_COMMAND_ID (0x02)
#define ZCL_INITIATE_NORMAL_OPERATION_MODE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_INITIATE_TEST_MODE_RESPONSE_COMMAND_ID (0x03)

// Commands for cluster: IAS ACE
#define ZCL_ARM_COMMAND_ID (0x00)
#define ZCL_ARM_RESPONSE_COMMAND_ID (0x00)
#define ZCL_BYPASS_COMMAND_ID (0x01)
#define ZCL_GET_ZONE_ID_MAP_RESPONSE_COMMAND_ID (0x01)
#define ZCL_EMERGENCY_COMMAND_ID (0x02)
#define ZCL_GET_ZONE_INFORMATION_RESPONSE_COMMAND_ID (0x02)
#define ZCL_FIRE_COMMAND_ID (0x03)
#define ZCL_ZONE_STATUS_CHANGED_COMMAND_ID (0x03)
#define ZCL_PANIC_COMMAND_ID (0x04)
#define ZCL_PANEL_STATUS_CHANGED_COMMAND_ID (0x04)
#define ZCL_GET_ZONE_ID_MAP_COMMAND_ID (0x05)
#define ZCL_GET_PANEL_STATUS_RESPONSE_COMMAND_ID (0x05)
#define ZCL_GET_ZONE_INFORMATION_COMMAND_ID (0x06)
#define ZCL_SET_BYPASSED_ZONE_LIST_COMMAND_ID (0x06)
#define ZCL_GET_PANEL_STATUS_COMMAND_ID (0x07)
#define ZCL_BYPASS_RESPONSE_COMMAND_ID (0x07)
#define ZCL_GET_BYPASSED_ZONE_LIST_COMMAND_ID (0x08)
#define ZCL_GET_ZONE_STATUS_RESPONSE_COMMAND_ID (0x08)
#define ZCL_GET_ZONE_STATUS_COMMAND_ID (0x09)

// Commands for cluster: IAS WD
#define ZCL_START_WARNING_COMMAND_ID (0x00)
#define ZCL_SQUAWK_COMMAND_ID (0x01)

// Commands for cluster: TV Channel
#define ZCL_CHANGE_CHANNEL_COMMAND_ID (0x00)
#define ZCL_CHANGE_CHANNEL_RESPONSE_COMMAND_ID (0x00)
#define ZCL_CHANGE_CHANNEL_BY_NUMBER_COMMAND_ID (0x01)
#define ZCL_SKIP_CHANNEL_COMMAND_ID (0x02)

// Commands for cluster: Target Navigator
#define ZCL_NAVIGATE_TARGET_COMMAND_ID (0x00)
#define ZCL_NAVIGATE_TARGET_RESPONSE_COMMAND_ID (0x00)

// Commands for cluster: Media Playback
#define ZCL_MEDIA_PLAY_COMMAND_ID (0x00)
#define ZCL_MEDIA_PLAY_RESPONSE_COMMAND_ID (0x00)
#define ZCL_MEDIA_PAUSE_COMMAND_ID (0x01)
#define ZCL_MEDIA_PAUSE_RESPONSE_COMMAND_ID (0x01)
#define ZCL_MEDIA_STOP_COMMAND_ID (0x02)
#define ZCL_MEDIA_STOP_RESPONSE_COMMAND_ID (0x02)
#define ZCL_MEDIA_START_OVER_COMMAND_ID (0x03)
#define ZCL_MEDIA_START_OVER_RESPONSE_COMMAND_ID (0x03)
#define ZCL_MEDIA_PREVIOUS_COMMAND_ID (0x04)
#define ZCL_MEDIA_PREVIOUS_RESPONSE_COMMAND_ID (0x04)
#define ZCL_MEDIA_NEXT_COMMAND_ID (0x05)
#define ZCL_MEDIA_NEXT_RESPONSE_COMMAND_ID (0x05)
#define ZCL_MEDIA_REWIND_COMMAND_ID (0x06)
#define ZCL_MEDIA_REWIND_RESPONSE_COMMAND_ID (0x06)
#define ZCL_MEDIA_FAST_FORWARD_COMMAND_ID (0x07)
#define ZCL_MEDIA_FAST_FORWARD_RESPONSE_COMMAND_ID (0x07)
#define ZCL_MEDIA_SKIP_FORWARD_COMMAND_ID (0x08)
#define ZCL_MEDIA_SKIP_FORWARD_RESPONSE_COMMAND_ID (0x08)
#define ZCL_MEDIA_SKIP_BACKWARD_COMMAND_ID (0x09)
#define ZCL_MEDIA_SKIP_BACKWARD_RESPONSE_COMMAND_ID (0x09)
#define ZCL_MEDIA_SEEK_COMMAND_ID (0x0A)
#define ZCL_MEDIA_SEEK_RESPONSE_COMMAND_ID (0x0B)

// Commands for cluster: Media Input
#define ZCL_SELECT_INPUT_COMMAND_ID (0x00)
#define ZCL_SHOW_INPUT_STATUS_COMMAND_ID (0x01)
#define ZCL_HIDE_INPUT_STATUS_COMMAND_ID (0x02)
#define ZCL_RENAME_INPUT_COMMAND_ID (0x03)

// Commands for cluster: Low Power
#define ZCL_SLEEP_COMMAND_ID (0x00)

// Commands for cluster: Keypad Input
#define ZCL_SEND_KEY_COMMAND_ID (0x00)
#define ZCL_SEND_KEY_RESPONSE_COMMAND_ID (0x00)

// Commands for cluster: Content Launcher
#define ZCL_LAUNCH_CONTENT_COMMAND_ID (0x00)
#define ZCL_LAUNCH_CONTENT_RESPONSE_COMMAND_ID (0x00)
#define ZCL_LAUNCH_URL_COMMAND_ID (0x01)
#define ZCL_LAUNCH_URL_RESPONSE_COMMAND_ID (0x01)

// Commands for cluster: Audio Output
#define ZCL_SELECT_OUTPUT_COMMAND_ID (0x00)
#define ZCL_RENAME_OUTPUT_COMMAND_ID (0x01)

// Commands for cluster: Application Launcher
#define ZCL_LAUNCH_APP_COMMAND_ID (0x00)
#define ZCL_LAUNCH_APP_RESPONSE_COMMAND_ID (0x00)

// Commands for cluster: Application Basic
#define ZCL_CHANGE_STATUS_COMMAND_ID (0x00)

// Commands for cluster: Account Login
#define ZCL_GET_SETUP_PIN_COMMAND_ID (0x00)
#define ZCL_GET_SETUP_PIN_RESPONSE_COMMAND_ID (0x00)
#define ZCL_LOGIN_COMMAND_ID (0x01)

// Commands for cluster: Test Cluster
#define ZCL_TEST_COMMAND_ID (0x00)
#define ZCL_TEST_SPECIFIC_RESPONSE_COMMAND_ID (0x00)
#define ZCL_TEST_NOT_HANDLED_COMMAND_ID (0x01)
#define ZCL_TEST_ADD_ARGUMENTS_RESPONSE_COMMAND_ID (0x01)
#define ZCL_TEST_SPECIFIC_COMMAND_ID (0x02)
#define ZCL_TEST_SIMPLE_ARGUMENT_RESPONSE_COMMAND_ID (0x02)
#define ZCL_TEST_UNKNOWN_COMMAND_COMMAND_ID (0x03)
#define ZCL_TEST_STRUCT_ARRAY_ARGUMENT_RESPONSE_COMMAND_ID (0x03)
#define ZCL_TEST_ADD_ARGUMENTS_COMMAND_ID (0x04)
#define ZCL_TEST_LIST_INT8_U_REVERSE_RESPONSE_COMMAND_ID (0x04)
#define ZCL_TEST_SIMPLE_ARGUMENT_REQUEST_COMMAND_ID (0x05)
#define ZCL_TEST_ENUMS_RESPONSE_COMMAND_ID (0x05)
#define ZCL_TEST_STRUCT_ARRAY_ARGUMENT_REQUEST_COMMAND_ID (0x06)
#define ZCL_TEST_NULLABLE_OPTIONAL_RESPONSE_COMMAND_ID (0x06)
#define ZCL_TEST_STRUCT_ARGUMENT_REQUEST_COMMAND_ID (0x07)
#define ZCL_TEST_COMPLEX_NULLABLE_OPTIONAL_RESPONSE_COMMAND_ID (0x07)
#define ZCL_TEST_NESTED_STRUCT_ARGUMENT_REQUEST_COMMAND_ID (0x08)
#define ZCL_BOOLEAN_RESPONSE_COMMAND_ID (0x08)
#define ZCL_TEST_LIST_STRUCT_ARGUMENT_REQUEST_COMMAND_ID (0x09)
#define ZCL_SIMPLE_STRUCT_RESPONSE_COMMAND_ID (0x09)
#define ZCL_TEST_LIST_INT8_U_ARGUMENT_REQUEST_COMMAND_ID (0x0A)
#define ZCL_TEST_NESTED_STRUCT_LIST_ARGUMENT_REQUEST_COMMAND_ID (0x0B)
#define ZCL_TEST_LIST_NESTED_STRUCT_LIST_ARGUMENT_REQUEST_COMMAND_ID (0x0C)
#define ZCL_TEST_LIST_INT8_U_REVERSE_REQUEST_COMMAND_ID (0x0D)
#define ZCL_TEST_ENUMS_REQUEST_COMMAND_ID (0x0E)
#define ZCL_TEST_NULLABLE_OPTIONAL_REQUEST_COMMAND_ID (0x0F)
#define ZCL_TEST_COMPLEX_NULLABLE_OPTIONAL_REQUEST_COMMAND_ID (0x10)
#define ZCL_SIMPLE_STRUCT_ECHO_REQUEST_COMMAND_ID (0x11)

// Commands for cluster: Messaging
#define ZCL_DISPLAY_MESSAGE_COMMAND_ID (0x00)
#define ZCL_GET_LAST_MESSAGE_COMMAND_ID (0x00)
#define ZCL_CANCEL_MESSAGE_COMMAND_ID (0x01)
#define ZCL_MESSAGE_CONFIRMATION_COMMAND_ID (0x01)
#define ZCL_DISPLAY_PROTECTED_MESSAGE_COMMAND_ID (0x02)
#define ZCL_GET_MESSAGE_CANCELLATION_COMMAND_ID (0x02)
#define ZCL_CANCEL_ALL_MESSAGES_COMMAND_ID (0x03)

// Commands for cluster: Appliance Events and Alert
#define ZCL_GET_ALERTS_COMMAND_ID (0x00)
#define ZCL_GET_ALERTS_RESPONSE_COMMAND_ID (0x00)
#define ZCL_ALERTS_NOTIFICATION_COMMAND_ID (0x01)
#define ZCL_EVENTS_NOTIFICATION_COMMAND_ID (0x02)

// Commands for cluster: Appliance Statistics
#define ZCL_LOG_NOTIFICATION_COMMAND_ID (0x00)
#define ZCL_LOG_REQUEST_COMMAND_ID (0x00)
#define ZCL_LOG_RESPONSE_COMMAND_ID (0x01)
#define ZCL_LOG_QUEUE_REQUEST_COMMAND_ID (0x01)
#define ZCL_LOG_QUEUE_RESPONSE_COMMAND_ID (0x02)
#define ZCL_STATISTICS_AVAILABLE_COMMAND_ID (0x03)

// Commands for cluster: Electrical Measurement
#define ZCL_GET_PROFILE_INFO_RESPONSE_COMMAND_COMMAND_ID (0x00)
#define ZCL_GET_PROFILE_INFO_COMMAND_COMMAND_ID (0x00)
#define ZCL_GET_MEASUREMENT_PROFILE_RESPONSE_COMMAND_COMMAND_ID (0x01)
#define ZCL_GET_MEASUREMENT_PROFILE_COMMAND_COMMAND_ID (0x01)

// Commands for cluster: Binding
#define ZCL_BIND_COMMAND_ID (0x00)
#define ZCL_UNBIND_COMMAND_ID (0x01)
