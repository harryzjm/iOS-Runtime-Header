//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCharacteristic, NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicEventBase
{
    HMDCharacteristic *_characteristic;
    NSUUID *_accessoryUUID;
    NSNumber *_serviceID;
    NSNumber *_characteristicInstanceID;
    id _previousValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)lookForCharacteristicByAccessoryUUID:(id)arg1 serviceID:(id)arg2 characteristicID:(id)arg3 inHome:(id)arg4 checkForSupport:(_Bool)arg5 outError:(id *)arg6 shouldLog:(_Bool)arg7;
+ (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, nonatomic) NSNumber *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fixCharacteristicInHome:(id)arg1;
- (void)replaceCharacteristic:(id)arg1;
- (id)createPayload;
- (_Bool)_evaluateNewValue:(id)arg1;
- (void)handleCharacteristicsChangedNotification:(id)arg1;
- (void)__handleCharacteristicsChangedPayload:(id)arg1;
- (void)_registerForMessages;
- (_Bool)isCompatibleWithEvent:(id)arg1;
- (_Bool)isActive;
- (id)description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

@end

