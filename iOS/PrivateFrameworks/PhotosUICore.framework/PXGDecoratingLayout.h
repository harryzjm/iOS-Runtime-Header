//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableIndexSet, PXGLayout;
@protocol PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGDebugDecorationSource, PXGDragDecorationSource, PXGHighlightDecorationSource, PXGLayoutContentSource, PXGSelectionDecorationSource, PXGShadowSource;

@interface PXGDecoratingLayout
{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdatingDecoratedLayout;
    NSMutableIndexSet *_invalidatedDecoratedSpriteIndexes;
    _Bool _wantsCaptionDecorations;
    long long _selectionDecorationStyle;
    unsigned long long _selectionDecorationOptions;
    id <PXGShadowSource> _shadowSource;
    _Bool _isChangingDecoratedLayout;
    _Bool _enabled;
    unsigned int _numberOfDecoratingSpritesPerDecoratedSprite;
    PXGLayout *_decoratedLayout;
    id <PXGLayoutContentSource> _decorationSource;
    id <PXGAssetBadgeDecorationSource> _assetBadgeDecorationSource;
    id <PXGAssetBadgeDecorationSource> _assetProgressDecorationSource;
    id <PXGCaptionDecorationSource> _captionDecorationSource;
    id <PXGSelectionDecorationSource> _selectionDecorationSource;
    id <PXGHighlightDecorationSource> _highlightDecorationSource;
    id <PXGDragDecorationSource> _dragDecorationSource;
    id <PXGDebugDecorationSource> _debugDecorationSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PXGDebugDecorationSource> debugDecorationSource; // @synthesize debugDecorationSource=_debugDecorationSource;
@property(readonly, nonatomic) __weak id <PXGDragDecorationSource> dragDecorationSource; // @synthesize dragDecorationSource=_dragDecorationSource;
@property(readonly, nonatomic) __weak id <PXGHighlightDecorationSource> highlightDecorationSource; // @synthesize highlightDecorationSource=_highlightDecorationSource;
@property(readonly, nonatomic) __weak id <PXGSelectionDecorationSource> selectionDecorationSource; // @synthesize selectionDecorationSource=_selectionDecorationSource;
@property(readonly, nonatomic) __weak id <PXGCaptionDecorationSource> captionDecorationSource; // @synthesize captionDecorationSource=_captionDecorationSource;
@property(readonly, nonatomic) __weak id <PXGAssetBadgeDecorationSource> assetProgressDecorationSource; // @synthesize assetProgressDecorationSource=_assetProgressDecorationSource;
@property(readonly, nonatomic) __weak id <PXGAssetBadgeDecorationSource> assetBadgeDecorationSource; // @synthesize assetBadgeDecorationSource=_assetBadgeDecorationSource;
@property(readonly, nonatomic) unsigned int numberOfDecoratingSpritesPerDecoratedSprite; // @synthesize numberOfDecoratingSpritesPerDecoratedSprite=_numberOfDecoratingSpritesPerDecoratedSprite;
@property(nonatomic) __weak id <PXGLayoutContentSource> decorationSource; // @synthesize decorationSource=_decorationSource;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) PXGLayout *decoratedLayout; // @synthesize decoratedLayout=_decoratedLayout;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;
- (id)axSpriteIndexes;
- (_Bool)canHandleVisibleRectRejection;
- (id)itemsLayout;
- (_Bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int *)arg2;
- (unsigned int)spriteIndexForDecorationIndex:(unsigned int)arg1 decoratingSpriteIndex:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int debugDecorationIndex;
- (struct PXGDecorationSpriteInfo)decorationSpriteInfoForDecoratedSpriteIndex:(unsigned int)arg1 decorationIndex:(unsigned int)arg2 assetBadgeInfo:(struct PXAssetBadgeInfo)arg3 isItemSelected:(_Bool)arg4 isItemHighlighted:(_Bool)arg5 isItemDragged:(_Bool)arg6;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (void)setLastBaseline:(double)arg1;
- (double)lastBaseline;
- (id)layoutForItemChanges;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2 fromDescendentSublayout:(id)arg3;
- (void)_applyDecoratedLayoutChangeDetails:(id)arg1;
- (_Bool)spritesAreInSyncWithDecoratedLayout;
- (struct CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect)arg2;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)userInterfaceDirectionDidChange;
- (void)safeAreaInsetsDidChange;
- (void)screenScaleDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)alphaDidChange;
- (void)_updateDecorationSprites;
- (void)_updateReloadSprites;
- (void)_updateDecorationSources;
- (void)_updateDecoratedLayout;
- (void)update;
- (void)setContentSource:(id)arg1;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (id)description;
- (id)initWithDecoratedLayout:(id)arg1;
- (id)init;

@end
