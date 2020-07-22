//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer
{
    NSMutableSet *_hu_activeTouches;
    double _currentSampleForceMultiplier;
    double _currentSampleTimestamp;
    double _overallForceMultiplierExcludingCurrentSample;
    double _touchStartTime;
}

@property(nonatomic) double touchStartTime; // @synthesize touchStartTime=_touchStartTime;
@property(nonatomic) double overallForceMultiplierExcludingCurrentSample; // @synthesize overallForceMultiplierExcludingCurrentSample=_overallForceMultiplierExcludingCurrentSample;
@property(nonatomic) double currentSampleTimestamp; // @synthesize currentSampleTimestamp=_currentSampleTimestamp;
@property(nonatomic) double currentSampleForceMultiplier; // @synthesize currentSampleForceMultiplier=_currentSampleForceMultiplier;
@property(readonly, nonatomic) NSMutableSet *hu_activeTouches; // @synthesize hu_activeTouches=_hu_activeTouches;
- (void).cxx_destruct;
@property(readonly, nonatomic) double overallForceMultiplier;
@property(readonly, nonatomic) double currentForceMultiplier;
- (void)_logForceMultiplierSample;
- (void)_resetForceSamples;
- (double)_forceMultiplierIncludingCurrentSample;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

