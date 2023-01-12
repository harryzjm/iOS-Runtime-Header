//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBLocalZone, NAFuture, NSString;
@protocol HMDDatabase, OS_dispatch_queue;

@interface HMDCompositeSettingsZoneManager : NSObject <HMFLogging, HMDDatabaseDelegate>
{
    _Bool _createZoneIfNotExist;
    id <HMDDatabase> _database;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
    NSString *_zoneName;
    NAFuture *_configurationFuture;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NAFuture *configurationFuture; // @synthesize configurationFuture=_configurationFuture;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) _Bool createZoneIfNotExist; // @synthesize createZoneIfNotExist=_createZoneIfNotExist;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
- (void)remove;
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;
- (id)database:(id)arg1 willRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;
- (id)logIdentifier;
@property(readonly, getter=isConfigured) _Bool configured;
- (id)initWithDatabase:(id)arg1 workQueue:(id)arg2 zoneName:(id)arg3 createZoneIfNotExists:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
