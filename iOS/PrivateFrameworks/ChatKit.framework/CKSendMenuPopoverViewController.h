//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CKSendMenuPresentationPopoverView;
@protocol CKSendMenuPopoverViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKSendMenuPopoverViewController : UIViewController
{
    UIViewController *_sendMenuViewController;
    UIViewController *_appContainerViewController;
    id <CKSendMenuPopoverViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CKSendMenuPopoverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)animationForTransitioningToAppContainerViewControllerWithFinalBounds:(struct CGRect)arg1 finalCenter:(struct CGPoint)arg2;
- (id)animationForDismissingWithFinalBounds:(struct CGRect)arg1 finalCenter:(struct CGPoint)arg2 finalAlpha:(double)arg3;
- (id)animationForPresentingSendMenuViewControllerWithFinalBounds:(struct CGRect)arg1 finalCenter:(struct CGPoint)arg2;
@property(readonly, nonatomic) CKSendMenuPresentationPopoverView *popoverView;
@property(retain, nonatomic) UIViewController *appContainerViewController; // @synthesize appContainerViewController=_appContainerViewController;
@property(retain, nonatomic) UIViewController *sendMenuViewController; // @synthesize sendMenuViewController=_sendMenuViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)loadView;
- (id)init;

@end

