//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UILabel, UIView;
@protocol NUNowPlayingDockedViewDelegate;

@interface NUNowPlayingDockedView
{
    _Bool _waiting;
    id <NUNowPlayingDockedViewDelegate> _delegate;
    UIView *_contentView;
    UILabel *_publisherLabel;
    UILabel *_titleLabel;
    UIButton *_rewindButton;
    UIButton *_playPauseButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIButton *rewindButton; // @synthesize rewindButton=_rewindButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *publisherLabel; // @synthesize publisherLabel=_publisherLabel;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <NUNowPlayingDockedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rewindButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)_updateTitleAccessibilityLabel;
- (void)setIsPlaying:(_Bool)arg1 waiting:(_Bool)arg2;
- (void)setMarqueeRunning:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
