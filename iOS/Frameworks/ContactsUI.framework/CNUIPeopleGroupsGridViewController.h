//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNUIPeopleGroupsDataSourceDelegate-Protocol.h>
#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>

@class CNUIContactsEnvironment, CNUIPeopleGroupsDataSource, CNUIPeopleGroupsGridView, NSString;
@protocol CNUIPeopleGroupsGridViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroupsGridViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNUIPeopleGroupsDataSourceDelegate>
{
    id <CNUIPeopleGroupsGridViewControllerDelegate> _delegate;
    CNUIPeopleGroupsGridView *_gridView;
    CNUIContactsEnvironment *_environment;
    CNUIPeopleGroupsDataSource *_dataSource;
}

@property(retain, nonatomic) CNUIPeopleGroupsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNUIContactsEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) CNUIPeopleGroupsGridView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <CNUIPeopleGroupsGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataSourceDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadGridView;
- (void)reloadData;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGSize)intrinsicContentSize;
- (id)newGridLayout;
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

