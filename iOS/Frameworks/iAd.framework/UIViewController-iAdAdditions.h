//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIViewController (iAdAdditions)
+ (void)prepareInterstitialAds;
@property(readonly, nonatomic) _Bool shouldPresentInterstitialAd;
- (_Bool)requestInterstitialAdPresentation;
@property(readonly, nonatomic, getter=isDisplayingBannerAd) _Bool displayingBannerAd;
@property(readonly, nonatomic, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd;
@property(readonly, retain, nonatomic) UIView *originalContentView;
@property(nonatomic) _Bool canDisplayBannerAds;
@property(nonatomic) long long interstitialPresentationPolicy;
@end
