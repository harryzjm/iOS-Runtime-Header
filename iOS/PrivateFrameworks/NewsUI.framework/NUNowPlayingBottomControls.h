//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NewsUI/UIContextMenuInteractionDelegate-Protocol.h>

@class MPMediaControls, MPRouteButton, MPRouteLabel, NSString, NUTouchInsetsButton, UIButton, UIContextMenuInteraction;
@protocol NUNowPlayingBottomControlsDelegate;

@interface NUNowPlayingBottomControls : UIView <UIContextMenuInteractionDelegate>
{
    UIView *_contentView;
    UIButton *_playbackSpeedButton;
    MPRouteButton *_routeButton;
    MPRouteLabel *_routeLabel;
    MPMediaControls *_mediaControls;
    NUTouchInsetsButton *_ellipsisButton;
    double _inset;
    id <NUNowPlayingBottomControlsDelegate> _delegate;
    UIContextMenuInteraction *_playbackSpeedInteraction;
}

+ (id)_labelForRate:(double)arg1;
+ (id)_accessibilityValueForRate:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIContextMenuInteraction *playbackSpeedInteraction; // @synthesize playbackSpeedInteraction=_playbackSpeedInteraction;
@property(nonatomic) __weak id <NUNowPlayingBottomControlsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double inset; // @synthesize inset=_inset;
@property(retain, nonatomic) NUTouchInsetsButton *ellipsisButton; // @synthesize ellipsisButton=_ellipsisButton;
@property(retain, nonatomic) MPMediaControls *mediaControls; // @synthesize mediaControls=_mediaControls;
@property(retain, nonatomic) MPRouteLabel *routeLabel; // @synthesize routeLabel=_routeLabel;
@property(retain, nonatomic) MPRouteButton *routeButton; // @synthesize routeButton=_routeButton;
@property(retain, nonatomic) UIButton *playbackSpeedButton; // @synthesize playbackSpeedButton=_playbackSpeedButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)routeButtonTouchUpOutside:(id)arg1;
- (void)routeButtonTapped:(id)arg1;
- (void)routeButtonTouchDown:(id)arg1;
- (void)ellipsisButtonTapped:(id)arg1;
- (void)playbackSpeedButtonTapped:(id)arg1;
- (void)setRate:(double)arg1;
- (void)updatePlaybackSpeedButtonFont;
- (void)updateEllipsisButtonImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)buttonTitleFont;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 inset:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
