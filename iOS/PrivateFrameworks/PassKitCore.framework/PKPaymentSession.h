//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PKPaymentSession : NSObject
{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
}

+ (id)startPeerPaymentSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startPeerPaymentSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lifecycleState;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateSession;

@end

