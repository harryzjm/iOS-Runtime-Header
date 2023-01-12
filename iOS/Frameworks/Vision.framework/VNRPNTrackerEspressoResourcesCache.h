//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNRPNTrackerEspressoResourcesCache : NSObject
{
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

+ (id)cacheKeyFromOptions:(id)arg1 error:(id *)arg2;
+ (id)cacheOptionsKeys;
- (void).cxx_destruct;
- (void)releaseCachedResources;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)arg1 error:(id *)arg2;
- (id)locateRPNTrackerResourcesConfiguredForOptions:(id)arg1 error:(id *)arg2;
- (_Bool)addRPNTrackerResourcesConfiguredForOptions:(id)arg1 resources:(id)arg2 error:(id *)arg3;
- (id)init;

@end

