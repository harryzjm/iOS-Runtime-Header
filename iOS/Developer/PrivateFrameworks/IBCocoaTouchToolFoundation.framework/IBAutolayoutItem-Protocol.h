//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBCocoaTouchToolFoundation/NSObject-Protocol.h>

@class IBAutolayoutEngine, NSArray, NSDictionary, NSLayoutConstraint, NSObject, NSSet, UIView;
@protocol IBAutolayoutInfoProvider, IBAutolayoutItem, IBCollection, IBOrderedCollection;

@protocol IBAutolayoutItem <NSObject>
@property(readonly, nonatomic) _Bool ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
@property(readonly, nonatomic) _Bool ibIsSelfManagedContainerInEngine;
@property(readonly, nonatomic) long long ibFrameDecisionStrategy;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
@property(readonly, nonatomic) _Bool ibExternalEffectiveTranslatesAutoresizingMaskIntoConstraints;
@property(nonatomic) _Bool ibExternalExplicitTranslatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
@property(readonly, nonatomic) id <IBOrderedCollection> ibInstalledConstraintsWithInstalledAncestors;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
@property(readonly, nonatomic) NSArray *constraints;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic, getter=isFlipped) _Bool flipped;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
@property(nonatomic) _Bool translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
@property(readonly, nonatomic) id window;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(NSDictionary *)arg4;
- (unsigned long long)ibAmbiguityStatusForRepresentationOfItem:(NSObject<IBAutolayoutItem> *)arg1 inEngine:(IBAutolayoutEngine *)arg2;
- (_Bool)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(NSObject<IBAutolayoutItem> *)arg1 inEngine:(IBAutolayoutEngine *)arg2;
- (_Bool)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(NSObject<IBAutolayoutItem> *)arg1 inEngine:(IBAutolayoutEngine *)arg2;
- (_Bool)ibShouldIgnoreAmbiguityAndMisplacementIssuesBecauseLayoutIsExplicitlyManaged;
- (NSObject<IBAutolayoutItem> *)ibNextAncestorItemForFindingReferencingConstraintsInLayoutInfo:(id <IBAutolayoutInfoProvider>)arg1;
- (_Bool)ibAllowsConstraintSpacingFromInsideEdgesForSiblings;
- (unsigned long long)ibAllowedSiblingEdgesForGuidesToSelectedItems:(id <IBCollection>)arg1;
- (_Bool)ibAllowsSiblingGuidesToSelectedItems:(id <IBCollection>)arg1 ofType:(long long)arg2;
- (_Bool)ibShouldConsiderGuidesToEdgeWithAttribute:(unsigned long long)arg1 fromEdgeWithAttribute:(unsigned long long)arg2 ofSelectedItems:(id <IBCollection>)arg3;
- (NSObject<IBAutolayoutItem> *)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(NSObject<IBAutolayoutItem> *)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (void)ibInvalidateAutoresizingMaskConstraints;
- (void)setNeedsUpdateConstraints;
- (void)exerciseAmbiguityInLayout;
- (NSArray *)constraintsAffectingLayoutForOrientation:(unsigned long long)arg1;
- (_Bool)ib_hasAmbiguousLayout;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentCompressionResistancePriorityForOrientation:(unsigned long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentHuggingPriorityForOrientation:(unsigned long long)arg1;
- (void)removeConstraints:(NSArray *)arg1;
- (void)removeConstraint:(NSLayoutConstraint *)arg1;
- (void)addConstraints:(NSArray *)arg1;
- (void)addConstraint:(NSLayoutConstraint *)arg1;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 fromView:(UIView *)arg2;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 toView:(UIView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 fromView:(UIView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 toView:(UIView *)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 fromView:(UIView *)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 toView:(UIView *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(UIView *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(UIView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(UIView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(UIView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(UIView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(UIView *)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (NSObject<IBAutolayoutItem> *)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
- (_Bool)ibSupportsLayoutMargins;
- (struct UIEdgeInsets)ibLayoutMargins;
- (_Bool)ibSupportsFirstBaseline;
- (_Bool)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_42e99c75)arg2;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(NSObject<IBAutolayoutItem> *)arg2;
- (void)addSubview:(NSObject<IBAutolayoutItem> *)arg1;
- (void)removeFromSuperview;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
@end

