//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarCellularNetworkTypeView, _UIStatusBarDualCellularSignalView, _UIStatusBarEmergencySignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem
{
    _Bool _reducesFontSize;
    _UIStatusBarDualCellularSignalView *_dualSignalView;
    _UIStatusBarMultilineStringView *_dualNameView;
    _UIStatusBarStringView *_dualSingleLineNameView;
    _UIStatusBarStringView *_dualSingleLineNameAndTypeView;
    _UIStatusBarEmergencySignalView *_sosSignalView;
    _UIStatusBarCellularNetworkTypeView *_animatedNetworkTypeView;
}

+ (id)animatedTypeDisplayIdentifier;
+ (id)sosSignalStrengthDisplayIdentifier;
+ (id)dualSingleLineNameAndTypeDisplayIdentifier;
+ (id)dualSingleLineNameDisplayIdentifier;
+ (id)dualNameDisplayIdentifier;
+ (id)dualSignalStrengthDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView; // @synthesize animatedNetworkTypeView=_animatedNetworkTypeView;
@property(retain, nonatomic) _UIStatusBarEmergencySignalView *sosSignalView; // @synthesize sosSignalView=_sosSignalView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameAndTypeView; // @synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView;
@property(retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameView; // @synthesize dualSingleLineNameView=_dualSingleLineNameView;
@property(retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // @synthesize dualNameView=_dualNameView;
@property(retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // @synthesize dualSignalView=_dualSignalView;
@property(nonatomic) _Bool reducesFontSize; // @synthesize reducesFontSize=_reducesFontSize;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_animatedNetworkTypeView;
- (void)_create_sosSignalView;
- (void)_create_dualSingleLineNameAndTypeView;
- (void)_create_dualSingleLineNameView;
- (void)_create_dualNameView;
- (void)_create_dualSignalView;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (_Bool)_animateServiceType:(long long)arg1 prefixLength:(long long *)arg2 currentType:(long long)arg3;
- (_Bool)_showCallFowardingForEntry:(id)arg1;
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;
- (struct _NSRange)_nonCondensedFontRangeForEntry:(id)arg1;
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;
- (id)_stringForCellularType:(long long)arg1;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;

@end

