//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, VKScreenCameraController;
@protocol MDRenderTarget, VKImageCanvasDelegate;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject
{
    VKScreenCameraController *_cameraController;
    shared_ptr_e963992e _taskContext;
    long long _mapType;
    struct DisplayStyle _mapDisplayStyle;
    unsigned char _emphasis;
    id <MDRenderTarget> _displayTarget;
    Renderer_e10ca448 *_mapRenderer;
    struct LayoutContext *_layoutContext;
    id <VKImageCanvasDelegate> _delegate;
    struct RunLoopController *_runLoopController;
}

@property(nonatomic) unsigned char emphasis; // @synthesize emphasis=_emphasis;
@property(nonatomic) struct DisplayStyle mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) id <VKImageCanvasDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)renderSceneWithEngine:(struct MapEngine *)arg1 completion:(function_30b369b8)arg2;
- (void)cancelLoad;
- (void)loadScene;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)didLayout;
- (void)update;
@property(readonly, nonatomic) shared_ptr_e963992e taskContext;
- (void)dealloc;
- (id)initWithMapEngine:(struct MapEngine *)arg1;

@end
