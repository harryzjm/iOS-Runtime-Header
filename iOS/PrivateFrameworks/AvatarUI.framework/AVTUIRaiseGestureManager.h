//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/CMWakeGestureDelegate-Protocol.h>

@class CMWakeGestureManager, NSString;
@protocol AVTUIRaiseGestureManagerDelegate, OS_dispatch_queue;

@interface AVTUIRaiseGestureManager : NSObject <CMWakeGestureDelegate>
{
    id <AVTUIRaiseGestureManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CMWakeGestureManager *_wakeGestureManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CMWakeGestureManager *wakeGestureManager; // @synthesize wakeGestureManager=_wakeGestureManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) __weak id <AVTUIRaiseGestureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (void)stopRaiseGestureUpdates;
- (void)startRaiseGestureUpdates;
- (void)dealloc;
- (id)initWithBackingWakeGestureManager:(id)arg1 callbackQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
