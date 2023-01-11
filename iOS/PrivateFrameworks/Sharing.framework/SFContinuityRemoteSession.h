//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SFDevice, SFSession;
@protocol OS_dispatch_queue;

@interface SFContinuityRemoteSession : NSObject
{
    _Bool _activateCalled;
    CDUnknownBlockType _activateHandler;
    _Bool _invalidateCalled;
    NSMutableArray *_messageQueue;
    _Bool _pairVerifyDone;
    _Bool _pairVerifyRunning;
    SFSession *_sfSession;
    _Bool _sfSessionActivated;
    _Bool _started;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    SFDevice *_peerDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_sendQueuedMesssages;
- (void)_sendCommand:(int)arg1 options:(id)arg2;
- (void)sendCommand:(int)arg1 options:(id)arg2;
- (void)sendCommand:(int)arg1;
- (void)_sfSessionStart;
- (void)_run;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end
