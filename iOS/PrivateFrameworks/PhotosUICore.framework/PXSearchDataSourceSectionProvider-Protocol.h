//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSCollectionLayoutSection, NSIndexPath, NSString, UICollectionReusableView, UICollectionViewCell;
@protocol NSCollectionLayoutEnvironment, PXSearchDataSourceSectionProviderChangeObserver;

@protocol PXSearchDataSourceSectionProvider <NSObject>
@property(readonly, nonatomic) long long identifier;
@property(readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property(nonatomic) __weak id <PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
@property(readonly, nonatomic) unsigned long long type;
- (NSCollectionLayoutSection *)layoutForSectionIdentifier:(NSString *)arg1 environment:(id <NSCollectionLayoutEnvironment>)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets)arg3;
- (void)configureCell:(UICollectionViewCell *)arg1 forItemIdentifier:(NSString *)arg2;
- (NSString *)cellReuseIdentifierForItemIdentifier:(NSString *)arg1;
- (void)registerClassesForCellReuseIdentifiers:(void (^)(Class, NSString *))arg1;
- (NSArray *)itemIdentifiersInSectionWithIdentifier:(NSString *)arg1;

@optional
- (void)prefetchItemsForItemIdentifiers:(NSArray *)arg1;
- (void)configureSupplementaryView:(UICollectionReusableView *)arg1 kind:(NSString *)arg2 indexPath:(NSIndexPath *)arg3;
- (NSString *)supplementaryViewReuseIdentifierForKind:(NSString *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(void (^)(Class, NSString *, NSString *))arg1;
@end

