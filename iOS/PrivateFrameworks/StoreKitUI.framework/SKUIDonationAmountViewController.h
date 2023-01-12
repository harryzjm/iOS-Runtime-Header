//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIDonationAmountView, SKUIGiftPurchaseRequest, SKUIGiftValidationResponse, SKUIGiftValidator;

__attribute__((visibility("hidden")))
@interface SKUIDonationAmountViewController
{
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    _Bool _tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}

- (void).cxx_destruct;
- (void)_validateDonation:(id)arg1;
- (void)_setDonationButtonEnabled:(_Bool)arg1;
- (void)_reenableAfterFailure;
- (void)_performActionAfterValidation;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishPurchaseWithResult:(_Bool)arg1 errorMessage:(id)arg2;
- (void)_amountChangedNotification:(id)arg1;
- (void)_donateButtonAction:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

