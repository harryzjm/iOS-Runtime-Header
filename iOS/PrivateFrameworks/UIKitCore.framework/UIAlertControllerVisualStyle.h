//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAlertControllerDescriptor, UIInterfaceActionVisualStyle, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyle : NSObject
{
    UIAlertControllerDescriptor *_descriptor;
    long long _forcedInterfaceIdiom;
    UIInterfaceActionVisualStyle *_interfaceActionVisualStyle;
    UITraitCollection *_traitCollection;
}

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
+ (long long)interfaceActionPresentationStyle;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *interfaceActionVisualStyle; // @synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle;
@property(nonatomic) long long forcedInterfaceIdiom; // @synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom;
@property(retain, nonatomic) UIAlertControllerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (id)_keyCommandInputForCancelAction;
- (_Bool)_shouldReverseActions;
- (double)_scaledMarginAboveDetailMessageFirstBaseline;
- (double)_scaledMarginBelowLastLabelLastBaseline;
- (double)_scaledMarginBelowMessageLabelLastBaseline;
- (double)_scaledMarginAboveMessageLabelFirstBaseline;
- (double)_scaledMarginBelowTitleLabelLastBaseline;
- (double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1;
- (double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1;
- (double)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2;
- (double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (struct UIEdgeInsets)actionImageMarginForAction;
- (double)contentVerticalMargin;
- (double)contentHorizontalMargin;
- (struct CGSize)minimumActionContentSize;
- (id)preferredActionFont;
- (id)regularActionFont;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (_Bool)placementAvoidsKeyboard;
- (_Bool)shouldPreserveRespondersAcrossWindows;
- (_Bool)shouldOccludeDuringPresentation;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (_Bool)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (id)dimmingViewForAlertController:(id)arg1;
- (double)textFieldHorizontalMargin;
- (struct UIEdgeInsets)textFieldContentInset;
- (struct CGSize)collectionViewOutsetSize;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (long long)permittedActionLayoutDirection;
- (id)defaultActionFont;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (double)maximumHeightForDisplayOnScreen:(id)arg1;
- (double)maximumWidthForTitleAndMessageContentView;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (double)maximumWidth;
- (double)minimumWidth;
- (id)tintColorForAlertController:(id)arg1;
- (double)marginBelowLastLabelLastBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)_spacingBetweenDismissButtonAndContent;
- (double)_marginAboveDetailMessageFirstBaseline;
- (id)_detailMessageFont;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (void)_reloadInterfaceActionVisualStyle;
- (Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
