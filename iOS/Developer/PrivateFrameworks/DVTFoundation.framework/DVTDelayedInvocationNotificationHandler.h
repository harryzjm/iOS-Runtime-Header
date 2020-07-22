//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DVTDelayedInvocationNotificationHandler : NSObject
{
    NSMutableDictionary *_cacheKeyToSchedulersToDelayedInvocations;
    NSMutableDictionary *_cacheKeyToTokens;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (void)unregisterDelayedInvocation:(id)arg1 withScheduler:(id)arg2;
- (void)_unregisterAllObserversAndInvocationsForCacheKey:(id)arg1;
- (void)registerDelayedInvocation:(id)arg1 withScheduler:(id)arg2;
- (id)init;

@end

