//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOUserSessionEntity;

@protocol GEOAnalyticsPipelineProxy <NSObject>
- (void)setShortSessionValues:(GEOUserSessionEntity *)arg1 withCompletion:(void (^)(void))arg2;
- (void)shortSessionValuesWithCompletion:(void (^)(struct GEOSessionID, unsigned long long, double))arg1;
@end
