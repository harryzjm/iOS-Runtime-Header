//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10ProductKitP33_D660C6A3879B3DCAB1A93C6FE6EA6B5B11SceneDriver : NSObject
{
    MISSING_TYPE *scene;
    MISSING_TYPE *configuration;
    MISSING_TYPE *player;
    MISSING_TYPE *camera;
    MISSING_TYPE *personalizedAssetMaterial;
    MISSING_TYPE *token;
    MISSING_TYPE *timeObserverToken;
    MISSING_TYPE *textureCache;
    MISSING_TYPE *videoMaterial;
    MISSING_TYPE *currentPlaybackState;
    MISSING_TYPE *featureStartedHandler;
    MISSING_TYPE *featureCompletedHandler;
    MISSING_TYPE *engageDuration;
    MISSING_TYPE *loopDuration;
    MISSING_TYPE *croppedVideoSize;
    MISSING_TYPE *originalVideoSize;
    MISSING_TYPE *yOffset;
    MISSING_TYPE *currentIOSurface;
}

- (void).cxx_destruct;
- (id)init;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)handlePlayerItemFinished:(id)arg1;
- (void)dealloc;

@end

