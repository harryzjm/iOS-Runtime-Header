//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosPlayer/ISVitalitySettings-Protocol.h>

@class NSString;

@interface ISVitalitySpecificSettings <ISVitalitySettings>
{
    long long _behavior;
    double _preDuration;
    double _postDuration;
    double _startSeekTolerance;
    double _maximumRate;
    double _maximumDeceleration;
    double _relativeStart;
    double _relativeEnd;
    long long _maximumNumberOfFrames;
    double _playbackRate;
    double _endTimeOffset;
    double _minimumVisibilityFactor;
    double _maximumDelayBeforePlayback;
    double _minimumDurationForColorMismatch;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) double minimumDurationForColorMismatch; // @synthesize minimumDurationForColorMismatch=_minimumDurationForColorMismatch;
@property(nonatomic) double maximumDelayBeforePlayback; // @synthesize maximumDelayBeforePlayback=_maximumDelayBeforePlayback;
@property(nonatomic) double minimumVisibilityFactor; // @synthesize minimumVisibilityFactor=_minimumVisibilityFactor;
@property(nonatomic) double endTimeOffset; // @synthesize endTimeOffset=_endTimeOffset;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) long long maximumNumberOfFrames; // @synthesize maximumNumberOfFrames=_maximumNumberOfFrames;
@property(nonatomic) double relativeEnd; // @synthesize relativeEnd=_relativeEnd;
@property(nonatomic) double relativeStart; // @synthesize relativeStart=_relativeStart;
@property(nonatomic) double maximumDeceleration; // @synthesize maximumDeceleration=_maximumDeceleration;
@property(nonatomic) double maximumRate; // @synthesize maximumRate=_maximumRate;
@property(nonatomic) double startSeekTolerance; // @synthesize startSeekTolerance=_startSeekTolerance;
@property(nonatomic) double postDuration; // @synthesize postDuration=_postDuration;
@property(nonatomic) double preDuration; // @synthesize preDuration=_preDuration;
@property(nonatomic) long long behavior; // @synthesize behavior=_behavior;
- (void)setDefaultValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
