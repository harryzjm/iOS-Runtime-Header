//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, EAGLContext, PLGLLayerDelegate;

@interface CMKGLView : UIView
{
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    CAEAGLLayer *_glLayer;
    PLGLLayerDelegate *_glLayerDelegate;
    _Bool _disableLayoutForGLLayer;
    _Bool __atomicRetainedBacking;
    _Bool __shouldDeleteFramebuffer;
    _Bool __disableLayoutForGLLayerInternal;
    long long _drawableWidth;
    long long _drawableHeight;
    CDUnknownBlockType _renderNotifyBlock;
    EAGLContext *__atomicContext;
    struct CGSize __atomicFixedSize;
}

@property(nonatomic, getter=_isDisabledLayoutForGLLayerInternal, setter=_setDisableLayoutForGLLayerInternal:) _Bool _disableLayoutForGLLayerInternal; // @synthesize _disableLayoutForGLLayerInternal=__disableLayoutForGLLayerInternal;
@property(setter=_setShouldDeleteFramebuffer:) _Bool _shouldDeleteFramebuffer; // @synthesize _shouldDeleteFramebuffer=__shouldDeleteFramebuffer;
@property(setter=_setAtomicFixedSize:) struct CGSize _atomicFixedSize; // @synthesize _atomicFixedSize=__atomicFixedSize;
@property(setter=_setAtomicRetainedBacking:) _Bool _atomicRetainedBacking; // @synthesize _atomicRetainedBacking=__atomicRetainedBacking;
@property(retain, setter=_setAtomicContext:) EAGLContext *_atomicContext; // @synthesize _atomicContext=__atomicContext;
@property(copy, nonatomic) CDUnknownBlockType renderNotifyBlock; // @synthesize renderNotifyBlock=_renderNotifyBlock;
@property long long drawableHeight; // @synthesize drawableHeight=_drawableHeight;
@property long long drawableWidth; // @synthesize drawableWidth=_drawableWidth;
@property(nonatomic, getter=isDisabledLayoutForGLLayer) _Bool disableLayoutForGLLayer; // @synthesize disableLayoutForGLLayer=_disableLayoutForGLLayer;
@property(readonly, retain, nonatomic) CAEAGLLayer *glLayer; // @synthesize glLayer=_glLayer;
- (void).cxx_destruct;
- (void)_layoutGLLayer;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(double)arg1;
- (void)forceDestroyGLResources;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
- (void)_handleRenderNotifyBlock;
- (void)renderWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_setFramebuffer:(_Bool *)arg1 context:(id)arg2;
- (void)_deleteFramebufferInContext:(id)arg1;
- (void)_createFramebufferInContext:(id)arg1;
- (void)setContentMode:(long long)arg1;
@property(nonatomic) struct CGSize fixedSize;
@property(retain, nonatomic) EAGLContext *context;
@property(nonatomic) _Bool retainedBacking;
- (void)_configureLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

