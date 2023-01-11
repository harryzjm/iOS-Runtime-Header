//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, VKCamera, VKCameraController;
@protocol MDRenderTarget;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject
{
    struct _retain_ptr<VKCameraController *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKCameraController *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _cameraController;
    shared_ptr_e963992e _taskContext;
    _retain_ptr_c0a21da9 _camera;
    int _mapType;
    id <MDRenderTarget> _displayTarget;
    struct Renderer {
        CDUnknownFunctionPointerType *;
        shared_ptr_e963992e;
        struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList>>;
        struct unique_ptr<md::FrameGraphResourceRegistry, std::__1::default_delete<md::FrameGraphResourceRegistry>>;
        struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>>>;
        struct linear_map<md::CommandBufferLocation, md::RenderLayer *, std::__1::equal_to<md::CommandBufferLocation>, std::__1::allocator<std::__1::pair<md::CommandBufferLocation, md::RenderLayer *>>, std::__1::vector<std::__1::pair<md::CommandBufferLocation, md::RenderLayer *>, std::__1::allocator<std::__1::pair<md::CommandBufferLocation, md::RenderLayer *>>>>;
        struct RunLoopController *;
        struct MapEngine *;
        id;
    } *_mapRenderer;
    struct LayoutContext *_layoutContext;
    struct RunLoopController *_runLoopController;
    struct VKEdgeInsets _edgeInsets;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)renderSceneWithEngine:(struct MapEngine *)arg1 completion:(function_84aba934)arg2;
- (void)cancelLoad;
- (void)loadScene;
@property(readonly, nonatomic) VKCamera *camera;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)didLayout;
- (void)updateWithTimestamp:(double)arg1 withContext:(struct LayoutContext *)arg2;
@property(readonly, nonatomic) shared_ptr_e963992e taskContext;
- (void)dealloc;
- (id)initWithMapEngine:(struct MapEngine *)arg1;

@end
