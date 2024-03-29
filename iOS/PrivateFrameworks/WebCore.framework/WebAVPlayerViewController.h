//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerViewController : NSObject
{
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> _fullscreenInterface;
    struct RetainPtr<AVPlayerViewController> _avPlayerViewController;
    struct RetainPtr<NSTimer> _startPictureInPictureTimer;
    struct WeakObjCPtr<WebAVPlayerViewControllerDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_3707b61b *logChannel;
@property(readonly, nonatomic) const void *loggerPtr;
@property(readonly, nonatomic) const void *logIdentifier;
- (void)removeFromParentViewController;
- (id)avPlayerViewController;
- (void)setPlayerController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setAllowsPictureInPicturePlayback:(_Bool)arg1;
- (void)setShowsPlaybackControls:(_Bool)arg1;
- (_Bool)showsPlaybackControls;
- (void)flashPlaybackControlsWithDuration:(double)arg1;
- (id)view;
- (_Bool)pictureInPictureWasStartedWhenEnteringBackground;
- (_Bool)pictureInPictureActive;
- (_Bool)isPictureInPictureActive;
- (_Bool)isPictureInPicturePossible;
- (void)stopPictureInPicture;
- (void)startPictureInPicture;
- (void)tryToStartPictureInPicture;
- (void)removeObserver;
- (void)initObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)exitFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enterFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (_Bool)playerViewControllerShouldHandleDoneButtonTap:(id)arg1;
- (void)dealloc;
- (id)initWithFullscreenInterface:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

