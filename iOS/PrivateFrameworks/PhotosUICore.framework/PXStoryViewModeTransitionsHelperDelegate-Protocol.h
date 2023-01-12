//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXRegionOfInterest, PXStoryTimelineLayoutSnapshot, PXStoryViewModeTransition, PXStoryViewModeTransitionsHelper;

@protocol PXStoryViewModeTransitionsHelperDelegate <NSObject>
- (PXRegionOfInterest *)transitionsHelper:(PXStoryViewModeTransitionsHelper *)arg1 regionOfInterestForTransition:(PXStoryViewModeTransition *)arg2;
- (PXStoryTimelineLayoutSnapshot *)transitionsHelper:(PXStoryViewModeTransitionsHelper *)arg1 timelineLayoutSnapshotForViewMode:(long long)arg2;
- (void)transitionsHelperNeedsUpdate:(PXStoryViewModeTransitionsHelper *)arg1;
@end
