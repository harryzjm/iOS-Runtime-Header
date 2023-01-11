//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AACCore/AEPolicySession-Protocol.h>

@class NSArray;
@protocol AEPerformancePrimitives, AEPolicyStore, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AERecoveryPolicySession : NSObject <AEPolicySession>
{
    NSArray *_persistentDeactivations;
    id <AEPolicyStore> _policyStore;
    id <AEPerformancePrimitives> _performancePrimitives;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;

@end
