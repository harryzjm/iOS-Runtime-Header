//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIRedeem;

@interface SKUIRedeemResultsViewController
{
    SKUIRedeem *_redeem;
    long long _redeemCategory;
}

+ (id)redeemResultsControllerForRedeem:(id)arg1;
+ (_Bool)canShowResultsForRedeem:(id)arg1;
@property(nonatomic) long long redeemCategory; // @synthesize redeemCategory=_redeemCategory;
@property(retain, nonatomic) SKUIRedeem *redeem; // @synthesize redeem=_redeem;
- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRedeem:(id)arg1;

@end
