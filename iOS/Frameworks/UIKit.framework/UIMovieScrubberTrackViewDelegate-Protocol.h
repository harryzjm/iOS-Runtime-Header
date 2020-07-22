//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class UIMovieScrubberTrackView;

@protocol UIMovieScrubberTrackViewDelegate <NSObject>

@optional
- (double)movieScrubberTrackViewZoomAnimationDelay:(UIMovieScrubberTrackView *)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidCollapse:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidExpand:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
@end

