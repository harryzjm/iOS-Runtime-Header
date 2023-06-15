//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIDragInteractionDelegate-Protocol.h>

@class NSArray, UIDragInteraction, UIDragItem, UIGestureRecognizer, UIView, _UIDragSessionProperties;
@protocol UIDragSession, UIViewSpringAnimationBehaviorDescribing;

@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>

@optional
- (_UIDragSessionProperties *)_dragInteraction:(UIDragInteraction *)arg1 sessionPropertiesForSession:(id <UIDragSession>)arg2;
- (id <UIViewSpringAnimationBehaviorDescribing>)_dragInteraction:(UIDragInteraction *)arg1 customSpringAnimationBehaviorForCancellingItem:(UIDragItem *)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 sessionSupportsSystemDrag:(id <UIDragSession>)arg2;
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForAddingToSession:(id <UIDragSession>)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForSession:(id <UIDragSession>)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 competingGestureRecognizerShouldDelayLift:(UIGestureRecognizer *)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 canExcludeCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)_dragInteraction:(UIDragInteraction *)arg1 shouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(UIDragInteraction *)arg1;
- (void)_dragInteraction:(UIDragInteraction *)arg1 liftAnimationDidChangeDirection:(long long)arg2;
- (void)_dragInteraction:(UIDragInteraction *)arg1 prepareForSession:(id <UIDragSession>)arg2 completion:(void (^)(void))arg3;
- (_Bool)_dragInteractionAllowsDragOverridingMasterSwitch:(UIDragInteraction *)arg1;
- (UIView *)_dragInteraction:(UIDragInteraction *)arg1 viewToSnapshotItem:(UIDragItem *)arg2;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
@end

