//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMutableDictionary;

@interface VNFaceLandmarkRegion2D
{
    NSMutableDictionary *_sizedPointsCache;
    const MISSING_TYPE **_points;
}

@property const MISSING_TYPE **points; // @synthesize points=_points;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithFaceBoundingBox:(struct CGRect)arg1 points:(MISSING_TYPE **)arg2 pointCount:(unsigned long long)arg3;
- (const struct CGPoint *)pointsInImageOfSize:(struct CGSize)arg1;
@property(readonly) const struct CGPoint *normalizedPoints;
- (MISSING_TYPE *)pointAtIndex:(unsigned long long)arg1;

@end

