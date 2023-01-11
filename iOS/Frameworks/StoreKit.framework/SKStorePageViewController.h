//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKStoreProductViewControllerDelegate-Protocol.h>

@class NSString, SKInvocationQueueProxy, SKRemoteStorePageViewController, SKStoreProductViewController, _UIAsyncInvocation;
@protocol SKUIServiceStorePageViewController;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    _UIAsyncInvocation *_cancelRequest;
    CDUnknownBlockType _loadBlock;
    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}

- (void).cxx_destruct;
- (void)_requestRemoteViewController;
- (void)_prepareToLoadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_dismissProductPageViewController;
- (void)_didLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_addRemoteView;
- (void)_showProductPageWithItemIdentifier:(id)arg1;
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadPageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
