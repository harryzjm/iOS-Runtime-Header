//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SUUIColorScheme, SUUIQuicklinksView, UICollectionView;
@protocol SUUIQuicklinksViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIQuicklinksViewController : UIViewController
{
    UICollectionView *_collectionView;
    SUUIColorScheme *_colorScheme;
    id <SUUIQuicklinksViewControllerDelegate> _delegate;
    NSArray *_links;
    SUUIQuicklinksView *_quicklinksView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
@property(nonatomic) __weak id <SUUIQuicklinksViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_numberOfRows;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)loadView;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setColoringWithColorScheme:(id)arg1;
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
- (struct CGRect)frameForLinkAtIndex:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

