//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSFluidProgressState : NSObject
{
    double _webKitProgressValue;
    double _linearFunctionM;
    double _linearFunctionB;
    double _startTimeForFluidProgress;
    double _lastTimeProgressValueWasUpdated;
    long long _fluidProgressAnimationPhase;
    double _previousDestinationPosition;
    double _animationDuration;
    double _minProgressPosition;
    _Bool _hasCompletedLoad;
    _Bool _hasCanceledLoad;
    _Bool _hasCommittedLoad;
    _Bool _shouldAnimateUsingInitialPosition;
    long long _fluidProgressType;
    NSString *_loadURL;
}

+ (double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1;
@property(nonatomic) _Bool shouldAnimateUsingInitialPosition; // @synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition;
@property(nonatomic) _Bool hasCommittedLoad; // @synthesize hasCommittedLoad=_hasCommittedLoad;
@property(nonatomic) _Bool hasCanceledLoad; // @synthesize hasCanceledLoad=_hasCanceledLoad;
@property(nonatomic) _Bool hasCompletedLoad; // @synthesize hasCompletedLoad=_hasCompletedLoad;
@property(copy, nonatomic) NSString *loadURL; // @synthesize loadURL=_loadURL;
@property(nonatomic) long long fluidProgressType; // @synthesize fluidProgressType=_fluidProgressType;
- (void).cxx_destruct;
- (double)secondsElapsedSinceLoadBegan;
- (_Bool)isFluidProgressStalled;
- (id)nextFluidProgressAnimation;
- (double)fluidProgressValue;
@property(nonatomic) double minProgressPosition;
- (void)setWebKitProgressValue:(double)arg1;
@property(nonatomic) long long fluidProgressAnimationPhase;
- (id)description;
- (id)initWithType:(long long)arg1;
- (void)_updateLinearFunction;
- (double)_nextProgressPosition:(double)arg1;
- (double)_fractionCompleteAtElapsedTime:(double)arg1;
- (double)_estimatedLoadTimeRemaining;
- (double)_animationDuration;
- (double)_adjustProgressPosition:(double)arg1;

@end
