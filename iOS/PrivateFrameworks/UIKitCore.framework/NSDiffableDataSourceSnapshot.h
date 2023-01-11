//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, __UIDiffableDataSourceSnapshot;

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying>
{
    __UIDiffableDataSourceSnapshot *_impl;
}

@property(readonly, nonatomic) __UIDiffableDataSourceSnapshot *impl; // @synthesize impl=_impl;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItemsInSection:(id)arg1;
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
- (id)description;
- (id)init;
- (id)initWithDataSource:(id)arg1;

@end
