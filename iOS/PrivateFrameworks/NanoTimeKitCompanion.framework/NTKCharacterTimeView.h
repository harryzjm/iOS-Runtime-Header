//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, EAGLContext, NSString, NTKCharacterDisplayLink, NTKCharacterFrameBuffer, NTKCharacterRenderer, NTKCharacterResourceLoader;

@interface NTKCharacterTimeView : UIView <NTKTimeView>
{
    CLKDevice *_device;
    NTKCharacterResourceLoader *_loader;
    EAGLContext *_context;
    NTKCharacterDisplayLink *_displayLink;
    unsigned int _isRenderOneFrameRequested:1;
    unsigned int _isAnimating:1;
    unsigned int _isBackgrounded:1;
    unsigned int _renderWasIgnored:1;
    unsigned int _layoutWasIgnored:1;
    unsigned long long _character;
    NTKCharacterFrameBuffer *_framebuffer;
    NTKCharacterRenderer *_renderers[2];
    NTKCharacterRenderer *_renderer;
    _Bool _frozen;
}

+ (Class)layerClass;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
- (void).cxx_destruct;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_endScrubbing;
- (void)scrubToDate:(id)arg1;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)speakTime;
- (void)_render;
- (void)_layoutRenderer;
- (void)layoutSubviews;
- (void)_willEnterForeground;
- (void)_didEnterBackground;
- (void)renderOneFrame;
- (void)_renderOneFrame;
- (void)applyCharacterTransition:(double)arg1 fromCharacter:(unsigned long long)arg2 toCharacter:(unsigned long long)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2 forCharacter:(unsigned long long)arg3;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2;
- (void)setCharacter:(unsigned long long)arg1;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)prepareToZoom;
- (void)_stopAnimation;
- (void)_startAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)enumarateRenderers:(CDUnknownBlockType)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setOverrideDate:(id)arg1 animated:(_Bool)arg2 enteringOrb:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOverrideDate:(id)arg1 animated:(_Bool)arg2 enteringOrb:(_Bool)arg3;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setAnimationFrameInterval:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

