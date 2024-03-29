//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class CPLRUDictionary, NSMutableDictionary, NSString, SUUIDynamicPageSectionIndexMapper, SUUIGridComponent, SUUIGridViewElementPageSectionConfiguration, SUUIMutableIntegerValue, SUUIViewElement, SUUIViewElementLayoutContext, SUUIViewElementTextLayoutCache, _SUUIDynamicGridSizeCacheKey;
@protocol SUUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SUUIDynamicGridViewElementPageSection : SUUIStorePageSection
{
    SUUIViewElementLayoutContext *_cellLayoutContext;
    SUUIGridViewElementPageSectionConfiguration *_configuration;
    SUUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    _Bool _editing;
    id <SUUIEntityProviding> _entityProvider;
    CPLRUDictionary *_globalIndexToEntityValueProviderValueCache;
    CPLRUDictionary *_globalIndexToTemplateViewElementCache;
    SUUIViewElement *_independentlySizedViewElement;
    SUUIViewElementTextLayoutCache *_labelLayoutCache;
    long long _minimumEntityCountForSections;
    _SUUIDynamicGridSizeCacheKey *_reusableSizeCacheKey;
    SUUIMutableIntegerValue *_reusableGlobalIndexIntegerValue;
    unsigned long long *_sectionHeaderGlobalIndices;
    unsigned long long _numberOfSections;
    _Bool _showsSectionHeaders;
    NSMutableDictionary *_sizeCacheKeyToCachedCellSize;
    NSMutableDictionary *_templateViewElementsCache;
    _Bool _usesSizingEntityValueProvider;
    struct {
        unsigned int respondsToSectionEntityValueProviderAtIndex:1;
    } _entityProviderFlags;
}

- (void).cxx_destruct;
- (id)_viewElementAtGlobalIndex:(long long)arg1;
- (void)_updateStyleProperties;
- (_Bool)_updateShowsSectionHeaders;
- (id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_resetLayoutProperties;
- (void)_reloadVisibleCellsAnimated:(_Bool)arg1;
- (void)_reloadViewElementProperties;
- (void)_reloadEntityProperties;
- (id)_itemTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_invalidateCellSizeCache;
- (long long)_globalIndexForEntityGlobalIndex:(long long)arg1;
- (void)_enumerateVisibleCellsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_entityValueProviderForGlobalIndex:(long long)arg1 sectionIndex:(long long *)arg2;
- (long long)_entityGlobalIndexForGlobalIndex:(long long)arg1 returningSection:(out long long *)arg2;
- (id)_dynamicGridViewElement;
- (void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout long long *)arg2 forItemAtIndexPath:(id)arg3;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)_setContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (struct UIEdgeInsets)sectionContentInset;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (id)relevantEntityProviders;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)invalidateCachedLayoutInformation;
- (id)indexPathsForPinningItems;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)deselectItemsAnimated:(_Bool)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)_templateViewElementsForType:(id)arg1 mode:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIGridComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

