//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCharacteristic.h>

@class NSString, NSUUID;

@interface HMCharacteristic (HFDebugging)
+ (id)hf_descriptionForProperties:(id)arg1;
+ (id)_hf_visibleLightLevelTriggerValues;
+ (long long)_hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2 top:(unsigned long long)arg3 bottom:(unsigned long long)arg4;
+ (long long)hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2;
+ (_Bool)hf_shouldCaptureCharacteristicTypeInActionSets:(id)arg1;
+ (CDUnknownBlockType)hf_characteristicSortComparator;
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;
+ (id)hf_descriptionForCharacteristicType:(id)arg1;
+ (id)_hf_valueRangeCharacteristicTypeToVisibleTriggerValueStepMap;
+ (id)_hf_valueRangeCharacteristicTypeToAbnormalValueMap;
+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;
+ (id)hf_abnormalValueForSensorCharacteristicType:(id)arg1;
+ (id)hf_defaultAbnormalValueForValueRangeSensorCharacteristicType:(id)arg1;
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;
+ (id)hf_sensingCharacteristicTypes;
+ (id)hf_alarmCharacteristicTypes;
+ (id)hf_continuousValueRangeCharacteristicTypes;
+ (id)hf_valueRangeCharacteristicTypes;
+ (id)hf_powerStateCharacteristicTypes;
+ (id)hf_suggestionVendorForCharacteristicType:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)_hf_stepValue;
- (id)_hf_triggerValuesWithMinStepValue:(id)arg1;
- (id)_hf_lightLevelVisibleTriggerValues;
- (id)hf_visibleTriggerValues;
- (id)hf_triggerValues;
- (id)hf_maximumTriggerValue;
- (id)hf_minimumTriggerValue;
- (id)hf_thresholdValueForRange:(id)arg1;
- (id)hf_valueAfterTriggerValue:(id)arg1;
- (id)hf_valueBeforeTriggerValue:(id)arg1;
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;
- (id)hf_eventTriggersForTriggerValue:(id)arg1;
- (id)hf_eventTriggers;
- (id)hf_home;
- (id)hf_programmableSwitchValidValueSet;
- (_Bool)hf_shouldCaptureInActionSets;
- (long long)hf_sortPriority;
- (id)hf_associatedCharacteristicType;
- (id)hf_defaultValue;
- (id)hf_formattedValueUpdatedTime;
- (_Bool)hf_isReadable;
- (_Bool)hf_isWritable;
- (id)hf_characteristicTypeDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

