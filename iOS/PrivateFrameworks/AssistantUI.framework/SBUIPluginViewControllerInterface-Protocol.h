//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class SBUIPluginAppearanceContext;
@protocol SBUIPluginFluidDismissalState;

@protocol SBUIPluginViewControllerInterface <NSObject>

@optional
@property(readonly, nonatomic) _Bool shouldTurnOnScreenOnAppearance;
@property(retain, nonatomic) id <SBUIPluginFluidDismissalState> fluidDismissalState;
- (void)animateDisappearanceFromContext:(SBUIPluginAppearanceContext *)arg1;
- (void)willAnimateDisappearanceFromContext:(SBUIPluginAppearanceContext *)arg1;
- (void)animateAppearanceFromContext:(SBUIPluginAppearanceContext *)arg1;
- (void)willAnimateAppearanceFromContext:(SBUIPluginAppearanceContext *)arg1;
- (void)setShowsStatusBar:(_Bool)arg1;
@end

