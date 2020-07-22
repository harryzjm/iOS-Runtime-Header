//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject
{
    NSMutableDictionary *_deferredActions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_deferredSharedPaymentWebServiceContexts;
    NSMutableDictionary *_deferredAddedPaymentPasses;
}

+ (id)sharedDeferredActionHandler;
@property(retain, nonatomic) NSMutableDictionary *deferredAddedPaymentPasses; // @synthesize deferredAddedPaymentPasses=_deferredAddedPaymentPasses;
@property(retain, nonatomic) NSMutableDictionary *deferredSharedPaymentWebServiceContexts; // @synthesize deferredSharedPaymentWebServiceContexts=_deferredSharedPaymentWebServiceContexts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMutableDictionary *deferredActions; // @synthesize deferredActions=_deferredActions;
- (void).cxx_destruct;
- (void)_handleDevicePairingFailure:(id)arg1;
- (void)_handleDeviceUnpaired:(id)arg1;
- (void)_handleDevicePaired:(id)arg1;
- (void)_handleDeviceBecameActive:(id)arg1;
- (void)_handleCompanionAgentStarted;
- (void)_cleanUpDeferredDataForPairingID:(id)arg1;
- (void)_performDeferredActions;
- (id)deferredPaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2;
- (id)deferredPaymentPassUniqueIDsForDevice:(id)arg1;
- (id)deferredPaymentPassesForDevice:(id)arg1;
- (void)addDeferredPaymentPass:(id)arg1 forDevice:(id)arg2;
- (void)setDeferredSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (id)deferredSharedPaymentWebServiceContextForDevice:(id)arg1;
- (void)performActionWhenCompanionAgentIsAvailable:(CDUnknownBlockType)arg1 forDevice:(id)arg2;
- (void)dealloc;
- (id)init;

@end
