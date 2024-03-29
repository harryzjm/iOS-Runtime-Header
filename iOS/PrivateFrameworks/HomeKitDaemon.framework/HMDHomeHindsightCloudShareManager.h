//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDatabaseZoneManager, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeHindsightCloudShareManager : HMFObject
{
    NSString *_logIdentifier;
    NSUUID *_UUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDDatabaseZoneManager *_zoneManager;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)zoneManagerDidStart:(id)arg1;
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;
- (void)removeZones;
- (void)configure;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 zoneManager:(id)arg3;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

