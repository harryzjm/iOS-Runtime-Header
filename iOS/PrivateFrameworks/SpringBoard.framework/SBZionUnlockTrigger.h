//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBZionUnlockTrigger
{
    id <SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    _Bool _fingerOn;
    _Bool _fingerOffSinceWake;
    BSTimer *_restToOpenTimer;
    BSTimer *_minTouchIDTimer;
}

- (void).cxx_destruct;
- (_Bool)_isRestToOpenAvailable;
- (void)_cancelMinTouchIDTimer;
- (void)_cancelRestToOpenTimer;
- (void)_evaluateRestToOpenTimer;
- (void)_startRestToOpenTimerWithDuration:(double)arg1;
- (void)_startRestToOpenTimer;
- (void)lockButtonDown;
- (void)screenOff;
- (void)fingerOff;
- (void)fingerOn;
- (_Bool)bioUnlock;
- (id)succinctDescriptionBuilder;
- (id)description;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1;

@end
