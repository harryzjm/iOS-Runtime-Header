//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, TSDMetalShader, TSDMetalTextureInfo;
@protocol TSDAnimationRandomGenerator;

@interface TSDMetalEdgeDistanceFieldTraceEffect : NSObject
{
    _Bool _canDraw;
    _Bool _didTeardown;
    long long _traceTextureMaxValue;
    struct CGAffineTransform _textureEdgeInsetsAdjustmentMatrix;
    NSArray *_strokeLineSegment;
    struct __CFArray *_zeroesArray;
    struct CGSize _bufferSize;
    struct CGRect _viewportRect;
    struct {
        CDStruct_14d5dc5e mvpMatrix;
        struct {
            MISSING_TYPE *columns[3];
        } textureMatrix;
    } _vertexUniforms;
    struct {
        float Color__TextureSize__LayerSize__Opacity;
        float Percent;
        float DistanceAdjust;
        float StrokeWidth;
        float StrokeFadeHardnessLeading;
        float StrokeFadeHardnessTrailing;
        int TextureLevels;
    } _fragmentUniforms;
    _Bool _isValid;
    TSDMetalTextureInfo *_edgeDistanceFieldTextureInfo;
    TSDMetalTextureInfo *_traceTextureInfo;
    TSDMetalShader *_shader;
    id <TSDAnimationRandomGenerator> _randomGenerator;
    struct CGPoint _randomStrokePoint;
}

+ (void)didEndWithDevice:(id)arg1;
+ (void)willBeginWithDevice:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TSDAnimationRandomGenerator> randomGenerator; // @synthesize randomGenerator=_randomGenerator;
@property(readonly, nonatomic) struct CGPoint randomStrokePoint; // @synthesize randomStrokePoint=_randomStrokePoint;
@property(readonly, nonatomic) TSDMetalShader *shader; // @synthesize shader=_shader;
@property(readonly, nonatomic) TSDMetalTextureInfo *traceTextureInfo; // @synthesize traceTextureInfo=_traceTextureInfo;
@property(readonly, nonatomic) TSDMetalTextureInfo *edgeDistanceFieldTextureInfo; // @synthesize edgeDistanceFieldTextureInfo=_edgeDistanceFieldTextureInfo;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (void)p_addNearbyPixelsToArray:(struct __CFArray *)arg1 pixel:(struct CGPoint)arg2 edgeDataBuffer:(float *)arg3 dataBuffer:(char *)arg4 tempDataBuffer:(char *)arg5 localMaximumLookupBuffer:(_Bool *)arg6 bufferSize:(struct CGSize)arg7;
- (_Bool)p_generateTraceTextureInfoWithStrokeWidth:(double)arg1 clockwise:(_Bool)arg2 context:(id)arg3 randomGenerator:(id)arg4;
- (void)p_fillFloatBuffer:(float *)arg1 withRGBAData:(char *)arg2 bufferSize:(struct CGSize)arg3;
- (id)p_houghTransformWithZeroes:(struct __CFArray *)arg1 bufferSize:(struct CGSize)arg2;
- (struct CGPoint)p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint)arg1 inBufferSize:(struct CGSize)arg2;
@property(readonly, nonatomic) NSArray *strokeLineSegment; // @synthesize strokeLineSegment=_strokeLineSegment;
- (void)drawWithContext:(id)arg1 andBuffer:(id)arg2 atPercent:(double)arg3 MVPMatrix:(struct CATransform3D)arg4 opacity:(double)arg5 color:(CDStruct_83984b6f)arg6 strokeFadeHardnessLeading:(double)arg7 strokeFadeHardnessTrailing:(double)arg8;
- (void)teardown;
- (id)description;
- (void)dealloc;
- (id)initWithTR:(id)arg1 strokeWidth:(double)arg2 downsampleScale:(double)arg3 clockwise:(_Bool)arg4 context:(id)arg5 randomGenerator:(id)arg6 capabilities:(id)arg7;

@end
