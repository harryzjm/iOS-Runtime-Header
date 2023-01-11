//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AACCore/AEInvalidationRouterDelegate-Protocol.h>
#import <AACCore/AEPolicySession-Protocol.h>

@class AEInvalidationRouter, NSArray;
@protocol AEPerformancePrimitives, AEPolicyStore, OS_dispatch_queue;

@interface AEActivePolicySession : NSObject <AEInvalidationRouterDelegate, AEPolicySession>
{
    CDUnknownBlockType _invalidationHandler;
    id <AEPolicyStore> _policyStore;
    id <AEPerformancePrimitives> _performancePrimitives;
    AEInvalidationRouter *_invalidationRouter;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_activation;
    NSArray *_persistentDeactivations;
}

+ (id)sessionWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 invalidationRouter:(id)arg3 activations:(id)arg4 persistentDeactivations:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)invalidationRouter:(id)arg1 didReceiveInvalidationError:(id)arg2;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;

@end
