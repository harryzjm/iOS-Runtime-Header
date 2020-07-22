//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SKStoreProductViewControllerDelegatePrivate-Protocol.h>
#import <iTunesStoreUI/SKUIIPhoneProductPageDelegate-Protocol.h>

@class NSString, SKStoreProductViewController, SKUIIPhoneProductPageViewController, SKUIStorePageViewController, UIViewController;

@interface SUSKUIStorePageViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate>
{
    UIViewController *_activeChildViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKStoreProductViewController *_remoteProductViewController;
    SKUIStorePageViewController *_storePageViewController;
}

- (void)_showStorePageWithPageDictionary:(id)arg1;
- (void)_showRemoteViewControllerWithPageDictionary:(id)arg1;
- (void)_showProductPageWithPageDictionary:(id)arg1;
- (void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_loadClientContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(_Bool)arg3;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (_Bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (void)loadView;
- (void)dismissAnimated:(_Bool)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (id)initWithSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

