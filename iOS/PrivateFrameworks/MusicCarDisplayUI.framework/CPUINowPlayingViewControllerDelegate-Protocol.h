//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class CPUIMediaButton, CPUINowPlayingViewController, NSArray, NSNumber, NSString;

@protocol CPUINowPlayingViewControllerDelegate <NSObject>

@optional
- (void)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 didSelectButton:(CPUIMediaButton *)arg2;
- (NSArray *)customPlaybackControlButtonsForNowPlayingViewController:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerWillAppear:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerShouldUseMusicExplicitGlyph:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanShowAlbumArt:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerMore:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanShowMore:(CPUINowPlayingViewController *)arg1;
- (NSNumber *)nowPlayingViewControllerGetPlaybackRate:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerChangePlaybackRate:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanShowChangePlaybackRate:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerUpNextButtonTapped:(CPUINowPlayingViewController *)arg1;
- (NSString *)titleForUpNextInNowPlayingViewController:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanShowUpNext:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerAlbumArtistButtonTapped:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanShowAlbumLink:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerIsFuseSubscriber:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerAddToLibrary:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanShowAddToLibrary:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanRepeat:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(CPUINowPlayingViewController *)arg1;
- (_Bool)nowPlayingViewControllerCanShuffle:(CPUINowPlayingViewController *)arg1;
- (void)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (_Bool)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 buttonShouldBeActive:(long long)arg2;
- (_Bool)nowPlayingViewController:(CPUINowPlayingViewController *)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id *)arg3 existingIdentifier:(NSString *)arg4 tinted:(out _Bool *)arg5;
@end
