//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AmbientUI/AMUIAmbientViewControllingDelegate-Protocol.h>

@class AMUIPosterSwitcherViewController, PRSPosterConfiguration;
@protocol AMAuthenticationHandling;

@protocol AMUIPosterSwitcherViewControllerDelegate <AMUIAmbientViewControllingDelegate>
- (_Bool)posterSwitcherViewControllerHasInlineAuthenticated:(AMUIPosterSwitcherViewController *)arg1;
- (void)posterSwitcherViewControllerDidSuccessfullyCompleteInlineAuthentication:(AMUIPosterSwitcherViewController *)arg1;
- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 didSetInlineAuthenticationViewVisible:(_Bool)arg2;
- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 didSetPasscodeVisible:(_Bool)arg2;
- (id <AMAuthenticationHandling>)posterSwitcherViewControllerAuthenticationHandler:(AMUIPosterSwitcherViewController *)arg1;
- (_Bool)posterSwitcherViewControllerIsAuthenticated:(AMUIPosterSwitcherViewController *)arg1;
- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 isTransitioningSettled:(_Bool)arg2;
- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 didSettleOnConfiguration:(PRSPosterConfiguration *)arg2 interactive:(_Bool)arg3;
@end

