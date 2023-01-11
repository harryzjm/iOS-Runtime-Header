//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityRingsUI/ARUICelebrationsRendering-Protocol.h>

@class ARUIWavesComputeState, ARUIWavesRenderState, NSString;
@protocol ARUIBlurRendering, ARUICompositeRendering, ARUIRingsRendering, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface ARUIWavesRenderer : NSObject <ARUICelebrationsRendering>
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    _Bool _prewarmed;
    ARUIWavesComputeState *_wavesComputeState;
    ARUIWavesRenderState *_wavesRenderState;
    id <ARUICompositeRendering> _compositeRenderer;
    id <ARUIBlurRendering> _blurRenderer;
    id <ARUIRingsRendering> _ringsRenderer;
}

@property(nonatomic) __weak id <ARUIRingsRendering> ringsRenderer; // @synthesize ringsRenderer=_ringsRenderer;
@property(nonatomic) __weak id <ARUIBlurRendering> blurRenderer; // @synthesize blurRenderer=_blurRenderer;
@property(nonatomic) __weak id <ARUICompositeRendering> compositeRenderer; // @synthesize compositeRenderer=_compositeRenderer;
- (void).cxx_destruct;
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- (id)_wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 size: /* Error: Ran out of types for this method. */;
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 wavesCelebration:(id)arg3;
- (float)_revealPercentFromWavesMap:(id)arg1;
- (id)wavesTextureWithCommandBuffer:(id)arg1 wavesMap:(id)arg2 size: /* Error: Ran out of types for this method. */;
- (void)prewarm;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
