//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@interface UINavigationController (PUNavigationTransition_Internal)
- (double)px_imageModulationIntensityWithProposedValue:(double)arg1;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)pu_navigationTransitionWillEnd:(id)arg1;
- (void)pu_navigationTransitionWillStart:(id)arg1;
- (void)_pu_setCurrentNavigationTransition:(id)arg1;
- (id)pu_currentNavigationTransition;
- (id)pu_currentInteractiveTransition;
- (void)pu_popToViewController:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)pu_popViewControllerAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)pu_pushViewController:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3 isInteractive:(_Bool)arg4;
- (_Bool)pu_popToViewControllerIfAllowed:(id)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;
@end

