//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCharacteristic, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicWriteAction
{
    HMDCharacteristic *_characteristic;
    id _targetValue;
    NSDictionary *_actionInformation;
    NSString *_dumpState;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *dumpState; // @synthesize dumpState=_dumpState;
@property(readonly, nonatomic) NSDictionary *actionInformation; // @synthesize actionInformation=_actionInformation;
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
- (id)attributeDescriptions;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)associatedAccessories;
- (_Bool)isAssociatedWithAccessory:(id)arg1;
- (unsigned long long)entitlementsForNotification;
- (_Bool)isUnsecuringAction;
- (_Bool)requiresDeviceUnlock;
- (_Bool)isCompatibleWithAction:(id)arg1;
- (_Bool)isActionForCharacteristic:(id)arg1;
- (_Bool)isSecureAction;
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dictionaryRepresentation;
- (id)stateDump;
@property(readonly, nonatomic) __weak HMDCharacteristic *characteristic;
- (unsigned long long)type;
- (id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

