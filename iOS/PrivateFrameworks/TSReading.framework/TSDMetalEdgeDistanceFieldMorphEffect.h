//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSDMetalTextureInfo;
@protocol MTLDevice;

@interface TSDMetalEdgeDistanceFieldMorphEffect : NSObject
{
    _Bool _didTeardown;
    struct CGRect _outgoingTextBounds;
    struct CGRect _incomingTextBounds;
    CDStruct_83984b6f _outgoingTextColor;
    CDStruct_83984b6f _incomingTextColor;
    struct CGAffineTransform _outgoingTextureEdgeInsetsAdjustmentMatrix;
    struct CGAffineTransform _incomingTextureEdgeInsetsAdjustmentMatrix;
    struct {
        double skew;
        double skewOffset;
        double scale;
    } _textureAdjustment;
    _Bool _didSetupTextureAdjustment;
    id <MTLDevice> _metalDevice;
    _Bool isTextStyleIdenticalExceptSize;
    TSDMetalTextureInfo *_outgoingTextureInfo;
    TSDMetalTextureInfo *_incomingTextureInfo;
}

+ (void)didEndWithDevice:(id)arg1;
+ (void)willBeginWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 motionBlur:(_Bool)arg3 motionBlurIgnoreTextureOpacity:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool isTextStyleIdenticalExceptSize; // @synthesize isTextStyleIdenticalExceptSize;
@property(readonly, nonatomic) TSDMetalTextureInfo *incomingTextureInfo; // @synthesize incomingTextureInfo=_incomingTextureInfo;
@property(readonly, nonatomic) TSDMetalTextureInfo *outgoingTextureInfo; // @synthesize outgoingTextureInfo=_outgoingTextureInfo;
- (void)encodeWith:(id)arg1 morphPercent:(double)arg2 MVPMatrix:(struct CATransform3D)arg3 opacity:(double)arg4 generateTextureMatrices:(_Bool)arg5;
- (void)encodeWith:(id)arg1 morphPercent:(double)arg2 MVPMatrix:(struct CATransform3D)arg3 opacity:(double)arg4 outgoingTextureMatrix:(struct CGAffineTransform)arg5 incomingTextureMatrix:(struct CGAffineTransform)arg6;
- (CDStruct_39925896)textureMatchingTextureAdjustment;
- (void)setupIfNecessary;
- (struct CGAffineTransform)p_affineTransformWithTextureAdjustment:(CDStruct_39925896)arg1 textureSize:(struct CGSize)arg2;
- (double)p_errorFromApplyingTextureAdjustment:(CDStruct_39925896)arg1 toOutgoingScanlineCenters:(struct CGPoint *)arg2 outgoingScanlineZeroes:(struct CGPoint *)arg3 incomingScanlineCenters:(struct CGPoint *)arg4 incomingScanlineZeroes:(struct CGPoint *)arg5 samples:(unsigned long long)arg6;
- (double)p_errorFromApplyingTextureAdjustment:(CDStruct_39925896)arg1 toOutgoingValue:(double)arg2 incomingValue:(double)arg3 sample:(unsigned long long)arg4 sampleCount:(unsigned long long)arg5;
- (_Bool)p_fillScanlineCenters:(struct CGPoint *)arg1 scanlineMinMaxZeroes:(struct CGPoint *)arg2 samples:(unsigned long long)arg3 fromTexture:(id)arg4 textureSize:(struct CGSize)arg5;
- (struct CGRect)p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (struct CGContext *)newContextFromTexture:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithOutgoingTextureName:(id)arg1 outgoingTextureSize:(struct CGSize)arg2 outgoingTextBounds:(struct CGRect)arg3 outgoingColor:(CDStruct_83984b6f)arg4 incomingTextureName:(id)arg5 incomingTextureSize:(struct CGSize)arg6 incomingTextBounds:(struct CGRect)arg7 incomingColor:(CDStruct_83984b6f)arg8 metalContext:(id)arg9 motionBlur:(_Bool)arg10 motionBlurIgnoreTextureOpacity:(_Bool)arg11 capabilities:(id)arg12;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2 metalContext:(id)arg3 motionBlur:(_Bool)arg4 motionBlurIgnoreTextureOpacity:(_Bool)arg5 capabilities:(id)arg6;

@end
