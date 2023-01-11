//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class MISSING_TYPE, NSArray, NSIndexPath, VNContoursObservation;

@interface VNContour : NSObject <NSCopying, VNRequestRevisionProviding>
{
    VNContoursObservation *_observation;
    vector_e654105b _contourPoints;
    unsigned long long _topLevelIndex;
    struct os_unfair_lock_s _pathLock;
    struct CGPath *_normalizedPath;
    float _aspectRatio;
    NSIndexPath *_indexPath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly) unsigned long long topLevelIndex; // @synthesize topLevelIndex=_topLevelIndex;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) const struct CGPath *normalizedPath;
- (id)polygonApproximationWithEpsilon:(float)arg1 error:(id *)arg2;
- (const MISSING_TYPE **)createNormalizedPointsCorrectedForAspectRatio;
@property(readonly) const MISSING_TYPE **normalizedPoints;
@property(readonly) long long pointCount;
- (id)childContourAtIndex:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly) NSArray *childContours;
@property(readonly) long long childContourCount;
@property(readonly) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void)dealloc;
- (id)initWithPoints:(const struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> *)arg1 topLevelIndex:(unsigned long long)arg2 indexPath:(id)arg3 aspectRatio:(float)arg4;
- (id)initWithObservation:(id)arg1 topLevelIndex:(unsigned long long)arg2 indexPath:(id)arg3 aspectRatio:(float)arg4;

@end
