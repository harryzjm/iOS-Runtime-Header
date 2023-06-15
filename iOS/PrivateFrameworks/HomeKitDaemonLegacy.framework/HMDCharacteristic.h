//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicMetadata, HMDHAPAccessory, HMDService, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCharacteristic : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableSet *_notificationRegistrations;
    _Bool _notificationRegisteredWithRemoteGateway;
    _Bool _broadcastNotificationEnabled;
    NSSet *_hapCharacteristicTuples;
    id _previousValue;
    NSNumber *_stateNumber;
    HMDCharacteristicMetadata *_metadata;
    id _lastKnownValue;
    NSDate *_lastKnownValueUpdateTime;
    NSDate *_notificationEnabledTime;
    NSData *_notificationContext;
    NSData *_authorizationData;
    HMDHAPAccessory *_accessory;
    HMDService *_service;
    NSString *_characteristicType;
    NSNumber *_characteristicInstanceID;
    long long _characteristicProperties;
}

+ (id)currentTargetStateCharacteristicTypeMap;
+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (_Bool)value:(id)arg1 differentThan:(id)arg2;
+ (CDUnknownBlockType)sortComparatorForCharacteristicDictionary;
- (void).cxx_destruct;
@property(nonatomic) long long characteristicProperties; // @synthesize characteristicProperties=_characteristicProperties;
@property(retain, nonatomic) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(nonatomic) _Bool broadcastNotificationEnabled; // @synthesize broadcastNotificationEnabled=_broadcastNotificationEnabled;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)contextDataForWriteRequestWithIdentifier:(id)arg1;
@property(readonly) _Bool supportsNotificationContext;
@property(readonly) _Bool shouldIgnoreCacheValueForRead;
- (void)updateService:(id)arg1 accessory:(id)arg2;
- (_Bool)deregisterNotificationForClientIdentifier:(id)arg1;
- (_Bool)deregisterNotificationIfNotLastForClientIdentifier:(id)arg1;
- (void)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2;
- (_Bool)setNotificationEnabled:(_Bool)arg1 forClientIdentifier:(id)arg2 removeLast:(_Bool)arg3;
@property(retain, nonatomic) NSDate *notificationEnabledTime; // @synthesize notificationEnabledTime=_notificationEnabledTime;
- (_Bool)isNotificationEnabledForClientIdentifierPrefix:(id)arg1;
- (id)localClientIdentifiersWithNotificationsEnabled;
- (_Bool)isNotificationEnabledForClientIdentifier:(id)arg1;
- (_Bool)isNonClientNotificationEnabled;
- (_Bool)isNonHomeNotificationsEnabled;
- (_Bool)isClientNotificationEnabled;
- (_Bool)isNotificationEnabled;
- (_Bool)supportsWrite;
- (_Bool)supportsRead;
- (_Bool)supportsNotification;
- (id)validateValue:(id)arg1 outValue:(id *)arg2;
- (id)validateValueForNotify:(id)arg1 outValue:(id *)arg2;
- (id)validateValueForWrite:(id)arg1 outValue:(id *)arg2;
@property(copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
- (_Bool)isValueUpdatedFromHAPCharacteristic:(id)arg1;
- (void)updateLastKnownValue;
- (void)getLastKnownValueUpdateTime:(id *)arg1 stateNumber:(id *)arg2 notificationContext:(id *)arg3;
- (void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 notificationContext:(id)arg4;
@property(readonly, copy, nonatomic) id value;
@property(readonly, nonatomic) long long properties;
- (id)characteristicForHAPAccessory:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *instanceID;
@property(readonly, copy, nonatomic) NSString *type;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (void)unconfigure;
- (void)configureWithCharacteristic:(id)arg1;
- (id)_characteristicDictionaryWithAuthData:(_Bool)arg1;
- (id)getCharacteristicDictionary;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2;
@property(readonly, nonatomic) NSString *serializedIdentifier;
- (id)dumpState;
@property(readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
- (id)characteristicTypeDescription;
@property(readonly, copy, nonatomic) NSSet *notificationRegistrations;
- (id)shortDescription;
@property(retain, nonatomic) NSData *notificationContext; // @synthesize notificationContext=_notificationContext;
@property(retain, nonatomic) NSDate *lastKnownValueUpdateTime; // @synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime;
@property(retain, nonatomic) id lastKnownValue; // @synthesize lastKnownValue=_lastKnownValue;
@property(readonly, nonatomic) HMDCharacteristicMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(retain, nonatomic) NSSet *hapCharacteristicTuples; // @synthesize hapCharacteristicTuples=_hapCharacteristicTuples;
@property(nonatomic) _Bool notificationRegisteredWithRemoteGateway; // @synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (id)init;
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

