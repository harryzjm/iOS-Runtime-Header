//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVStatusBarBackgroundGradientView, AVVisualAnalysisView, NSString, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentContainerView : UIView
{
    _Bool _playingOnSecondScreen;
    _Bool _canShowStatusBarBackgroundGradientWhenStatusBarVisible;
    _Bool _observingStatusBarHidden;
    AVVisualAnalysisView *_visualAnalysisView;
    __AVPlayerLayerView *_playerLayerView;
    UIView *_contentOverlayView;
    UIView *_contentOverlayViewSubview;
    AVStatusBarBackgroundGradientView *_statusBarBackgroundGradientView;
    struct CGRect _videoContentFrame;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isObservingStatusBarHidden) _Bool observingStatusBarHidden; // @synthesize observingStatusBarHidden=_observingStatusBarHidden;
@property(readonly, nonatomic) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView; // @synthesize statusBarBackgroundGradientView=_statusBarBackgroundGradientView;
@property(nonatomic) _Bool canShowStatusBarBackgroundGradientWhenStatusBarVisible; // @synthesize canShowStatusBarBackgroundGradientWhenStatusBarVisible=_canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property(retain, nonatomic) UIView *contentOverlayViewSubview; // @synthesize contentOverlayViewSubview=_contentOverlayViewSubview;
@property(readonly, nonatomic) UIView *contentOverlayView; // @synthesize contentOverlayView=_contentOverlayView;
@property(retain, nonatomic) __AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(nonatomic) struct CGRect videoContentFrame; // @synthesize videoContentFrame=_videoContentFrame;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property(retain, nonatomic) AVVisualAnalysisView *visualAnalysisView; // @synthesize visualAnalysisView=_visualAnalysisView;
- (void)_updateStatusBarBackgroundGradientViewAlpha;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)removeAllSublayerTransformAnimations;
- (void)setVideoGravity:(long long)arg1 removingAllSublayerTransformAnimations:(_Bool)arg2;
@property(readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 playerLayerView:(id)arg2 contentOverlayView:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

