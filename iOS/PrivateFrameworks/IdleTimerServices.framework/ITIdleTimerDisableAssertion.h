//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/BSInvalidatable-Protocol.h>

@class BSSimpleAssertion, NSString;
@protocol OS_dispatch_queue;

@interface ITIdleTimerDisableAssertion : NSObject <BSInvalidatable>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BSSimpleAssertion *_internalAssertion;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)_internalDescription;
@property(readonly, copy, nonatomic) NSString *reason;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

