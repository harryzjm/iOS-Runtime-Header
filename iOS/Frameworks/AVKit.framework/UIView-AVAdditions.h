//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (AVAdditions)
- (_Bool)avkit_isInAWindowAndVisible;
- (void)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 bestSoFar:(inout id *)arg3 shortestDistanceSoFar:(inout double *)arg4;
- (id)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)avkit_isDescendantOfViewPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)avkit_isAncestorOfViewPassingTest:(CDUnknownBlockType)arg1;
- (id)avkit_ancestorViewPassingTest:(CDUnknownBlockType)arg1;
@end

