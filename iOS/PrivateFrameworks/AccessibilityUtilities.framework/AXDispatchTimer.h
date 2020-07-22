//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXAccessQueueTimer-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AXDispatchTimer : NSObject <AXAccessQueueTimer>
{
    _Bool _active;
    _Bool _pending;
    _Bool _cancelled;
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    _Bool _useWallTime;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSString *_label;
    CDUnknownBlockType _processBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool useWallTime; // @synthesize useWallTime=_useWallTime;
@property(nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTargetSerialQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
