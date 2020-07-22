//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIDonationConfigurationObserver-Protocol.h>

@class NSString, SKUIDonationResultView, SKUIGiftAmount;

@interface SKUIDonationResultViewController <SKUIDonationConfigurationObserver>
{
    SKUIGiftAmount *_donationAmount;
    SKUIDonationResultView *_resultView;
}

@property(copy, nonatomic) SKUIGiftAmount *donationAmount; // @synthesize donationAmount=_donationAmount;
- (void).cxx_destruct;
- (void)_doneButtonAction:(id)arg1;
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (void)loadView;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

