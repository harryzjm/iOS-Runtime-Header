//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (IBCocoaTouchToolIntegration)
- (id)ibEffectiveContentHeightVariable;
- (id)ibEffectiveContentWidthVariable;
- (_Bool)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (_Bool)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (_Bool)_ibShouldIgnoreScrollableContentAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (void)ibDidBootstrapLayoutWithCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)setIbComputedContentSize:(id)arg1;
- (id)ibContentSize;
- (id)systemLayoutGuideForType:(long long)arg1;
- (void)setIbShadowedFrameLayoutGuide:(id)arg1;
- (id)ibShadowedFrameLayoutGuide;
- (void)setIbShadowedContentLayoutGuide:(id)arg1;
- (id)ibShadowedContentLayoutGuide;
- (CDStruct_c519178c)ibContentInset;
- (struct UIEdgeInsets)ibEffectiveContentInset;
- (void)ibInstallPlaceholderView:(id)arg1;
- (id)ibPlaceholderView;
- (void)setIbPlaceholderView:(id)arg1;
- (id)ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
- (id)ibExplicitCandidateConstraintGenerationMaskForChildView:(id)arg1;
- (void)ibPropagateFramesAffectingAutoresizingMasksToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)setIbLayoutFrame:(struct CGRect)arg1;
- (void)ibPreserveContentOffsetDuring:(CDUnknownBlockType)arg1;
- (void)ibSwizzled_setContentOffset:(struct CGPoint)arg1;
- (void)ibApplyContentOffsetAdjustment;
- (void)ibDidIncrementallyUpdateValueForKeyPath:(id)arg1;
- (void)ibPrepareForSceneUpdate;
@property struct CGPoint ibContentOffsetAdjustment;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 globalMarshallingContext:(id)arg4;
@end
