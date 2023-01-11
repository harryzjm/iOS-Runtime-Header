//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SBGridLayoutSwitcherModifier, _SBInlineGridFloorSwitcherModifier;

@interface SBInlineGridSwitcherModifier
{
    NSString *_bundleIdentifier;
    unsigned long long _scrollAxis;
    struct CGSize _fixedCardSize;
    double _cardScale;
    _Bool _floating;
    _Bool _overlay;
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBInlineGridFloorSwitcherModifier *_floorModifier;
    unsigned long long _initialScrollAxis;
    struct CGSize _initialCardSize;
    double _initialCardScale;
    _Bool _hasScrolledToInitialAppLayoutForTransitionIntoSwitcher;
    unsigned long long _ongoingAppLayoutRemovals;
}

- (void).cxx_destruct;
- (double)cardScale;
- (struct CGSize)fixedCardSize;
- (unsigned long long)scrollAxis;
- (unsigned long long)numberOfRows;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)visibleAppLayouts;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)gridLayoutModifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 scrollAxis:(unsigned long long)arg2 fixedCardSize:(struct CGSize)arg3 cardScale:(double)arg4 floating:(_Bool)arg5 overlay:(_Bool)arg6;

@end
