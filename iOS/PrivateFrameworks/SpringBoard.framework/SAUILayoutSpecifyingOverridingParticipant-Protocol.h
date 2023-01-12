//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SABehaviorOverridingParticipant-Protocol.h>

@class SAUIPreferredLayoutModeAssertion, UIView;
@protocol SAUILayoutModePreferring, SAUILayoutSpecifyingOverriding;

@protocol SAUILayoutSpecifyingOverridingParticipant <SABehaviorOverridingParticipant>

@optional
- (_Bool)isRequestingMenuPresentationForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (void)layoutHostContainerViewDidLayoutSubviews:(UIView *)arg1 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg2;
- (void)layoutHostContainerViewWillLayoutSubviews:(UIView *)arg1 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg2;
- (_Bool)isProvidedViewConcentric:(UIView *)arg1 inLayoutMode:(long long)arg2 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg3 isDefaultValue:(_Bool *)arg4;
- (struct CGSize)sizeThatFitsSize:(struct CGSize)arg1 forProvidedView:(UIView *)arg2 inLayoutMode:(long long)arg3 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg4 isDefaultValue:(_Bool *)arg5;
- (struct NSDirectionalEdgeInsets)preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets)arg2 maximumOutsets:(struct NSDirectionalEdgeInsets)arg3 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg4 isDefaultValue:(_Bool *)arg5;
- (void)setPreferredLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg3;
- (SAUIPreferredLayoutModeAssertion *)preferredLayoutModeAssertionForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (id <SAUILayoutModePreferring>)layoutModePreferenceForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (_Bool)isMinimalPresentationPossibleForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (_Bool)isInteractiveDismissalEnabledForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (long long)preferredLayoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (long long)minimumSupportedLayoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg3;
- (long long)layoutModeForTargetWithOverrider:(id <SAUILayoutSpecifyingOverriding>)arg1 isDefaultValue:(_Bool *)arg2;
@end

