//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString, NSUUID;
@protocol HMDMediaGroupsAggregatorBackupReceiverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregatorBackupReceiver : HMFObject
{
    id <HMDMediaGroupsAggregatorBackupReceiverDelegate> _delegate;
    NSUUID *_identifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsAggregatorBackupReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)handleGroupsBackupDataMessage:(id)arg1;
- (void)registerForMessagesWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

