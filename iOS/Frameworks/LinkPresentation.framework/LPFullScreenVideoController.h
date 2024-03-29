//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerController, LPAVPlayerViewController, LPVisualMediaView, NSString, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface LPFullScreenVideoController : NSObject
{
    LPVisualMediaView *_sourceView;
    LPAVPlayerViewController *_playerViewController;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVPlayer *_player;
}

- (void).cxx_destruct;
- (_Bool)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg1;
- (void)didCompleteDismissal;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)dismiss;
- (void)present;
- (void)setUpFullScreenVideoViewControllerIfNeeded;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPlayer:(id)arg1 sourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

