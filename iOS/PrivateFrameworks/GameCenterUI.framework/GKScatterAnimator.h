//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKScatterAnimator
{
    long long _focusBubbleType;
}

+ (double)preferredDuration;
@property(nonatomic) long long focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
- (_Bool)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;
- (_Bool)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;
- (id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(id)arg3 context: /* Error: Ran out of types for this method. */;
- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (double)minimumDurationForViewAnimations;

@end
