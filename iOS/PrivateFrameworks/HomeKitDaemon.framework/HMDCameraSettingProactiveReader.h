//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMFMessage, NSObject, NSSet, NSString;
@protocol HMDCameraSettingProactiveReaderDelegate, OS_dispatch_queue;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging>
{
    NSString *_logIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMDCameraSettingProactiveReaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSSet *_streamControlMessageHandlers;
    HMDAccessory *_accessory;
    HMFMessage *_pendingMessage;
    NSString *_sessionID;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) HMFMessage *pendingMessage; // @synthesize pendingMessage=_pendingMessage;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSSet *streamControlMessageHandlers; // @synthesize streamControlMessageHandlers=_streamControlMessageHandlers;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <HMDCameraSettingProactiveReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)_callDidCompleteReadDelegateCallback;
- (id)_streamingStatusForResponse:(id)arg1;
- (id)_inUseStreamControlMessageHandlersForReadResponses:(id)arg1;
- (id)_availableStreamControlMessageHandlersForReadResponses:(id)arg1;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (void)readSetting;
- (void)handleMessage:(id)arg1;
- (_Bool)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 message:(id)arg5 streamMessageHandlers:(id)arg6 logID:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
