//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventCacheCreator : NSObject
{
    _Bool _simulatesTimeout;
    CLSPublicEventCache *_cache;
    unsigned long long _maximumBatchSize;
    double _queryRadius;
}

@property(nonatomic) _Bool simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(readonly, nonatomic) double queryRadius; // @synthesize queryRadius=_queryRadius;
@property(readonly, nonatomic) unsigned long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property(readonly, nonatomic) CLSPublicEventCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)_queryEventsForTimeLocationTuples:(id)arg1 invalidationTokens:(out id *)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)createCacheForTimeLocationTuples:(id)arg1 invalidationTokens:(out id *)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1 queryRadius:(double)arg2;

@end

