//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NTPBPrefetchConfig;

@interface FCPrefetchConfiguration : NSObject
{
    NTPBPrefetchConfig *_pbConfig;
    _Bool _backgroundFetchEnabled;
    _Bool _shouldPrefetchForYouFeed;
    double _minimumBackgroundFetchInterval;
    unsigned long long _maximumFavoritesFeedsToPrefetch;
}

@property(readonly, nonatomic) unsigned long long maximumFavoritesFeedsToPrefetch; // @synthesize maximumFavoritesFeedsToPrefetch=_maximumFavoritesFeedsToPrefetch;
@property(readonly, nonatomic) _Bool shouldPrefetchForYouFeed; // @synthesize shouldPrefetchForYouFeed=_shouldPrefetchForYouFeed;
@property(readonly, nonatomic) double minimumBackgroundFetchInterval; // @synthesize minimumBackgroundFetchInterval=_minimumBackgroundFetchInterval;
@property(readonly, nonatomic, getter=isBackgroundFetchEnabled) _Bool backgroundFetchEnabled; // @synthesize backgroundFetchEnabled=_backgroundFetchEnabled;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBPrefetchConfig:(id)arg1;
- (id)initWithDefaults;

@end

