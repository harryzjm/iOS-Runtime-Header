//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentSetupActivitySpinnerProtocol-Protocol.h>
#import <PassKitUI/PKPaymentSetupProductsSectionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentSetupFlowController, PKPaymentSetupProduct, PKPaymentSetupProductCategory, PKPaymentSetupProductsSectionController;

@interface PKPaymentSetupProductsViewController <PKPaymentSetupProductsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol>
{
    PKPaymentSetupProductCategory *_category;
    NSArray *_paymentSetupProducts;
    PKPaymentSetupProductsSectionController *_primaryProductSectionController;
    PKPaymentSetupFlowController *_flowController;
    PKPaymentSetupProduct *_currentlyLoadingProduct;
}

- (void).cxx_destruct;
- (void)_didSelectAddADifferentCardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didSelectAddADifferentCard;
- (void)reloadSectionIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSectionsRequired;
- (_Bool)didSelectManualEntryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)didSelectProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideNoResultsView;
- (void)displayNoResultsViewWithSubtitle:(id)arg1 needsManualEntryButton:(_Bool)arg2;
- (void)searchBarCancelButtonClicked;
- (void)searchTextDidChangeTo:(id)arg1;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 category:(id)arg4 paymentSetupProducts:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
