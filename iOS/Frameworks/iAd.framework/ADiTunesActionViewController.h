//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iAd/SKStoreProductViewControllerDelegate-Protocol.h>

@class ADHomeButtonHandler, NSString, SKStoreProductViewController;

@interface ADiTunesActionViewController <SKStoreProductViewControllerDelegate>
{
    int _defaultResult;
    SKStoreProductViewController *_storeProductViewController;
    ADHomeButtonHandler *_homeButtonHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ADHomeButtonHandler *homeButtonHandler; // @synthesize homeButtonHandler=_homeButtonHandler;
@property(nonatomic) int defaultResult; // @synthesize defaultResult=_defaultResult;
@property(retain, nonatomic) SKStoreProductViewController *storeProductViewController; // @synthesize storeProductViewController=_storeProductViewController;
- (void)dismiss;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
