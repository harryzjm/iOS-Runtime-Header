//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, PGPlaybackProgress, _PGPlaybackProgressIndicatorRangesView;

@interface PGPlaybackProgressIndicator : UIView
{
    NSTimer *_playbackProgressTimer;
    double _currentProgress;
    UIView *_containerView;
    _PGPlaybackProgressIndicatorRangesView *_loadedTimeRangesView;
    _PGPlaybackProgressIndicatorRangesView *_playbackProgressView;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
}

@property(retain, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(retain, nonatomic) PGPlaybackProgress *playbackProgress; // @synthesize playbackProgress=_playbackProgress;
- (void).cxx_destruct;
- (void)_updateLoadedTimeRangesMaskViewMaskRanges;
- (void)_updatePlaybackProgressMaskViewMaskRanges;
- (void)_updatePlaybackProgressTimer;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

