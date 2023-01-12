//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext, SKUIGiftThemeCollectionView, UIPageControl;
@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneSlideshowViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    SKUIGiftThemeCollectionView *_collectionView;
    id <SKUISlideshowViewControllerDataSource> _dataSource;
    id <SKUISlideshowViewControllerDelegate> _delegate;
    UIPageControl *_pageControl;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_placeholderQueue;
    NSMutableArray *_images;
    NSMutableDictionary *_placeholderImages;
    long long _indexToScrollToOnLoadView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadSize;
- (void)_reloadPageControl;
- (void)_setImage:(id)arg1 atIndex:(long long)arg2;
- (id)_placeholderImageAtIndex:(long long)arg1;
- (id)_imageAtIndex:(long long)arg1;
- (void)_doneAction:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) long long currentIndex;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

