//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPresentationController.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface AMPPrivacyPresentationController : UIPresentationController
{
    UIView *_dimmingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)presentationTransitionWillBegin;
- (void)_prepareDimmingViewIfNecessary;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (_Bool)shouldRemovePresentersView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (long long)adaptivePresentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

