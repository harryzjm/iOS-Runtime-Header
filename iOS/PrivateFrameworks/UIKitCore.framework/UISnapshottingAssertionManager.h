//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UISnapshottingAssertionManager : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } lock;
    NSMutableSet *_heldAssertions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)executeIfNoActiveAssertions:(CDUnknownBlockType)arg1;
- (void)relinquishAssertion:(id)arg1;
- (id)acquireNewAssertion;
- (void)withLock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
