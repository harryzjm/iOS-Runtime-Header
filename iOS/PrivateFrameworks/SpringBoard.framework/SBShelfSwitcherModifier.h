//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBSwitcherShelf;

@interface SBShelfSwitcherModifier
{
    long long _layoutRole;
    SBAppLayout *_activeFullScreenAppLayout;
    SBAppLayout *_activeFloatingAppLayout;
    unsigned long long _contentOptions;
    struct CGRect _presentationTargetFrame;
    SBAppLayout *_presentedFromAppLayout;
    unsigned long long _animationStyle;
    _Bool _isPendingDismissal;
    _Bool _isPendingDismissalFromGesture;
    SBSwitcherShelf *_shelf;
}

+ (unsigned long long)contentOptionsForTransitionEvent:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBSwitcherShelf *shelf; // @synthesize shelf=_shelf;
- (id)_responseForDismissingIfNeededGestureInitiated:(_Bool)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg1;
- (id)topMostLayoutElements;
- (id)ignoredDisplayItemsForShelf:(id)arg1;
- (id)focusedAppLayoutForShelf:(id)arg1;
- (struct CGRect)frameForShelf:(id)arg1;
- (id)containerLeafAppLayoutForShelf:(id)arg1;
- (struct SBSwitcherShelfPresentationAttributes)presentationAttributesForShelf:(id)arg1;
- (id)visibleShelves;
- (id)initWithShelf:(id)arg1 contentOptions:(unsigned long long)arg2 activeFullScreenAppLayout:(id)arg3 activeFloatingAppLayout:(id)arg4 presentationTargetFrame:(struct CGRect)arg5 presentedFromAppLayout:(id)arg6;

@end
