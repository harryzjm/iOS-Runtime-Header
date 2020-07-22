//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>
#import <UIKit/UITraitEnvironment-Protocol.h>

@class NSIndexPath, UIColor, UIContextualAction, UIScrollView, UISwipeActionController, UISwipeActionsConfiguration, UIView;

@protocol UISwipeActionHost <NSObject, UITraitEnvironment>
- (void)swipeActionController:(UISwipeActionController *)arg1 animateView:(UIView *)arg2 actionsView:(UIView *)arg3 forDestructiveAction:(UIContextualAction *)arg4 atIndexPath:(NSIndexPath *)arg5 withSwipeInfo:(CDStruct_b06b0113)arg6 completion:(void (^)(_Bool))arg7;
- (UISwipeActionsConfiguration *)swipeActionController:(UISwipeActionController *)arg1 trailingSwipeConfigurationForItemAtIndexPath:(NSIndexPath *)arg2;
- (UISwipeActionsConfiguration *)swipeActionController:(UISwipeActionController *)arg1 leadingSwipeConfigurationForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)swipeActionController:(UISwipeActionController *)arg1 indexPathForTouchLocation:(struct CGPoint)arg2;
- (UIView *)swipeActionController:(UISwipeActionController *)arg1 viewForItemAtIndexPath:(NSIndexPath *)arg2;
- (UIScrollView *)itemContainerViewForSwipeActionController:(UISwipeActionController *)arg1;
- (UIView *)gestureRecognizerViewForSwipeActionController:(UISwipeActionController *)arg1;

@optional
- (void)swipeActionController:(UISwipeActionController *)arg1 didCompleteAnimationOfAction:(UIContextualAction *)arg2 canceled:(_Bool)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)swipeActionController:(UISwipeActionController *)arg1 didPerformAction:(UIContextualAction *)arg2 canceled:(_Bool)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)swipeActionController:(UISwipeActionController *)arg1 willPerformAction:(UIContextualAction *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)swipeActionController:(UISwipeActionController *)arg1 didEndSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 willBeginSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)swipeActionController:(UISwipeActionController *)arg1 mayBeginSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)swipeActionController:(UISwipeActionController *)arg1 backgroundColorForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct UIEdgeInsets)swipeActionController:(UISwipeActionController *)arg1 extraInsetsForItemAtIndexPath:(NSIndexPath *)arg2;
@end

