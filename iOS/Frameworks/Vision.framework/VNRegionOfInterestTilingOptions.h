//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNRegionOfInterestTilingOptions : NSObject
{
    double _tileOverlapPercentage;
    double _regionOfInterestAspectRatioThreshold;
    long long _tileOverflowCount;
}

@property long long tileOverflowCount; // @synthesize tileOverflowCount=_tileOverflowCount;
@property double regionOfInterestAspectRatioThreshold; // @synthesize regionOfInterestAspectRatioThreshold=_regionOfInterestAspectRatioThreshold;
@property double tileOverlapPercentage; // @synthesize tileOverlapPercentage=_tileOverlapPercentage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

