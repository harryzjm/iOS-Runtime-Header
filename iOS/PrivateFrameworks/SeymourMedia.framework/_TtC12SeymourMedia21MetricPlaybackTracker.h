//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC12SeymourMedia21MetricPlaybackTracker : _TtCs12_SwiftObject
{
    MISSING_TYPE *catalogWorkout;
    MISSING_TYPE *eventHub;
    MISSING_TYPE *subscriptionToken;
    MISSING_TYPE *mediaType;
    MISSING_TYPE *networkEvaluator;
    MISSING_TYPE *assetClient;
    MISSING_TYPE *platform;
    MISSING_TYPE *startTime;
    MISSING_TYPE *lastWorkoutPlaybackInfo;
    MISSING_TYPE *downloadState;
    MISSING_TYPE *expectedWorkoutPlaybackPause;
    MISSING_TYPE *playbackFocus;
    MISSING_TYPE *currentSubtitleSelection;
    MISSING_TYPE *remoteDisplayConnection;
    MISSING_TYPE *playbackMode;
    MISSING_TYPE *isGroupActivity;
    MISSING_TYPE *musicIDStartPlaybackInfoMap;
    MISSING_TYPE *reportedStopMusicIDS;
    MISSING_TYPE *seeking;
    MISSING_TYPE *seekBeganOverallPosition;
    MISSING_TYPE *seekBeganMusicTrack;
    MISSING_TYPE *seekBeganMusicTrackPosition;
    MISSING_TYPE *seekBeganTimestamp;
    MISSING_TYPE *onInvalidTransition;
}

- (void)handlePlaybackInterrupted;
- (void)handleAppBackground;

@end
