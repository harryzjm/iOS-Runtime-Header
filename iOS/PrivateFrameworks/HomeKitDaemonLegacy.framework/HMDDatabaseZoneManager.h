//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDDatabaseZoneManagerConfiguration, HMDHome, NSObject, NSString, NSUUID;
@protocol HMBLocalZoneDelegate><HMBCloudZoneDelegate, HMDDatabase, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDatabaseZoneManager : HMFObject
{
    id <HMDDatabaseZoneManagerDataSource> _dataSource;
    id <HMDDatabaseZoneManagerDelegate> _delegate;
    NSString *_zoneName;
    HMDHome *_home;
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
    HMDDatabaseZoneManagerConfiguration *_defaultConfiguration;
    long long _state;
    id <HMDDatabase> _database;
    HMDCloudShareMessenger *_shareMessenger;
    id <HMBLocalZoneDelegate><HMBCloudZoneDelegate> _zoneDelegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCloudShareParticipantsManager *_participantsManager;
    CDUnknownBlockType _participantsManagerFactory;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property(retain) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMBLocalZoneDelegate><HMBCloudZoneDelegate> zoneDelegate; // @synthesize zoneDelegate=_zoneDelegate;
@property(readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property long long state; // @synthesize state=_state;
@property(copy) HMDDatabaseZoneManagerConfiguration *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property __weak id <HMDDatabaseZoneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDDatabaseZoneManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;
- (void)manager:(id)arg1 didRevokeShareAccessForUser:(id)arg2;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (void)messengerDidReceiveShareAccessRevocation:(id)arg1;
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_tearDownState;
- (void)_requestShareInvitationWithConfiguration:(id)arg1;
- (void)_sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;
- (_Bool)_handleFetchZonesResult:(id)arg1 configuration:(id)arg2;
- (_Bool)_fetchSharedZonesWithConfiguration:(id)arg1;
- (_Bool)_fetchExistingPrivateZonesWithConfiguration:(id)arg1;
- (_Bool)_fetchPrivateZonesWithConfiguration:(id)arg1;
- (void)updateShareParticipants;
- (id)remove;
- (_Bool)startWithConfiguration:(id)arg1;
- (_Bool)start;
- (void)configure;
@property(readonly, copy) NSString *containerIdentifier;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

