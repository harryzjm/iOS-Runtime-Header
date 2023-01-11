//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKNicknameUpdatesCollectionViewCellDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CKNicknameUpdatesCollectionView, NSArray, NSString, UICollectionViewCompositionalLayout, _UICollectionViewDiffableDataSource;
@protocol CKNicknameUpdatesViewControllerDelegate;

@interface CKNicknameUpdatesViewController : UIViewController <UICollectionViewDelegate, CKNicknameUpdatesCollectionViewCellDelegate>
{
    id <CKNicknameUpdatesViewControllerDelegate> _delegate;
    NSArray *_nicknameUpdates;
    CKNicknameUpdatesCollectionView *_collectionView;
    _UICollectionViewDiffableDataSource *_dataSource;
    UICollectionViewCompositionalLayout *_collectionViewLayout;
}

@property(retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) _UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CKNicknameUpdatesCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *nicknameUpdates; // @synthesize nicknameUpdates=_nicknameUpdates;
@property(nonatomic) id <CKNicknameUpdatesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1 ignoreButtonTappedForBannerView:(id)arg2;
- (void)updateCell:(id)arg1 updateButtonTappedForBannerView:(id)arg2;
- (void)_doneButtonTapped:(id)arg1;
- (void)_nicknameStateChanged:(id)arg1;
- (id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2;
- (id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3;
- (void)reloadData;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
