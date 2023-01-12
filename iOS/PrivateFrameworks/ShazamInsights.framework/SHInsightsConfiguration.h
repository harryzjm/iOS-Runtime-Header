//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHBagContract;

__attribute__((visibility("hidden")))
@interface SHInsightsConfiguration : NSObject
{
    SHBagContract *_bagContract;
}

+ (id)bagContract;
+ (void)fetchSharedInstanceWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SHBagContract *bagContract; // @synthesize bagContract=_bagContract;
- (id)tokenizedURLForBagPathKey:(id)arg1;
@property(readonly, nonatomic) long long minGeoChartsGeohashLength;
@property(readonly, nonatomic) long long maxGeoChartsGeohashLength;
- (id)geoChartsEndpointForDate:(id)arg1 geoHash:(id)arg2;
- (id)artistsClusterEndpoint;
@property(readonly, nonatomic) _Bool artistsEnabled;
@property(readonly, nonatomic) double artistsCachedDataMaxAge;
- (id)tracksClusterEndpointForStorefront:(id)arg1;
@property(readonly, nonatomic) _Bool tracksEnabled;
@property(readonly, nonatomic) double tracksCachedDataMaxAge;
- (id)initWithBagContract:(id)arg1;
- (id)init;

@end

