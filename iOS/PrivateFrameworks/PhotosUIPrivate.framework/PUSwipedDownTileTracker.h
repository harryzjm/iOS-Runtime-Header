//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHSwipeDownTracker, PUTileController, PUTileLayoutInfo, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUSwipedDownTileTracker
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    PUTileController *_designatedTileController;
    PHSwipeDownTracker *__swipeDownTracker;
    PUTileLayoutInfo *__trackedTileLayoutInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setTrackedTileLayoutInfo:) PUTileLayoutInfo *_trackedTileLayoutInfo; // @synthesize _trackedTileLayoutInfo=__trackedTileLayoutInfo;
@property(retain, nonatomic, setter=_setSwipeDownTracker:) PHSwipeDownTracker *_swipeDownTracker; // @synthesize _swipeDownTracker=__swipeDownTracker;
@property(retain, nonatomic) PUTileController *designatedTileController; // @synthesize designatedTileController=_designatedTileController;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (id)tileControllerToTrack;
- (void)completeTracking;
- (void)updateTileControllerTracking;
- (void)startTileControllerTracking;
- (void)updateGestureRecognizerTracking;
- (id)initWithPanGestureRecognizer:(id)arg1 tilingView:(id)arg2;
- (id)initWithTilingView:(id)arg1;

@end

