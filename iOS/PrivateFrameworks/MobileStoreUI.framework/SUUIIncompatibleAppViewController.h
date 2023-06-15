//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSOperationQueue, NSString, SSVLoadURLOperation, SUUIIncompatibleAppView, SUUIItemArtworkContext, SUUIProductPageHeaderViewController, SUUIProductPageItem, UIImage, UIScrollView;
@protocol SUUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIIncompatibleAppViewController : SUUIViewController
{
    SUUIItemArtworkContext *_artworkContext;
    id <SUUIProductPageChildViewControllerDelegate> _delegate;
    SUUIProductPageHeaderViewController *_headerViewController;
    UIImage *_iconImage;
    SUUIProductPageItem *_incompatibleItem;
    SSVLoadURLOperation *_loadIconOperation;
    SUUIIncompatibleAppView *_incompatibleView;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SUUIProductPageItem *incompatibleItem; // @synthesize incompatibleItem=_incompatibleItem;
@property(retain, nonatomic) SUUIProductPageHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) __weak id <SUUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (id)_artworkContext;
- (void)_learnMoreAboutIPad:(id)arg1;
- (void)_learnMoreAboutApp:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)reloadData;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)dealloc;
- (id)initWithIncompatibleItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

