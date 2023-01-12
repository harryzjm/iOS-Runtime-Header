//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, UICollectionViewDiffableDataSource, VUIFamilyMemberCell, VUILegacyCollectionView, VUILibraryFamilyMembersDataSource, VUIViewControllerContentPresenter;
@protocol VUIFamilyMembersViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIFamilyMembersViewController : UIViewController
{
    double _lastAppearWidth;
    id <VUIFamilyMembersViewControllerDelegate> _delegate;
    VUILibraryFamilyMembersDataSource *_dataSource;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    VUIViewControllerContentPresenter *_contentPresenter;
    VUILegacyCollectionView *_collectionView;
    VUIFamilyMemberCell *_sizingCell;
    NSDictionary *_familyMemberHashToFamilyMemberDictionary;
    long long _gridType;
    long long _gridStyle;
    double _tvCellWidth;
    struct CGSize _lastCollectionViewSize;
}

- (void).cxx_destruct;
@property(nonatomic) double tvCellWidth; // @synthesize tvCellWidth=_tvCellWidth;
@property(nonatomic) struct CGSize lastCollectionViewSize; // @synthesize lastCollectionViewSize=_lastCollectionViewSize;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(retain, nonatomic) NSDictionary *familyMemberHashToFamilyMemberDictionary; // @synthesize familyMemberHashToFamilyMemberDictionary=_familyMemberHashToFamilyMemberDictionary;
@property(retain, nonatomic) VUIFamilyMemberCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUILegacyCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) VUILibraryFamilyMembersDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <VUIFamilyMembersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNavigationBarPadding;
- (void)_clearCollectionViewSelections:(_Bool)arg1;
- (void)_updateLayoutForSizeIfNeeded:(struct CGSize)arg1;
- (void)_updateCurrentViewIfNeeded;
- (id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)arg1;
- (id)_getFamilyMemberIdentifiersFromFamilyMembers;
- (id)_createDiffableDataSourceSnapshot;
- (id)_createDiffableDataSource;
- (id)_createCollectionView;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)unregisterApplicationNotifications;
- (void)registerForApplicationNotifications;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

