//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (AdLibAdditions)
+ (void)prepareInterstitialAds;
- (_Bool)requestInterstitialAdPresentation;

// Remaining properties
@property(nonatomic) _Bool canDisplayBannerAds; // @dynamic canDisplayBannerAds;
@property(readonly, nonatomic, getter=isDisplayingBannerAd) _Bool displayingBannerAd; // @dynamic displayingBannerAd;
@property(nonatomic) long long interstitialPresentationPolicy; // @dynamic interstitialPresentationPolicy;
@property(readonly, nonatomic) id originalContentView; // @dynamic originalContentView;
@property(readonly, nonatomic, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd; // @dynamic presentingFullScreenAd;
@property(readonly, nonatomic) _Bool shouldPresentInterstitialAd; // @dynamic shouldPresentInterstitialAd;
@end

