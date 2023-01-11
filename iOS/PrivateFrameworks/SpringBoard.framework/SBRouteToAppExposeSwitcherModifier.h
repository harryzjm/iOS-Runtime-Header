//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier
{
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    _Bool _isTransitioningOutOfAppExpose;
}

- (void).cxx_destruct;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(_Bool)arg2;
- (id)scrollViewAttributes;
- (double)contentPageViewScaleForAppLayout:(id)arg1;
- (double)snapshotScaleForAppLayout:(id)arg1;
- (long long)plusButtonStyle;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
@property(nonatomic) _Bool reversesFloatingCardDirection;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appExposeModifier:(id)arg2;

@end
