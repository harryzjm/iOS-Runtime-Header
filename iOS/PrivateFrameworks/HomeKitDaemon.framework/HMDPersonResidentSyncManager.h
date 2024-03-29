//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDResidentSyncManager, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDPersonResidentSyncManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPersonResidentSyncManager : HMFObject
{
    id <HMDPersonResidentSyncManagerDelegate> _delegate;
    NSUUID *_UUID;
    HMFMessageDispatcher *_messageDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDResidentSyncManager *_residentSyncManager;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDResidentSyncManager *residentSyncManager; // @synthesize residentSyncManager=_residentSyncManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property __weak id <HMDPersonResidentSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)handleRemoveAllAssociatedDataMessage:(id)arg1;
- (void)handleModifyPersonsMessage:(id)arg1;
- (id)removeAllAssociatedData;
- (id)addOrUpdatePersons:(id)arg1 andRemovePersonsWithUUIDs:(id)arg2;
- (id)removePersonsWithUUIDs:(id)arg1;
- (id)addOrUpdatePersons:(id)arg1;
- (void)configureWithHome:(id)arg1 delegate:(id)arg2;
- (id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 residentSyncManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

