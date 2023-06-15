//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOrderedSet, NSString, SFFluidCollectionView;

__attribute__((visibility("hidden")))
@interface SFFluidTabOverviewDataSource : NSObject
{
    NSArray *_sections;
    NSOrderedSet *_pinnedItems;
    NSOrderedSet *_unpinnedItems;
    NSArray *_items;
    SFFluidCollectionView *_fluidCollectionView;
    CDUnknownBlockType _itemViewConfigurationBlock;
    CDUnknownBlockType _supplementaryViewProvider;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewProvider; // @synthesize supplementaryViewProvider=_supplementaryViewProvider;
@property(copy, nonatomic) CDUnknownBlockType itemViewConfigurationBlock; // @synthesize itemViewConfigurationBlock=_itemViewConfigurationBlock;
@property(retain, nonatomic) SFFluidCollectionView *fluidCollectionView; // @synthesize fluidCollectionView=_fluidCollectionView;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)fluidCollectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)fluidCollectionView:(id)arg1 viewForItemAtIndexPath:(id)arg2;
- (unsigned long long)fluidCollectionView:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsForFluidCollectionView:(id)arg1;
- (void)setItemsWithPinnedItems:(id)arg1 unpinnedItems:(id)arg2;
- (id)indexPathForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)sectionForIdentifier:(long long)arg1;
- (long long)identifierForSectionAtIndex:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

