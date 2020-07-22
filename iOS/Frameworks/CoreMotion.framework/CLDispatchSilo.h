//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo
{
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)operationQueue;
- (id)queue;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)async:(CDUnknownBlockType)arg1;
- (id)newTimer;
- (void)assertOutside;
- (void)assertInside;
- (id)initMain;
- (id)initWithUnderlyingQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
