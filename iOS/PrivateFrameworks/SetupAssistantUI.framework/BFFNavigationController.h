//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSRootController.h>

@class NSMutableArray, NSMutableDictionary, UIColor;

@interface BFFNavigationController : PSRootController
{
    NSMutableArray *_observers;
    NSMutableDictionary *_appearanceHandlers;
    long long _pendingShowOperation;
    UIColor *_backgroundColor;
    _Bool _animating;
}

@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)removeDelegateObserver:(id)arg1;
- (void)addDelegateObserver:(id)arg1;
- (void)_reapObservers;
- (void)setDelegate:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
@property(retain, nonatomic) UIColor *backgroundColor;
- (_Bool)_canShowTextServices;
- (_Bool)_usesTransitionController;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;

@end

