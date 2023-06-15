//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class NSArray, NSString, PREditingLook, PREditor, PREditorColorPickerConfiguration, PRPosterTransition, PRTimeFontConfiguration, UIAction, UIMenu;
@protocol PREditingLookViewProviding, PRPosterEditingEnvironment;

@protocol PREditingDelegate <NSObject>
- (void)editorDidInvalidate:(PREditor *)arg1;
- (void)editor:(PREditor *)arg1 finalizeWithCompletion:(void (^)(void))arg2;
- (void)editor:(PREditor *)arg1 populateViews:(id <PREditingLookViewProviding>)arg2 forLook:(PREditingLook *)arg3;
- (NSArray *)looksForEditor:(PREditor *)arg1;
- (void)editor:(PREditor *)arg1 didUpdateEnvironment:(id <PRPosterEditingEnvironment>)arg2 withTransition:(PRPosterTransition *)arg3;
- (void)editor:(PREditor *)arg1 didInitializeWithEnvironment:(id <PRPosterEditingEnvironment>)arg2;

@optional
- (void)editorDidDelayFinalizationForBackgroundTask:(PREditor *)arg1;
- (_Bool)editorShouldBeginFinalization:(PREditor *)arg1;
- (void)editor:(PREditor *)arg1 depthEffectDisallowedDidChange:(_Bool)arg2;
- (PREditorColorPickerConfiguration *)gradientHomeScreenColorPickerConfigurationForEditor:(PREditor *)arg1;
- (PREditorColorPickerConfiguration *)solidColorHomeScreenColorPickerConfigurationForEditor:(PREditor *)arg1;
- (void)editor:(PREditor *)arg1 didUpdateSelectedTimeFontConfiguration:(PRTimeFontConfiguration *)arg2;
- (PREditorColorPickerConfiguration *)timeColorPickerConfigurationForEditor:(PREditor *)arg1;
- (_Bool)editorShouldAllowUserToAdjustTimeColor:(PREditor *)arg1;
- (_Bool)editor:(PREditor *)arg1 shouldAllowUserToSelectTimeFontConfiguration:(PRTimeFontConfiguration *)arg2;
- (NSArray *)additionalTimeFontConfigurationsForEditor:(PREditor *)arg1;
- (long long)activeAppearanceMenuSelectionForEditor:(PREditor *)arg1;
- (void)editor:(PREditor *)arg1 appearanceMenuDidChangeSelectedStyle:(long long)arg2;
- (NSArray *)trailingMenuElementsForEditor:(PREditor *)arg1;
- (NSArray *)leadingMenuElementsForEditor:(PREditor *)arg1;
- (UIMenu *)actionsMenuForEditor:(PREditor *)arg1;
- (UIAction *)secondaryActionForEditor:(PREditor *)arg1;
- (UIAction *)primaryActionForEditor:(PREditor *)arg1;
- (double)editor:(PREditor *)arg1 luminanceForLook:(PREditingLook *)arg2 inRect:(struct CGRect)arg3;
- (void)editor:(PREditor *)arg1 didFinishTransitionToLook:(PREditingLook *)arg2;
- (void)editor:(PREditor *)arg1 didTransitionToLook:(PREditingLook *)arg2 progress:(double)arg3;
- (_Bool)prefersSimpleButtonAppearanceForEditor:(PREditor *)arg1;
- (_Bool)looksShareBaseAppearanceForEditor:(PREditor *)arg1;
- (NSString *)initialLookIdentifierForEditor:(PREditor *)arg1;
@end

