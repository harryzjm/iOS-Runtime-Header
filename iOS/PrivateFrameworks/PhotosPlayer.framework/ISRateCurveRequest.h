//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISAVPlayer;

@interface ISRateCurveRequest : NSObject
{
    double _startTime;
    CDStruct_1b6d18a9 _startVideoTime;
    _Bool _cancelled;
    id _boundaryObserver;
    double _stepInterval;
    long long _stepIndex;
    float _initialRate;
    double _duration;
    ISAVPlayer *_avPlayer;
    CDUnknownBlockType _progressHandler;
    CDStruct_1b6d18a9 _targetTime;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) __weak ISAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(readonly, nonatomic) float initialRate; // @synthesize initialRate=_initialRate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 targetTime; // @synthesize targetTime=_targetTime;
- (void).cxx_destruct;
- (void)_stopObservingPlayer;
- (void)dealloc;
- (void)cancel;
- (void)_didReachTargetTime;
- (void)_stepDownRate;
- (void)start;
- (id)initWithTargetTime:(CDStruct_1b6d18a9)arg1 duration:(double)arg2 initialRate:(float)arg3 avPlayer:(id)arg4 progressHandler:(CDUnknownBlockType)arg5;

@end

