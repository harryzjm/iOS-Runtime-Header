//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class ADBannerView, NSError;

@protocol ADBannerViewDelegate <NSObject>

@optional
- (void)bannerViewActionDidFinish:(ADBannerView *)arg1;
- (_Bool)bannerViewActionShouldBegin:(ADBannerView *)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerView:(ADBannerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)bannerViewDidLoadAd:(ADBannerView *)arg1;
- (void)bannerViewWillLoadAd:(ADBannerView *)arg1;
@end

