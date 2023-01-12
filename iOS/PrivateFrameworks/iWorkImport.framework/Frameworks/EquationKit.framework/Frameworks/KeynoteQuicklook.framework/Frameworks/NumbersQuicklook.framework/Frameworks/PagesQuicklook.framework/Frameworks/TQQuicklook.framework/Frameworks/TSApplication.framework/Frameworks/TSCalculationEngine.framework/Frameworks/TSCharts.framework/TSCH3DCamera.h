//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DLens;

@interface TSCH3DCamera : NSObject
{
    TSCH3DLens *_lens;
    float _viewportScale;
    float _viewportSamples;
    box_ce64ce81 _viewport;
    tvec2_84d5962d _containingViewportOffset;
    tmat4x4_3074befe _transform;
}

+ (id)cameraWithLens:(id)arg1 size:(void *)arg2;
+ (id)orthographicPerPixelWithBounds:(void *)arg1;
+ (id)orthographicPerPixelWithSize:(void *)arg1;
+ (id)orthographicWithSize:(void *)arg1;
+ (id)orthographic;
+ (id)perspectiveWithSize:(void *)arg1;
+ (id)perspective;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) tmat4x4_3074befe transform; // @synthesize transform=_transform;
@property(nonatomic) tvec2_84d5962d containingViewportOffset; // @synthesize containingViewportOffset=_containingViewportOffset;
@property(nonatomic) box_ce64ce81 viewport; // @synthesize viewport=_viewport;
@property(nonatomic) float viewportSamples; // @synthesize viewportSamples=_viewportSamples;
@property(nonatomic) float viewportScale; // @synthesize viewportScale=_viewportScale;
@property(retain, nonatomic) TSCH3DLens *lens; // @synthesize lens=_lens;
- (void)calculateCullingPlanes:(void *)arg1;
- (id)narrowedByViewport:(const void *)arg1 samples:(long long)arg2;
- (id)pixelAlignedForScaledViewport:(const void *)arg1 viewportScale:(float)arg2 samples:(float)arg3 correspondingNoramlizedBounds:(const void *)arg4;
- (id)shiftedByPixels:(void *)arg1;
- (id)shiftByPixels:(void *)arg1;
- (id)narrowedByViewport:(void *)arg1;
- (id)narrowedByNormalizedBounds:(void *)arg1;
- (id)narrowByNormalizedBounds:(void *)arg1;
- (tmat4x4_3074befe)modelViewViewportProjectionWithViewportScale:(float)arg1;
@property(readonly, nonatomic) tmat4x4_3074befe modelViewNormalizedProjection;
@property(readonly, nonatomic) tmat4x4_3074befe modelViewProjection;
@property(readonly, nonatomic) tmat4x4_3074befe viewportProjection;
@property(readonly, nonatomic) tmat4x4_3074befe normalizedProjection;
@property(readonly, nonatomic) tmat4x4_3074befe projection;
@property(readonly, nonatomic) tmat4x4_3074befe space;
- (tvec3_17f03ce0)backProjectCameraSpacePoint:(const void *)arg1;
- (tvec3_17f03ce0)fastProjectNormalizedPoint:(void *)arg1 planeDistance:(float)arg2;
- (tvec3_17f03ce0)projectNormalizedPoint:(void *)arg1 planeDistance:(float)arg2;
- (id)frustumSliceAtDistance:(float)arg1;
- (void)setPosition:(tvec3_17f03ce0)arg1;
@property(readonly, nonatomic) tvec3_17f03ce0 position;
- (void)setDirection:(tvec3_17f03ce0)arg1;
@property(readonly, nonatomic) tvec3_17f03ce0 direction;
- (void)setContainingViewportSize:(const void *)arg1;
- (id)matrixDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLens:(id)arg1 size:(void *)arg2;

@end

