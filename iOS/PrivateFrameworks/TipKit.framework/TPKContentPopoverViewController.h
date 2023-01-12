//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, TPKContentView, UIView;
@protocol UIPopoverPresentationControllerDelegate;

@interface TPKContentPopoverViewController : UIViewController
{
    MISSING_TYPE *popoverDelegate;
    MISSING_TYPE *sourceViewController;
    MISSING_TYPE *contentView;
    MISSING_TYPE *preferredPopoverWidth;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)passthroughViewsNeedsUpdate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentController:(id)arg1 tipContent:(id)arg2 sourceViewController:(id)arg3 popoverDelegate:(id)arg4;
- (id)initWithContentController:(id)arg1 tipContent:(id)arg2 sourceViewController:(id)arg3;
@property(nonatomic) double preferredPopoverWidth; // @synthesize preferredPopoverWidth;
@property(nonatomic) unsigned long long permittedArrowDirections;
@property(nonatomic) struct CGRect sourceRect;
@property(nonatomic, retain) UIView *sourceView;
@property(nonatomic, readonly) _Bool _canShowWhileLocked;
@property(nonatomic, retain) TPKContentView *contentView; // @synthesize contentView;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController;
@property(nonatomic) __weak id <UIPopoverPresentationControllerDelegate> popoverDelegate; // @synthesize popoverDelegate;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(struct CGRect *)arg2 inView:(id *)arg3;
- (void)prepareForPopoverPresentation:(id)arg1;

@end
