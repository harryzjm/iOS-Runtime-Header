//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUIDynamicPageSectionIndexMapper, SUUIIndexBarEntryListViewElement, SUUIIndexBarEntryViewElement, SUUIViewElement;
@protocol SUUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SUUIIndexBarDynamicElementEntryListController
{
    SUUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;
    id <SUUIEntityProviding> _entityProvider;
    SUUIIndexBarEntryViewElement *_indexBarEntryViewElement;
    SUUIViewElement *_templateElement;
    SUUIIndexBarEntryListViewElement *_entryListViewElement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SUUIIndexBarEntryListViewElement *entryListViewElement; // @synthesize entryListViewElement=_entryListViewElement;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (void)setRootTargetViewElement:(id)arg1;
- (id)rootTargetIndexBarEntryID;
- (void)reloadViewElementData;
- (long long)numberOfEntryDescriptors;
- (_Bool)needsRootTargetViewElement;
- (_Bool)hidesIndexBar;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithEntryListViewElement:(id)arg1;

@end

