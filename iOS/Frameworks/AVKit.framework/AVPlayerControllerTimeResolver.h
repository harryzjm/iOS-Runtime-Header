//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/NSCoding-Protocol.h>

@class AVTimer;
@protocol AVTimeControlling;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding>
{
    id <AVTimeControlling> _playerController;
    double _interval;
    double _resolution;
    double _currentTime;
    AVTimer *_timer;
    double _minTime;
    double _maxTime;
}

+ (_Bool)automaticallyNotifiesObserversOfCurrentTime;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+ (id)keyPathForValuesAffectingSeekableTimeRangeDuration;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingTargetTime;
@property double maxTime; // @synthesize maxTime=_maxTime;
@property double minTime; // @synthesize minTime=_minTime;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property double currentTime;
@property double resolution;
@property double interval;
@property(retain) id <AVTimeControlling> playerController;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) _Bool currentTimeAtEndOfSeekableTimeRanges;
@property(readonly, getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges) _Bool thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
@property(readonly) double seekableTimeRangeDuration;
@property(readonly) double remainingTimeWithinEndTimes;
@property(readonly) double remainingTime;
@property double currentTimeWithinEndTimes;
@property(readonly) double remainingTargetTimeWithinEndTimes;
@property double targetTimeWithinEndTimes;
@property double targetTime;

@end

