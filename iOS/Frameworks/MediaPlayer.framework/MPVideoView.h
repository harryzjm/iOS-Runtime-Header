//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, MPAVController, NSDictionary, NSString, _MPAVPlayerView;

@interface MPVideoView : UIView
{
    MPAVController *_player;
    double _startTime;
    double _stopTime;
    NSDictionary *_AVURLAssetOptions;
    _MPAVPlayerView *_playerView;
    UIView *_contentView;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    long long _scaleMode;
}

@property(nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) __weak MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *movieTitle; // @synthesize movieTitle=_movieTitle;
@property(retain, nonatomic) NSString *movieSubtitle; // @synthesize movieSubtitle=_movieSubtitle;
@property(retain, nonatomic) NSDictionary *AVURLAssetOptions; // @synthesize AVURLAssetOptions=_AVURLAssetOptions;
- (void).cxx_destruct;
- (void)didMoveToWindow;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(readonly, nonatomic) struct CGRect movieContentFrame;
@property(readonly, nonatomic) struct CGRect movieFrame;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) long long effectiveScaleMode;
- (void)toggleScaleMode:(_Bool)arg1;
- (void)setScaleMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setScaleMode:(long long)arg1 duration:(float)arg2;
@property(readonly, nonatomic) _Bool canChangeScaleMode;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

