//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRItemNotificationReceiving-Protocol.h>

@class BRNotificationQueue, NSMutableDictionary, NSString;
@protocol BRItemNotificationSending, BRNotificationReceiverDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    BRNotificationQueue *_notifs;
    id <BRItemNotificationSending> _sender;
    _Atomic int _gatherDones;
    id <BRNotificationReceiverDelegate> _delegate;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _receivedChanges;
    unsigned long long _batchingChanges;
    double _batchingDelay;
    unsigned long long _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
    _Atomic int _suspendCount;
    int _networkReachabilityToken;
    _Bool _isNetworkReachable;
    _Bool _isInvalidated;
    id <NSObject> _accountTokenDidChangeNotificationObserver;
}

@property(retain, nonatomic) id <BRNotificationReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double batchingDelay; // @synthesize batchingDelay=_batchingDelay;
@property(nonatomic) unsigned long long batchingChanges; // @synthesize batchingChanges=_batchingChanges;
- (void).cxx_destruct;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)receiveStitchingUpdates:(id)arg1;
- (void)networkDidChangeReachabilityStatusTo:(_Bool)arg1;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_receiveUpdates:(id)arg1;
- (void)_signalSourceIfNeeded;
- (oneway void)invalidateAndDontNotifyDelegate;
- (oneway void)invalidate;
- (void)invalidateAndNotify:(_Bool)arg1;
- (void)_invalidateAndNotify:(_Bool)arg1;
- (void)flush;
- (void)resume;
- (void)suspend;
- (void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (id)_obtainNotificationSenderFromDaemon;
- (void)dequeue:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long pendingCount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
