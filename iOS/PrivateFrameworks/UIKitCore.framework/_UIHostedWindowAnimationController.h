//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIHostedWindowAnimationController
{
    CDUnknownBlockType _transitionActions;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType transitionActions; // @synthesize transitionActions=_transitionActions;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

