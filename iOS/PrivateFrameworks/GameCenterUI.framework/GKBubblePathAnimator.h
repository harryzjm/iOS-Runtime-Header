//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKBubblePathAnimator : NSObject
{
}

+ (id)hiTimingFunction;
+ (id)sharedBubblePathAnimator;
- (id)effectiveViewForContext:(id)arg1;
- (double)minimumDurationForViewAnimations;
- (void)animateTransition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)animateTransition:(id)arg1;
- (_Bool)bubblesOnscreenAtEnd;
- (_Bool)bubblesOnscreenAtBeginning;
@property(readonly, nonatomic) long long animatorType;

@end
