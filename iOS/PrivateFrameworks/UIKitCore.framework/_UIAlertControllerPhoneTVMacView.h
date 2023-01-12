//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIAlertControllerView.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UILabel, UIView, UIVisualEffectView, _UIAlertControllerActionViewMetrics, _UIAlertControllerInterfaceActionGroupView, _UIFlexibleConstantConstraintSet, _UIKeyboardLayoutAlignmentView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerPhoneTVMacView : _UIAlertControllerView
{
    UIAlertController *_alertController;
    UIAlertControllerVisualStyle *_visualStyle;
    struct {
        unsigned int hasAppliedTitleAndMessageLabelVibrantContainerViewConstraints:1;
        unsigned int hasAppliedTitleConstraints:1;
        unsigned int hasAppliedMessageConstraints:1;
        unsigned int hasAppliedDetailConstraints:1;
        unsigned int presentedAsPopover:1;
        unsigned int hasDimmingView:1;
        unsigned int cancelActionIsDiscrete:1;
        unsigned int shouldHaveBackdropView:1;
        unsigned int alignsToKeyboard:1;
        unsigned int hasCachedLargestActionDimension:1;
        unsigned int needsActionsChangedHandling:1;
        unsigned int needsUpdateForPropertyChange:1;
    } _alertControllerViewFlags;
    UIView *_contentView;
    UIView *_contentViewTopItemsView;
    _UIAlertControllerInterfaceActionGroupView *_mainInterfaceActionsGroupView;
    _UIAlertControllerInterfaceActionGroupView *_discreteCancelActionGroupView;
    UIVisualEffectView *_titleAndMessageLabelVibrantContainerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_detailMessageLabel;
    UIView *_separatedHeaderContentViewControllerContainerView;
    UIView *_headerContentViewControllerContainerView;
    UIView *_contentViewControllerContainerView;
    UIView *_textFieldViewControllerContainerView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    UIView *_dimmingView;
    NSMutableArray *_actionViews;
    struct CGPoint _actionSelectionInitialLocation;
    long long _layoutRequiresPositionUpdateCount;
    NSArray *_dimmingViewConstraints;
    NSArray *_dimmingViewForegroundViewTopConstraints;
    NSArray *_dimmingViewForegroundViewBottomConstraints;
    NSArray *_dimmingViewConstraintsForAlertStyle;
    NSArray *_dimmingViewConstraintsForActionSheetStyle;
    NSArray *_noDimmingViewConstraints;
    NSLayoutConstraint *_headerContentViewControllerPreferredWidthConstraint;
    NSLayoutConstraint *_headerContentViewControllerPreferredHeightConstraint;
    struct CGSize _largestActionDimension;
    UIAlertAction *_effectivePreferredAction;
    long long _batchActionChangesInProgressCount;
    _Bool _actionsReversed;
    _Bool _springLoaded;
    _Bool _actionScrubbingEnabled;
    _Bool _presentationContextPrefersCancelActionShown;
    _UIAlertControllerActionViewMetrics *_actionViewMetrics;
    double _offset;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewMaxHeightConstraint;
    NSLayoutConstraint *_headerContentViewControllerContainerViewTopAlignmentConstraint;
    NSArray *_titleAndMessageLabelVibrantContainerViewVerticalConstraints;
    _UIFlexibleConstantConstraintSet *_titleLabelTopAlignmentConstraints;
    _UIFlexibleConstantConstraintSet *_messageLabelTopAlignmentConstraints;
    NSLayoutConstraint *_detailMessageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewLeftConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewRightConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewTopConstraint;
    NSLayoutConstraint *_textFieldViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewBottomConstraint;
    NSLayoutConstraint *_contentScrollViewMaximumWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_separatedHeaderContentViewControllerContainerViewBottomConstraint;
    NSLayoutConstraint *_separatedHeaderContentViewControllerContainerViewWidthConstraint;
    _UIFlexibleConstantConstraintSet *_textFieldViewControllerContainerViewTopAlignmentConstraints;
    NSLayoutConstraint *_textFieldViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_textFieldViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewWidthConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHeightConstraint;
    NSLayoutConstraint *_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
    NSLayoutConstraint *_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
    NSLayoutConstraint *_actionGroupEqualsContentViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    struct CGSize _layoutSize;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // @synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // @synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // @synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint;
@property(retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // @synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint;
@property(retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint; // @synthesize actionGroupEqualsContentViewWidthConstraint=_actionGroupEqualsContentViewWidthConstraint;
@property(retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint; // @synthesize discreteActionGroupViewHorizontalLayoutTrailingConstraint=_discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint; // @synthesize mainActionButtonSequenceViewHorizontalAlignmentConstraint=_mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint; // @synthesize mainActionButtonSequenceViewHeightConstraint=_mainActionButtonSequenceViewHeightConstraint;
@property(retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint; // @synthesize mainActionButtonSequenceViewWidthConstraint=_mainActionButtonSequenceViewWidthConstraint;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) NSLayoutConstraint *centerYConstraint; // @synthesize centerYConstraint=_centerYConstraint;
@property(retain) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint; // @synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint; // @synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint;
@property(retain) _UIFlexibleConstantConstraintSet *textFieldViewControllerContainerViewTopAlignmentConstraints; // @synthesize textFieldViewControllerContainerViewTopAlignmentConstraints=_textFieldViewControllerContainerViewTopAlignmentConstraints;
@property(retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewWidthConstraint; // @synthesize separatedHeaderContentViewControllerContainerViewWidthConstraint=_separatedHeaderContentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewBottomConstraint; // @synthesize separatedHeaderContentViewControllerContainerViewBottomConstraint=_separatedHeaderContentViewControllerContainerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // @synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // @synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // @synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint; // @synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint;
@property(retain) NSLayoutConstraint *contentScrollViewBottomConstraint; // @synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint; // @synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint; // @synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint; // @synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint; // @synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // @synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewTopConstraint; // @synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewRightConstraint; // @synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint;
@property(retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // @synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint;
@property(retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint; // @synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint;
@property(retain) _UIFlexibleConstantConstraintSet *messageLabelTopAlignmentConstraints; // @synthesize messageLabelTopAlignmentConstraints=_messageLabelTopAlignmentConstraints;
@property(retain) _UIFlexibleConstantConstraintSet *titleLabelTopAlignmentConstraints; // @synthesize titleLabelTopAlignmentConstraints=_titleLabelTopAlignmentConstraints;
@property(retain) NSArray *titleAndMessageLabelVibrantContainerViewVerticalConstraints; // @synthesize titleAndMessageLabelVibrantContainerViewVerticalConstraints=_titleAndMessageLabelVibrantContainerViewVerticalConstraints;
@property(retain) NSLayoutConstraint *headerContentViewControllerContainerViewTopAlignmentConstraint; // @synthesize headerContentViewControllerContainerViewTopAlignmentConstraint=_headerContentViewControllerContainerViewTopAlignmentConstraint;
@property(retain) NSLayoutConstraint *contentViewMaxHeightConstraint; // @synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint;
@property(retain) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(retain) NSLayoutConstraint *foregroundViewWidthConstraint; // @synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint;
@property(nonatomic) _Bool presentationContextPrefersCancelActionShown; // @synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool actionScrubbingEnabled; // @synthesize actionScrubbingEnabled=_actionScrubbingEnabled;
@property(retain, nonatomic) _UIAlertControllerActionViewMetrics *actionViewMetrics; // @synthesize actionViewMetrics=_actionViewMetrics;
@property(nonatomic, getter=_layoutSize, setter=_setLayoutSize:) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded; // @synthesize springLoaded=_springLoaded;
- (_Bool)_actionsReversed;
- (_Bool)_forceLayoutEngineSolutionInRationalEdges;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusedView;
- (long long)tintAdjustmentMode;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (void)_disableAllowGroupOpacitiyIfNecessaryAlongsideTransitionCoordinator:(id)arg1;
- (double)effectAlpha;
- (void)setEffectAlpha:(double)arg1;
- (void)_prepareForWindowHostingSceneRemoval;
- (void)_prepareForWindowDealloc;
- (void)didMoveToWindow;
- (void)_willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_ensureActionViewRepresentationsHaveMetrics;
- (void)_recomputeActionMetrics;
- (void)_sizeOfTextFieldViewControllerChanged;
- (void)_applyISEngineLayoutValuesToBoundsOnly:(_Bool)arg1;
- (void)_layoutAndPositionInParentIfNeeded;
- (void)_sizeOfContentViewControllerChanged;
- (void)_sizeOfHeaderContentViewControllerChanged;
- (void)_removeSeparatedHeaderContentViewControllerFromHierarchy;
- (void)_removeContentViewControllerViewFromHierarchy;
- (void)_removeHeaderContentViewControllerViewFromHierarchy;
- (void)_addSeparatedHeaderContentViewControllerToViewHierarchyIfNecessary;
- (void)_addContentViewControllerToViewHierarchyIfNecessary;
- (void)_addHeaderContentViewControllerToViewHierarchyIfNecessary;
- (_Bool)alignsToKeyboard;
- (void)setAlignsToKeyboard:(_Bool)arg1;
- (_Bool)shouldHaveBackdropView;
- (void)setShouldHaveBackdropView:(_Bool)arg1;
@property _Bool cancelActionIsDiscrete;
- (void)_updateCancelActionBeingDiscrete;
- (id)__cancelActionView;
- (_Bool)showsCancelAction;
- (_Bool)hasDimmingView;
- (void)setHasDimmingView:(_Bool)arg1;
- (_Bool)presentedAsPopover;
- (void)setPresentedAsPopover:(_Bool)arg1;
- (id)textFields;
- (double)_spaceRequiredForActionSectionsSpacing;
- (id)_indexesOfActionSectionSeparators;
- (id)_preferredActionView;
- (id)_focusedAction;
- (id)cancelAction;
- (id)actions;
- (id)separatedHeaderContentViewController;
- (id)contentViewController;
- (id)headerContentViewController;
- (id)_textFieldViewController;
- (_Bool)_hasTextFields;
- (_Bool)_hasDetailMessage;
- (_Bool)_hasAttributedMessage;
- (_Bool)_hasMessage;
- (_Bool)_hasAttributedTitle;
- (_Bool)_hasTitle;
- (_Bool)_titleAndMessageLabelUseVibrancy;
- (id)_vibrancyEffectForTitleAndMessageLabel;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (id)message;
- (id)title;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_accessibilityColorsChanged;
- (void)_contentSizeChanged;
- (void)deselectAllActions;
- (void)_setActionsReversed:(_Bool)arg1;
- (void)_updateTintColor;
- (void)_updateConstraintConstants;
- (void)_updateActionViewHeight;
- (void)_updateActionViewVisualStyle:(id)arg1;
- (void)_updateContentView;
- (void)_updateInsets;
- (void)safeAreaInsetsDidChange;
- (void)_updateLabelProperties;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (void)_updateMessageLabelFontSize;
- (void)_updateDetailLabelFontSize;
- (void)_updateTitleLabelFontSize;
- (void)_updateMessageLabelContents;
- (void)_updateDetailLabelContents;
- (void)_updateTitleLabelContents;
- (void)_updateStyleForIdiomChange:(_Bool)arg1;
- (id)_visualStyle;
- (void)_setVisualStyle:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (struct CGSize)_minimumSizeForAllActions;
- (double)_labelHorizontalInsets;
- (struct CGSize)_contentViewControllerSize;
- (double)_marginBetweenInterfaceActionGroups;
- (_Bool)hasDiscreteHorizontalCancelAction;
- (_Bool)_actionLayoutIsVertical;
- (void)_updatePreferredAction;
- (id)_effectivePreferredAction;
- (long long)_numberOfActionsForMainActionButtonSequenceView;
- (id)_presentableAlertActions;
- (id)_unlocalizedOrderedPresentableAlertActions;
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
- (_Bool)_shouldHaveCancelActionInMainActionButtonSequenceView;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_scrollInitialActionToVisibleForPresentation;
- (void)_reloadInterfaceActionsGroupViewPreferredAction;
- (void)_reloadInterfaceActionViewRepresentations;
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;
- (id)_interfaceActionRepresentationForAlertAlertAction:(id)arg1;
- (void)_textFieldsChanged;
- (void)_associateActionsWithActionViews;
- (void)_actionsChanged;
- (void)_performBatchActionChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateForPropertyChangeIfNeeded;
- (void)_propertiesChanged;
- (void)_updateMainScrollableHeaderViewHasRealContent;
- (void)_actionLayoutDirectionChanged;
- (void)_configureActionGroupViewToAllowHorizontalLayout:(_Bool)arg1;
- (void)_recomputeAlertControllerWidth;
- (void)_updateConstraintSpacingForExternalOffset;
- (_Bool)_hasDiscreteCancelAction;
- (id)_discreteCancelActionView;
- (_Bool)_canLayOutActionsHorizontally;
- (struct CGSize)_mainActionButtonSequenceViewSizeForHorizontalLayout:(_Bool)arg1 itemSize:(struct CGSize)arg2;
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1;
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(_Bool *)arg2;
- (double)_idealLayoutWidth;
- (double)_layoutWidthForHorizontalLayout:(_Bool)arg1;
- (struct UIEdgeInsets)_contentInsets;
- (double)_availableWidthForHorizontalLayout:(_Bool)arg1;
- (_Bool)_horizontalLayoutCanUseFullWidth;
- (double)_verticalLayoutWidth;
- (struct CGSize)_sizeForLayoutWidthDetermination;
- (_Bool)_buttonsAreTopMost;
- (void)_applyTextFieldViewControllerContainerViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyTitleAndMessageLabelVibrantContainerViewConstraints;
- (void)_setupHorizontalConstraintsForLabelView:(id)arg1;
- (void)_applyHeaderContentViewControllerContainerViewConstraints;
- (void)_applySeparatedContentViewControllerContainerViewContraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_prepareDimmingViewConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_updateActionsGroupPresentationStyles;
- (id)_newStyledBackgroundView;
- (void)_prepareDiscreteCancelActionGroupView;
- (void)_prepareMainInterfaceActionsGroupView;
- (void)_prepareTextFieldViewControllerContainerView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareTitleAndMessageLabelVibrantContainer;
- (void)_prepareSeparateContentViewControllerContainerView;
- (void)_prepareHeaderContentViewControllerContainerView;
- (void)_prepareContentViewTopItemsView;
- (void)_prepareContentView;
- (void)updateConstraints;
- (void)_prepareViewsAndAddConstraints;
- (id)alertController;
- (void)setAlertController:(id)arg1;
- (void)updateObservations:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

