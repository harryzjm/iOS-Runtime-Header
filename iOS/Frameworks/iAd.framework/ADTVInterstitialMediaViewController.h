//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <iAd/ADPlayerDelegate-Protocol.h>
#import <iAd/ADTVMediaControlsViewControllerDelegate-Protocol.h>

@class ADAdImpressionPublicAttributes, ADInterstitialAd, ADPlayer, ADTVMediaControlsViewController, ADTVPrerollVideoView, NSString, UIImage;

@interface ADTVInterstitialMediaViewController : UIViewController <ADPlayerDelegate, ADTVMediaControlsViewControllerDelegate>
{
    ADInterstitialAd *_interstitialAd;
    _Bool _videoCanPlay;
    ADAdImpressionPublicAttributes *_impressionAttributes;
    UIImage *_backgroundImage;
    ADPlayer *_videoPlayer;
    ADTVPrerollVideoView *_videoView;
    ADTVMediaControlsViewController *_mediaControlsViewController;
    CDUnknownBlockType _loadCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
@property(nonatomic) _Bool videoCanPlay; // @synthesize videoCanPlay=_videoCanPlay;
@property(retain, nonatomic) ADTVMediaControlsViewController *mediaControlsViewController; // @synthesize mediaControlsViewController=_mediaControlsViewController;
@property(retain, nonatomic) ADTVPrerollVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) ADPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) ADAdImpressionPublicAttributes *impressionAttributes; // @synthesize impressionAttributes=_impressionAttributes;
- (void)adtvMediaControlsPrivacyButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsActionButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsSkipButtonWasPressed:(id)arg1;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)_updateLoadStatus:(id)arg1;
- (void)_loadBackgroundImageFromString:(id)arg1;
- (void)playVideo;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)loadContentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initForInterstitialAd:(id)arg1 withImpressionPublicAttributes:(id)arg2;
@property(readonly, nonatomic) __weak ADInterstitialAd *interstitialAd;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

