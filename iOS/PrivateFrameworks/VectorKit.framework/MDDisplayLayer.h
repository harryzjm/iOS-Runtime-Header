//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSHashTable, NSString, VKSharedResources;
@protocol GGLRenderQueueSource;

__attribute__((visibility("hidden")))
@interface MDDisplayLayer : NSObject
{
    struct shared_ptr<ggl::Surface> _surface;
    struct shared_ptr<ggl::Swapchain> _swapchain;
    shared_ptr_479d1306 _texture;
    id <GGLRenderQueueSource> _renderSource;
    shared_ptr_e963992e _taskContext;
    void *_activeRenderQueue;
    struct _retain_ptr<VKSharedResources *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKSharedResources *_obj;
        struct _retain_objc_arc _retain;
        struct _release_objc_arc _release;
    } _sharedResources;
    struct RenderTargetFormat _sRGBFormat;
    void *_device;
    void *_renderer;
    struct mutex _debugConsoleManagerCreationLock;
    struct unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> _debugConsoleManager;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _sRGBRenderTarget;
    struct unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> _depthStencil;
    struct shared_ptr<ggl::RenderBuffer> _sRGBMsaaTexture;
    struct shared_ptr<ggl::Texture2DAbstract> _sRGBTexture;
    struct shared_ptr<ggl::RenderBuffer> _sRGBColorTextures[3];
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _blitRenderTarget;
    struct RenderTargetFormat _blitFormat;
    struct RenderTargetFormat _linearFormat;
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _linearRenderTarget;
    struct shared_ptr<ggl::RenderBuffer> _linearTexture;
    struct shared_ptr<ggl::RenderBuffer> _linearColorTextures[3];
    struct unique_ptr<BlitPass, std::default_delete<BlitPass>> _blitPass;
    void *_services;
    _Bool _useMultisampling;
    _Bool _supportsFramebufferFetch;
    _Bool _requiresMultisampling;
    struct CGContext *_snapshotContext;
    _Bool _readPixels;
    _Bool _shouldRasterize;
    _Bool _allowBlitToDrawable;
    struct CGRect _bounds;
    double _contentsScale;
    unsigned long long _signpostId;
    id _enableEnhancedCommandBufferErrorsConfigListener;
    id _enableCommandQueueResetOnErrorConfigListener;
    id _commandQueueResetMaxAttemptsCountConfigListener;
    NSHashTable *_observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(readonly, nonatomic) _Bool supportsFramebufferFetch; // @synthesize supportsFramebufferFetch=_supportsFramebufferFetch;
@property(readonly, nonatomic) _Bool multiSample; // @synthesize multiSample=_useMultisampling;
@property(nonatomic) __weak id <GGLRenderQueueSource> renderSource; // @synthesize renderSource=_renderSource;
- (struct __IOSurface *)flipImage;
- (void *)debugConsoleForId:(int)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
@property(readonly, nonatomic) float averageFPS;
-     // Error parsing type: {function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={__value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={type=[24C]}^v}}128@0:8d16d24{LayoutSceneTaskModule={function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[24C]}^v}}{function<void ()>={__value_func<void ()>={type=[24C]}^v}}{function<void ()>={__value_func<void ()>={type=[24C]}^v}}}32, name: prepareRenderTask:presentAtTime:taskModule:
- (_Bool)hasRenderTarget;
- (void)destroyRenderTarget;
- (void)createRenderTarget;
- (_Bool)insertDisplayLayer:(id)arg1;
@property(readonly, nonatomic) void *linearRenderTarget;
@property(readonly, nonatomic) const struct RenderTargetFormat *linearFormat;
@property(readonly, nonatomic) void *finalRenderTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) double contentScale;
@property(nonatomic) struct CGSize size;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (shared_ptr_fa6aa836)bitmapData;
- (void)_didReadPixels:(void *)arg1;
- (void)drawInContext:(struct CGContext *)arg1 taskModule:(struct LayoutSceneTaskModule)arg2;
-     // Error parsing type: {function<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={__value_func<void (std::function<std::future<void> (std::function<void ()>)>, std::function<std::future<void> (std::function<void ()>)>)>={type=[24C]}^v}}144@0:8{shared_ptr<ggl::Texture2D>=^{Texture2D}^{__shared_weak_count}}16d32{LayoutSceneTaskModule={function<ggl::RenderQueue *()>={__value_func<ggl::RenderQueue *()>={type=[24C]}^v}}{function<void ()>={__value_func<void ()>={type=[24C]}^v}}{function<void ()>={__value_func<void ()>={type=[24C]}^v}}}40@136, name: snapshotTask:timestamp:taskModule:semaphore:
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (void)disablePerformanceHUD:(id)arg1;
- (void)enablePerformanceHUD:(id)arg1;
@property(readonly, nonatomic) void *renderer;
- (void)willPresent;
- (void)didUpdateFrameTexture;
- (void)willUpdateFrameTexture;
- (_Bool)isDelayedRenderQueueConsumptionSupported;
- (void)prepareTargetsForPlatormsWithoutFramebufferFetch:(const void *)arg1 isDrawable:(_Bool)arg2;
- (void)prepareTargetsForPlatormsWithFramebufferFetch:(const void *)arg1;
- (void)_prepareTexture:(const void *)arg1 isDrawable:(_Bool)arg2;
- (void)prepareTexture:(const void *)arg1;
@property(readonly, nonatomic) CALayer *layer;
- (void)dealloc;
- (void)removeSizeObserver:(id)arg1;
- (void)addSizeObserver:(id)arg1;
- (void)_notifyObserversSizeChanged:(struct CGSize)arg1;
- (id)initWithContentScale:(double)arg1 useMultisampling:(_Bool)arg2 extraColorFormats:(const void *)arg3 shouldRasterize:(_Bool)arg4 allowBlitToDrawable:(_Bool)arg5 taskContext:(const void *)arg6 device:(void *)arg7 sharedResources:(id)arg8 services:(void *)arg9 signpostId:(unsigned long long)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

