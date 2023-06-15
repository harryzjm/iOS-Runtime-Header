//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUUIIndexBarEntryDescriptor, SUUIIndexBarEntryViewElement, SUUIViewElement;

__attribute__((visibility("hidden")))
@interface SUUIIndexBarSingleEntryListController
{
    SUUIIndexBarEntryDescriptor *_entryDescriptor;
    SUUIViewElement *_descriptiveViewElement;
    SUUIIndexBarEntryViewElement *_entryViewElement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SUUIIndexBarEntryViewElement *entryViewElement; // @synthesize entryViewElement=_entryViewElement;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (void)reloadViewElementData;
- (long long)numberOfEntryDescriptors;
- (_Bool)needsRootTargetViewElement;
- (_Bool)hidesIndexBar;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (id)initWithEntryViewElement:(id)arg1;

@end

