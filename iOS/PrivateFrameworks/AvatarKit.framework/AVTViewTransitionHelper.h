//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTStickerConfiguration, AVTStickerConfigurationReversionContext, AVTView, MISSING_TYPE, SCNTechnique;

__attribute__((visibility("hidden")))
@interface AVTViewTransitionHelper : NSObject
{
    AVTView *_view;
    AVTStickerConfiguration *_stickerConfiguration;
    SCNTechnique *_transitionTechnique;
    AVTStickerConfigurationReversionContext *_stickerTransitionReversionContext;
}

- (void).cxx_destruct;
- (id)snapshotViewUsingBackgroundColor: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)viewBackgroundColor;
- (id)transitionTechnique;
- (void)view_performAnimateThenCrossFadeTransitionFromStickerConfiguration:(id)arg1 toStickerConfiguration:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 simultaneousAnimationsBlock:(CDUnknownBlockType)arg8;
- (void)coordinator_performCrossFadeThenAnimateTransitionOutOfStickerConfigurationWithDuration:(double)arg1 avatar:(id)arg2 avatarNode:(id)arg3 oldReversionContext:(id)arg4;
- (void)coordinator_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6;
- (void)view_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)arg1 fallbackPose:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 simultaneousAnimationsBlock:(CDUnknownBlockType)arg8;
- (void)coordinator_performCrossFadeTransitionOutOfStickerConfigurationWithDuration:(double)arg1 avatar:(id)arg2 avatarNode:(id)arg3 oldReversionContext:(id)arg4;
- (void)coordinator_performCrossFadeTransitionToStickerConfiguration:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6;
- (void)view_performCrossFadeTransitionToStickerConfiguration:(id)arg1 fallbackPose:(id)arg2 duration:(double)arg3 avatar:(id)arg4 avatarNode:(id)arg5 oldReversionContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 simultaneousAnimationsBlock:(CDUnknownBlockType)arg8;

@end

