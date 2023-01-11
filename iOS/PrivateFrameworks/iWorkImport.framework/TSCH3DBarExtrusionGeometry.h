//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DNormalDirectionMapper;

__attribute__((visibility("hidden")))
@interface TSCH3DBarExtrusionGeometry
{
    struct BarExtrusionSetting mExtrusionSetting;
    TSCH3DNormalDirectionMapper *mNormalDirectionMapper;
    vector_7200ab52 mNormalizedSpine;
    float mScaleMappingStartingHeight;
    float mBottomCapScale;
}

+ (id)namedBevelInterpolationShaderFunction;
@property(readonly, nonatomic) float bottomCapScale; // @synthesize bottomCapScale=mBottomCapScale;
@property(readonly, nonatomic) float scaleMappingStartingHeight; // @synthesize scaleMappingStartingHeight=mScaleMappingStartingHeight;
@property(readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // @synthesize normalDirectionMapper=mNormalDirectionMapper;
@property(nonatomic) struct BarExtrusionSetting extrusionSetting; // @synthesize extrusionSetting=mExtrusionSetting;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)selectionKnobPositions;
- (int)capCount;
- (unsigned int)capOffset;
- (int)geometryCount;
- (unsigned int)geometryOffset;
- (void)generateArrays;
- (void)p_updateNormalizedSpineScaleMappingsUsingTransform:(const tmat4x4_3074befe *)arg1 forSpineGenerator:(id)arg2;
- (void)debug_printDataPoints;
- (void)p_insertCrossPointsIntoVector:(vector_d73af98f *)arg1;
@property(readonly, nonatomic) float size;
@property(readonly, nonatomic) _Bool hasBottomBevel;
@property(readonly, nonatomic) _Bool hasTopBevel;
@property(readonly, nonatomic) _Bool isCylindrical;
- (void)dealloc;
- (id)init;

@end

