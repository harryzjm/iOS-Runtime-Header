//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TSUDelayTimer : NSObject
{
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

@property(nonatomic, getter=_isCancelled, setter=_setCancelled:) _Bool _cancelled; // @synthesize _cancelled;
@property(retain, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer; // @synthesize _dispatchTimer;
@property(retain, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue; // @synthesize _dispatchQueue;
@property(nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTargetSerialQueue:(id)arg1;
- (id)init;

@end

