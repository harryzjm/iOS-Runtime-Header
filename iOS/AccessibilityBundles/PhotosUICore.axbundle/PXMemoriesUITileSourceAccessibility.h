//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXMemoriesUITileSourceAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)_axLoadInfoForTile:(id)arg1 withLayout:(id)arg2 identifier:(struct PXTileIdentifier)arg3;
- (void)_axLoadMemoryTileAccessibility;
- (void)_axSetTilingController:(id)arg1;
- (void)_setAXTilingController:(id)arg1;
- (id)_axTilingController;

@end
