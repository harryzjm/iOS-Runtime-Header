//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLRegion, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDLocationEvent
{
    CLRegion *_region;
    NSUUID *_userUUID;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(retain, nonatomic) CLRegion *region; // @synthesize region=_region;
- (id)analyticsTriggerEventData;
- (void)didExitRegion:(id)arg1;
- (void)didEnterRegion:(id)arg1;
- (void)informLocationEventOccuranceToResident;
- (void)_handleLocationEventOccured:(id)arg1;
- (void)locationEventOccured;
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCompatibleWithEvent:(id)arg1;
- (id)createPayload;
@property(readonly, copy, nonatomic) CLRegion *uniqueRegion;
- (id)dumpState;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (void)checkFMFStatus:(id)arg1;
- (_Bool)doesThisTargetCurrentUser;
- (void)fmfStatusUpdateNotification:(id)arg1;
- (void)_registerForMessages;
- (id)emptyModelObject;
- (_Bool)isActive;
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

