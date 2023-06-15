//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMDHome, NSObject, NSSet, NSString;
@protocol HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCloudShareParticipantsManager : HMFObject
{
    id <HMDCloudShareParticipantsManagerDataSource> _dataSource;
    id <HMDCloudShareParticipantsManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMBCloudZone *_cloudZone;
    HMDHome *_home;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCloudShareParticipantsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDCloudShareParticipantsManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (void)handleHomeUserRemovedNotification:(id)arg1;
- (void)handleHomeUserAddedNotification:(id)arg1;
- (id)_untrustedInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(_Bool)arg2;
- (id)fetchInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(_Bool)arg2;
- (id)fetchInvitationToUser:(id)arg1 shouldGrantWriteAccess:(_Bool)arg2;
- (void)_inviteUser:(id)arg1 usingDevice:(id)arg2;
- (_Bool)isAcceptedParticipatingUser:(id)arg1;
- (void)clearParticipants;
- (void)inviteUser:(id)arg1 usingDevice:(id)arg2;
- (void)updateShareParticipants;
- (void)configure;
@property(readonly) NSSet *participatingUsers;
- (id)initWithQueue:(id)arg1 cloudZone:(id)arg2 home:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

