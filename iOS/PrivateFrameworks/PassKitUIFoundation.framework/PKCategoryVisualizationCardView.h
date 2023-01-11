//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKMotionManagerClientProtocol-Protocol.h>

@class MPSUnaryImageKernel, NSArray, NSSet, NSString;
@protocol MTLBuffer, MTLRenderPipelineState, MTLTexture;

@interface PKCategoryVisualizationCardView : UIView <PKMotionManagerClientProtocol>
{
    id <MTLTexture> _texture;
    id <MTLTexture> _overlayTexture;
    id <MTLTexture> _overlayNormalTexture;
    id <MTLRenderPipelineState> _overlayPipelineState;
    id <MTLRenderPipelineState> _circlePipelineState;
    id <MTLRenderPipelineState> _circleOutlinePipelineState;
    id <MTLBuffer> _vertexCoordsBuffer;
    id <MTLBuffer> _textureCoordsBuffer;
    id <MTLBuffer> _circleUniformsBuffer;
    id <MTLBuffer> _circleDataBuffer;
    id <MTLBuffer> _singleCircleDataBuffer;
    MPSUnaryImageKernel *_blurShader;
    _Bool _hasPendingUpdate;
    long long _pendingUpdateStyle;
    _Bool _invalidated;
    _Bool _effectivePaused;
    _Bool _needsDraw;
    _Bool _emptying;
    CDStruct_f50b3c6f _state;
    _Bool _motionEnabled;
    _Bool _paused;
    _Bool _blurDisabled;
    NSArray *_bucketColors;
    NSSet *_magnitudes;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isBlurDisabled) _Bool blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isMotionEnabled) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(readonly, copy, nonatomic) NSSet *magnitudes; // @synthesize magnitudes=_magnitudes;
@property(copy, nonatomic) NSArray *bucketColors; // @synthesize bucketColors=_bucketColors;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)_calculateNewCirclePositions;
- (void)_updateCircles;
- (void)_empty;
- (void)_updateTextureAndBlurShader;
- (void)_createMetalResourcesWithTextures:(id)arg1;
- (void)_updatePausedState;
- (void)setMagnitudes:(id)arg1 withStyle:(long long)arg2;
- (void)invalidate;
- (id)rendererState;
- (void)renderWithTextures:(id)arg1 rendererState:(id)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
