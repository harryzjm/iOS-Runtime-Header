//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, WFGiphySessionManager;
@protocol WFGiphyViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFGiphyViewController : UIViewController
{
    _Bool _selectMultiple;
    NSString *_query;
    id <WFGiphyViewControllerDelegate> _delegate;
    UIView *_emptyListView;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WFGiphySessionManager *_sessionManager;
    NSArray *_objects;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) WFGiphySessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) __weak UIView *emptyListView; // @synthesize emptyListView=_emptyListView;
@property(nonatomic) __weak id <WFGiphyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) _Bool selectMultiple; // @synthesize selectMultiple=_selectMultiple;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)accessibilityPerformEscape;
- (void)cancel;
- (void)done;
- (void)updateResults;
- (void)setQuery:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithQuery:(id)arg1 selectMultiple:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

