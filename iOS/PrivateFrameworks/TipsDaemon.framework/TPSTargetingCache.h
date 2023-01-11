//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TPSTargetingCache : NSObject
{
    NSMutableDictionary *_cacheResultDictionary;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *cacheResultDictionary; // @synthesize cacheResultDictionary=_cacheResultDictionary;
- (void)reset;
- (long long)cacheResultForIdentifier:(id)arg1;
- (void)addCacheResult:(long long)arg1 forIdentifier:(id)arg2;
- (id)init;

@end
