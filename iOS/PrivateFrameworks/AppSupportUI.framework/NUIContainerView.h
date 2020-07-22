//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol NUIContainerViewDelegate;

@interface NUIContainerView : UIView
{
    id <NUIContainerViewDelegate> _delegate;
    NSMutableArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    double _preferredMaxLayoutWidth;
    struct nui_size_cache _cachedIntrinsicSizes;
    struct {
        unsigned int hiddenArrangedSubviewCount:16;
        unsigned int inBatch:1;
        unsigned int delayState:2;
        unsigned int inLayoutPass:2;
        unsigned int determiningPreferredMaxLayoutWidth:1;
        unsigned int inSecondConstraintsPass:1;
        unsigned int delegateDidInvalidateIntrinsicContentSize:1;
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview:1;
        unsigned int delegateLayoutFrameForArrangedSubview:1;
        unsigned int delegateWillMeasureFitting:1;
        unsigned int delegateDidLayout:1;
    } _containerFlags;
    _Bool _baselineRelativeArrangement;
    _Bool _layoutMarginsRelativeArrangement;
    long long _asynchronousMeasurement;
}

+ (Class)layerClass;
+ (void)initialize;
+ (_Bool)isDebugBoundingBoxesEnabled;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) long long asynchronousMeasurement; // @synthesize asynchronousMeasurement=_asynchronousMeasurement;
@property(nonatomic, getter=isLayoutMarginsRelativeArrangement) _Bool layoutMarginsRelativeArrangement; // @synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutMarginsDidChange;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (_Bool)supportsAsynchronousMeasurement;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (unsigned long long)indexOfArrangedSubview:(id)arg1;
- (void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_addAsSubviewIfNeeded:(id)arg1;
- (void)removeArrangedSubview:(id)arg1;
- (void)_endObservingSubviewVisibility:(id)arg1;
- (void)_beginObservingSubviewVisibility:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (struct UIEdgeInsets)effectiveLayoutMargins;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (_Bool)isInBatchUpdate;
@property(readonly, nonatomic) NSArray *visibleArrangedSubviews;
@property(copy, nonatomic) NSArray *arrangedSubviews;
@property(nonatomic) __weak id <NUIContainerViewDelegate> delegate;
- (_Bool)_verifyInternalConsistencyWarningOnly:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)updateConstraints;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (id)arrangedDescription;
- (_Bool)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)assertNotInLayoutPass:(_Bool)arg1;
- (_Bool)isInLayoutPass;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1;
- (void)visibilityDidChangeForArrangedSubview:(id)arg1;
- (_Bool)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(_Bool)arg1;
- (void)setNeedsLayout;

@end
