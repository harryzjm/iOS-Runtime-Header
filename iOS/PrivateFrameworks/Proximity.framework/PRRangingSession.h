//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, PRPeer, PRRangingDevice;
@protocol OS_dispatch_queue, OS_os_log, PRRangingSessionDelegate;

@interface PRRangingSession : NSObject
{
    NSObject<OS_os_log> *_logger;
    PRPeer *_localPeer;
    PRRangingDevice *_rangingDevice;
    _Bool _isReady;
    _Bool _valid;
    id <PRRangingSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_sessionParticipants;
    PRPeer *_rangedPeer;
}

@property(retain) PRPeer *rangedPeer; // @synthesize rangedPeer=_rangedPeer;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property _Bool isReady; // @synthesize isReady=_isReady;
@property(retain) NSMutableSet *sessionParticipants; // @synthesize sessionParticipants=_sessionParticipants;
@property(readonly, copy) PRPeer *localPeer; // @synthesize localPeer=_localPeer;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <PRRangingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)requestInitialCollaborationDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (void)pushCollaborationData:(id)arg1;
- (void)stopRangingWithPeer:(id)arg1;
- (void)startRangingWithPeer:(id)arg1;
- (id)init;

@end
