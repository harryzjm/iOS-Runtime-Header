//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface SSSectionedDataSource
{
    _Bool _shouldRemoveEmptySections;
    NSMutableArray *_sections;
}

@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool shouldRemoveEmptySections; // @synthesize shouldRemoveEmptySections=_shouldRemoveEmptySections;
- (void).cxx_destruct;
- (id)titleForFooterInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (id)viewForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (id)headerFooterViewWithClass:(Class)arg1;
- (void)removeItemsAtIndexes:(id)arg1 inSection:(long long)arg2;
- (void)removeItemsInRange:(struct _NSRange)arg1 inSection:(long long)arg2;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)removeSectionWithIdentifier:(id)arg1;
- (void)removeSectionsAtIndexes:(id)arg1;
- (void)removeSectionsInRange:(struct _NSRange)arg1;
- (void)removeSectionAtIndex:(long long)arg1;
- (void)removeAllSections;
- (void)clearSections;
- (_Bool)adjustSectionAtIndex:(unsigned long long)arg1 toNumberOfItems:(unsigned long long)arg2;
- (void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2;
- (void)appendItems:(id)arg1 toSection:(long long)arg2;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2 inSection:(long long)arg3;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (void)insertSections:(id)arg1 atIndexes:(id)arg2;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)appendSection:(id)arg1;
- (void)moveSectionAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (unsigned long long)indexOfSectionWithIdentifier:(id)arg1;
- (id)sectionWithIdentifier:(id)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithSections:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;

@end
