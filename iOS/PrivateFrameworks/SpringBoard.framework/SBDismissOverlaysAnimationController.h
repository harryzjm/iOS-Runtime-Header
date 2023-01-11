//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBDismissOverlaysAnimationController
{
    unsigned long long _dismissOptions;
}

+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)arg1;
+ (_Bool)willDismissOverlaysForDismissOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dismissOptions; // @synthesize dismissOptions=_dismissOptions;
- (id)animationSettings;
- (void)_startAnimation;
- (_Bool)_canBeInterrupted;
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end
