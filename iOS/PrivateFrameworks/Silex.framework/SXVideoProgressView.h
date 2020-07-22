//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

@interface SXVideoProgressView : UIView
{
    double _timeElapsed;
    double _duration;
    double _loadingProgress;
    UIView *_loadingProgressView;
    UIVisualEffectView *_playbackProgressView;
}

@property(readonly, nonatomic) UIVisualEffectView *playbackProgressView; // @synthesize playbackProgressView=_playbackProgressView;
@property(readonly, nonatomic) UIView *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property(nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeElapsed; // @synthesize timeElapsed=_timeElapsed;
- (void).cxx_destruct;
- (void)animatePlaybackProgressWithFrame:(struct CGRect)arg1;
- (void)animateToStart;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)frameForProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

