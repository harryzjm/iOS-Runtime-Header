//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <IBCocoaTouchToolFoundation/IBCTTAutolayoutItem-Protocol.h>
#import <IBCocoaTouchToolFoundation/IBUIViewAutolayoutGuideDelegate-Protocol.h>
#import <IBCocoaTouchToolFoundation/IBUIViewControllerAutolayoutGuideDelegate-Protocol.h>

@class IBPlaceholderDrawingAttributes, IBUIViewAutolayoutGuide, NSArray, NSObject, NSSet, NSString, UIViewController;
@protocol IBAutolayoutItem, IBCollection, IBOrderedCollection;

@interface UIView (IBCocoaTouchToolIntegration) <IBCTTAutolayoutItem, IBUIViewControllerAutolayoutGuideDelegate, IBUIViewAutolayoutGuideDelegate>
+ (void)_installPlaceholderInstrinsicContentSizeSupport;
- (id)systemLayoutGuideForType:(long long)arg1;
- (struct CGRect)ibFrameForViewLayoutGuide:(id)arg1;
- (id)ibLayoutGuideForViewLayoutGuide:(id)arg1;
- (_Bool)ibShouldDrawPlaceholderWithSubduedAppearance;
- (void)ibInstallPlaceholderView:(id)arg1;
@property(retain, nonatomic) IBPlaceholderDrawingAttributes *ibPlaceholderDrawingAttributes;
- (id)ibMakeWindowForRenderingWithSimulatedMetricsContext:(id)arg1;
- (id)ibEffectiveViewForRendering;
- (void)ibApplySimulatedMetricsWithContext:(id)arg1;
- (id)ibEffectiveWrappingViewControllerCreatingIfNecessary;
- (void)setIbEffectiveSimulatedMetrics:(id)arg1;
- (id)ibEffectiveSimulatedMetrics;
- (void)setIbExternalHasDesignableCustomClass:(_Bool)arg1;
@property(readonly, nonatomic) _Bool ibExternalHasDesignableCustomClass;
- (id)ibEffectiveParentItemForReferencingConstraintTraversalOfViewLayoutGuide:(id)arg1;
- (id)ibContainingItemForViewLayoutGuide:(id)arg1;
- (id)ibEffectiveParentItemForReferencingConstraintTraversalOfAutolayoutGuide:(id)arg1;
- (struct CGRect)ibFrameForAutolayoutGuide:(id)arg1;
- (id)ibContainingItemForAutolayoutGuide:(id)arg1;
@property(retain, nonatomic) IBUIViewAutolayoutGuide *ibShadowedSafeAreaLayoutGuide;
- (void)setIbShadowedEffectiveViewLayoutGuides:(id)arg1;
- (id)ibShadowedEffectiveViewLayoutGuides;
@property(retain, nonatomic) NSArray *ibShadowedViewControllerLayoutGuides;
- (id)ibSubviewCandidatesObjectPackage:(id)arg1;
- (void)ibWillCompileForObjectPackage:(id)arg1;
- (id)ibEffectiveCompilableRuntimeConstraintForConstraint:(id)arg1;
@property(readonly, nonatomic) _Bool ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
- (id)ibEffectiveRootObjectForSimulatedMetrics;
- (void)ibPlaceInWindowPositioningAndSizingIfNeeded:(_Bool)arg1 during:(CDUnknownBlockType)arg2;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)setIbDesignTimeDefaultIntrinsicContentSizeForSelfSizingContainers:(id)arg1;
- (id)ibDesignTimeDefaultIntrinsicContentSizeForSelfSizingContainers;
- (void)setIbExternalDesignTimeIntrinsicContentSize:(id)arg1;
- (id)ibExternalDesignTimeIntrinsicContentSize;
- (id)ibEffectiveDesignTimeIntrinsicContentSizeForCopyOfReceiver:(id)arg1 layoutEngine:(id)arg2;
- (id)ibDefaultDesignTimeIntrinsicContentSizeForChild:(id)arg1;
- (unsigned long long)ibAmbiguityStatusForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (id)ibEffectiveContentHeightVariable;
- (id)ibEffectiveContentWidthVariable;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (CDUnknownBlockType)ibWindowForUpdatingConstraints:(id *)arg1;
- (id)ibEffectiveViewToPlaceInLayoutEngineWindow;
- (_Bool)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (_Bool)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (_Bool)ibShouldIgnoreAmbiguityAndMisplacementIssuesBecauseLayoutIsExplicitlyManaged;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
- (void)setIbExternalEffectiveTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
@property(readonly, nonatomic) _Bool ibExternalEffectiveTranslatesAutoresizingMaskIntoConstraints;
@property(nonatomic) _Bool ibExternalExplicitTranslatesAutoresizingMaskIntoConstraints;
- (id)ibNextAncestorItemForFindingReferencingConstraintsInLayoutInfo:(id)arg1;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
- (void)setIbLayoutBoundsForDefaultCompileTimeFixedFrameConstraints:(id)arg1;
- (id)ibLayoutBoundsForDefaultCompileTimeFixedFrameConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
- (void)setIbInstalledConstraintsWithInstalledAncestors:(id)arg1;
@property(readonly, nonatomic) id <IBOrderedCollection> ibInstalledConstraintsWithInstalledAncestors;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
- (void)setFrameSize:(struct CGSize)arg1;
- (unsigned long long)ibAllowedSiblingEdgesForGuidesToSelectedItems:(id)arg1;
- (_Bool)ibAllowsSiblingGuidesToSelectedItems:(id)arg1 ofType:(long long)arg2;
- (_Bool)ibAllowsConstraintSpacingFromInsideEdgesForSiblings;
- (_Bool)ibShouldConsiderGuidesToEdgeWithAttribute:(unsigned long long)arg1 fromEdgeWithAttribute:(unsigned long long)arg2 ofSelectedItems:(id)arg3;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
- (id)constraintsAffectingLayoutForOrientation:(unsigned long long)arg1;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentCompressionResistancePriorityForOrientation:(unsigned long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentHuggingPriorityForOrientation:(unsigned long long)arg1;
- (_Bool)ib_hasAmbiguousLayout;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(id)arg2;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 fromView:(id)arg2;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 toView:(id)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 fromView:(id)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 toView:(id)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 fromView:(id)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 toView:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 toItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 fromItem:(id)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 fromItem:(id)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 toItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 fromItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 toItem:(id)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 fromItem:(id)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 fromItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 toItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 fromItem:(id)arg2;
- (void)setIbLayoutMargins:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)ibLayoutMargins;
- (_Bool)ibSupportsLayoutMargins;
- (_Bool)ibSupportsFirstBaseline;
- (double)ibAdditionalBaselineOffsetFromTop;
- (double)ibAdditionalBaselineOffsetFromBottom;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
- (_Bool)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_42e99c75)arg2;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(id)arg2;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
@property(readonly, nonatomic, getter=isFlipped) _Bool flipped;
- (id)ibContainingTableView;
- (id)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
- (void)ibInvalidateAutoresizingMaskConstraints;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(id)arg4;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
@property(nonatomic) UIViewController *ibExternalViewController;
- (id)ibOverriddenDesignableContentItem;
- (id)ibDefaultSubtreeDescription;
- (id)ibEditorMetrics;
- (id)ibForcedFrame;
- (_Bool)ibIsValidConstraintItem;
- (void)setIbForcedFrame:(id)arg1;
- (void)ibPrepareForCoreGraphicsViewRenderer;
- (void)setSubviews:(id)arg1;
- (void)setMergedSubviews:(id)arg1;
- (struct CGSize)sizeThatFitsBounds;
- (void)ibInitializeWithViewControllerWrapperOnGlobalMarshallingContext:(id)arg1;
- (void)setIbAssociatedWrapperViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *ibAssociatedWrapperViewController;
- (void)ibDidBecomeRootViewForViewController;
- (_Bool)ibIsRootViewForViewController;
@property(nonatomic) _Bool ibWantsPlaceholderContainingViewController;
- (void)ibPrepareForSceneUpdateProcessingRequestPhase:(long long)arg1;
- (void)_setIbHaveInstalledPlaceholderView:(_Bool)arg1;
- (_Bool)_ibHaveInstalledPlaceholderView;
- (void)awakeAfterMarshallerDidEstablishRelationshipsWithContext:(id)arg1 populatingWarningMessages:(id)arg2;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) NSArray *constraints;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long ibFrameDecisionStrategy;
@property(readonly, nonatomic) _Bool ibIsSelfManagedContainerInEngine;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
@property(nonatomic) _Bool translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) id window;
@end

