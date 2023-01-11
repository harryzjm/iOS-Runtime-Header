//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PKInkFeatheringDescriptor, PKInkParticleDescriptor, PKInkRenderingDescriptor, PKInkSmoothingDescriptor;

@interface PKInkBehavior : NSObject
{
    _Bool _timeDependent;
    _Bool _usesAzimuthOrAltitude;
    _Bool _showBrushIndicator;
    double _rulerOffsetScale;
    double _rulerOffsetConstant;
    _Bool _variableSnappedWidth;
    NSMutableArray *_cachedRadiusFunctions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    unique_ptr_94812230 _weightFunction;
    vector_2b0a8222 _radiusOutput;
    vector_2b0a8222 _opacityOutput;
    vector_2b0a8222 _edgeWidthOutput;
    vector_2b0a8222 _aspectRatioOutput;
    vector_2b0a8222 _brushOpacityOutput;
    NSString *_variant;
    PKInkRenderingDescriptor *_renderingDescriptor;
    double _blendAlpha;
    double _targetMultiple;
    double _baseAlpha;
    PKInkSmoothingDescriptor *_smoothingDescriptor;
    PKInkFeatheringDescriptor *_featheringDescriptor;
}

+ (id)inkFunctionForProperty:(unsigned long long)arg1 outputFunctions:(vector_2b0a8222 *)arg2 index:(unsigned long long)arg3;
+ (id)arrayFromVector:(vector_b67dfe3a)arg1;
+ (double)inkRadiusOverride;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor; // @synthesize featheringDescriptor=_featheringDescriptor;
@property(retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor; // @synthesize smoothingDescriptor=_smoothingDescriptor;
@property(nonatomic) double baseAlpha; // @synthesize baseAlpha=_baseAlpha;
@property(nonatomic) double targetMultiple; // @synthesize targetMultiple=_targetMultiple;
@property(nonatomic) double blendAlpha; // @synthesize blendAlpha=_blendAlpha;
@property(readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor; // @synthesize renderingDescriptor=_renderingDescriptor;
@property(readonly, nonatomic) NSString *variant; // @synthesize variant=_variant;
- (id)particleTextureName;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint)arg1 inputType:(long long)arg2 inputScale:(double)arg3;
- (void)setVariableSnappedWidth:(_Bool)arg1;
- (_Bool)variableSnappedWidth;
- (void)setRulerOffsetConstant:(double)arg1;
- (void)setRulerOffsetScale:(double)arg1;
- (_Bool)showBrushIndicator;
- (void)setShowBrushIndicator:(_Bool)arg1;
- (_Bool)usesAzimuthOrAltitude;
- (void)setUsesAzimuthOrAltitude:(_Bool)arg1;
- (_Bool)isTimeDependent;
- (void)setTimeDependent:(_Bool)arg1;
- (_Bool)isEraser;
- (_Bool)immutableVelocity;
- (double)solve:(vector_2b0a8222 *)arg1 forPoint:(CDStruct_6422aa5d)arg2 context:(CDStruct_713d3c04 *)arg3 weight:(double)arg4;
- (double)solveForTime:(vector_2b0a8222 *)arg1 forTime:(double)arg2 stillChanging:(_Bool *)arg3;
- (struct _PKStrokePoint)outputTimePoint:(struct _PKStrokePoint)arg1 atTime:(double)arg2 stillChanging:(_Bool *)arg3;
- (struct _PKStrokePoint)outputForPoint:(CDStruct_6422aa5d)arg1 context:(CDStruct_713d3c04 *)arg2;
- (double)edgeWidthForPoint:(CDStruct_6422aa5d)arg1 context:(CDStruct_713d3c04 *)arg2;
- (double)radiusForPoint:(CDStruct_6422aa5d)arg1 context:(CDStruct_713d3c04 *)arg2;
- (double)alphaForStrokeColor:(struct CGColor *)arg1;
- (double)alphaForStroke:(id)arg1;
- (double)brushOpacityForPoint:(CDStruct_6422aa5d)arg1 context:(CDStruct_713d3c04 *)arg2;
- (double)particleSpacingForRadius:(double)arg1;
- (struct PKOutputFunction)outputFunctionFromInkFunction:(id)arg1;
- (void)setBrushOpacityOutput:(vector_2b0a8222)arg1;
- (void)setAspectRatioOutput:(vector_2b0a8222)arg1;
- (void)setEdgeWidthOutput:(vector_2b0a8222)arg1;
- (void)setOpacityOutput:(vector_2b0a8222)arg1;
- (void)setRadiusOutput:(vector_2b0a8222)arg1;
- (void)addNewInkFunction:(id)arg1;
- (void)removeInkFunction:(id)arg1;
- (void)inkFunctionDidChange:(id)arg1;
- (id)functionsForProperty:(unsigned long long)arg1;
- (vector_2b0a8222 *)outputVectorForProperty:(unsigned long long)arg1;
- (id)inkFunctionsForProperty:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *inkFunctions;
- (id)description;
- (double)evaluateWeight:(double)arg1;
- (void)setWeightFunction:(unique_ptr_94812230)arg1;
@property(readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
- (id)initWithRenderingDescriptor:(id)arg1 variant:(id)arg2;

@end
