//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WFLocationQueryGeocodeCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheAge;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    double _expirationInterval;
}

@property(nonatomic) double expirationInterval; // @synthesize expirationInterval=_expirationInterval;
- (void).cxx_destruct;
- (_Bool)_shouldEvictObjectWithDate:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)init;

@end

