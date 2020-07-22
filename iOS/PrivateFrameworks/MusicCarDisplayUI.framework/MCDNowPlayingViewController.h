//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MCDLabelButton, MCDPlayModeControlView, MCDProgressView, MCDTitleView, MCDTransportControlView, NSLayoutConstraint, NSString, UIColor, UIFocusContainerGuide, UIImageView, UILongPressGestureRecognizer, UINavigationBar, UITapGestureRecognizer;
@protocol MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate;

@interface MCDNowPlayingViewController : UIViewController
{
    _Bool _isScrubbing;
    long long _heldAction;
    UIViewController *_transportViewController;
    UIViewController *_playModeViewController;
    UINavigationBar *_navigationBar;
    MCDLabelButton *_albumArtistLabelButton;
    _Bool _highTouchMode;
    UIColor *_navbarColor;
    _Bool _navbarHidesShadow;
    _Bool _viewHasShifted;
    _Bool _handledWillAppear;
    MCDTransportControlView *_transportControlView;
    MCDPlayModeControlView *_playModeControlView;
    MCDTitleView *_titleView;
    id <MCDNowPlayingViewControllerDelegate> _delegate;
    id <MCDNowPlayingViewControllerDataSource> _dataSource;
    MCDProgressView *_progressView;
    UIImageView *_artworkView;
    UITapGestureRecognizer *_knobPressRecognizer;
    UITapGestureRecognizer *_backPressRecognizer;
    UITapGestureRecognizer *_leftNudgePressRecognizer;
    UITapGestureRecognizer *_rightNudgePressRecognizer;
    UILongPressGestureRecognizer *_leftNudgeLongPressRecognizer;
    UILongPressGestureRecognizer *_rightNudgeLongPressRecognizer;
    UILongPressGestureRecognizer *_leftButtonLongPressRecognizer;
    UILongPressGestureRecognizer *_fastForwardButtonLongPressRecognizer;
    UIFocusContainerGuide *_controlsFocusContainerGuide;
    NSString *_previousTransportButtonImageIdentifier;
    NSString *_forwardTransportButtonImageIdentifier;
    NSString *_playPauseTransportButtonImageIdentifier;
    NSLayoutConstraint *_artistAlbumLabelConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *artistAlbumLabelConstraint; // @synthesize artistAlbumLabelConstraint=_artistAlbumLabelConstraint;
@property(retain, nonatomic) NSString *playPauseTransportButtonImageIdentifier; // @synthesize playPauseTransportButtonImageIdentifier=_playPauseTransportButtonImageIdentifier;
@property(retain, nonatomic) NSString *forwardTransportButtonImageIdentifier; // @synthesize forwardTransportButtonImageIdentifier=_forwardTransportButtonImageIdentifier;
@property(retain, nonatomic) NSString *previousTransportButtonImageIdentifier; // @synthesize previousTransportButtonImageIdentifier=_previousTransportButtonImageIdentifier;
@property(retain, nonatomic) UIFocusContainerGuide *controlsFocusContainerGuide; // @synthesize controlsFocusContainerGuide=_controlsFocusContainerGuide;
@property(retain, nonatomic) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer; // @synthesize fastForwardButtonLongPressRecognizer=_fastForwardButtonLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *leftButtonLongPressRecognizer; // @synthesize leftButtonLongPressRecognizer=_leftButtonLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer; // @synthesize rightNudgeLongPressRecognizer=_rightNudgeLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer; // @synthesize leftNudgeLongPressRecognizer=_leftNudgeLongPressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *rightNudgePressRecognizer; // @synthesize rightNudgePressRecognizer=_rightNudgePressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftNudgePressRecognizer; // @synthesize leftNudgePressRecognizer=_leftNudgePressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *backPressRecognizer; // @synthesize backPressRecognizer=_backPressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *knobPressRecognizer; // @synthesize knobPressRecognizer=_knobPressRecognizer;
@property(readonly, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property(readonly, nonatomic) MCDProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <MCDNowPlayingViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MCDNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MCDTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) MCDPlayModeControlView *playModeControlView; // @synthesize playModeControlView=_playModeControlView;
@property(readonly, nonatomic) MCDTransportControlView *transportControlView; // @synthesize transportControlView=_transportControlView;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (void)_initializeTransportControls;
- (void)_playbackButtonTouchUp:(id)arg1;
- (void)_addToLibraryButtonTouchUp:(id)arg1;
- (void)_moreButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonLongPress:(id)arg1;
- (void)_rightNudgePress:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_leftNudgePress:(id)arg1;
- (void)_leftButtonLongPress:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_sendHeldAction;
- (void)_respondToHeldAction;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)albumArtistButtonTapped:(id)arg1;
- (void)reloadData;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (void)_updatePlaybackRate;
- (void)_updateShuffleStateWithType:(long long)arg1;
- (void)_updateRepeatStateWithType:(long long)arg1;
- (void)_updatePlayModesState;
- (void)updatePlayControls;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_handleWillAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

