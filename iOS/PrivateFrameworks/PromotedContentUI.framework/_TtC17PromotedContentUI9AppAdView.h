//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PromotedContentUI/ASCAdLockupViewDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC17PromotedContentUI9AppAdView <ASCAdLockupViewDelegate>
{
    MISSING_TYPE *$__lazy_storage_$_appView;
}

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)metricsActivityForAdLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2 inState:(id)arg3;
- (id)metricsActivityForPresentingProductDetailsOfAdLockupView:(id)arg1 inState:(id)arg2;
- (void)adLockupViewDidSelectAdMarker:(id)arg1;
- (void)adLockupView:(id)arg1 didSelectOfferWithState:(id)arg2;
- (void)adLockupView:(id)arg1 didFailRequestWithError:(id)arg2;
- (void)adLockupViewDidFinishRequest:(id)arg1;
- (void)adLockupViewDidFinishScreenshotsFetchRequest:(id)arg1;
- (void)adLockupViewDidCancelScreenshotsFetchRequest:(id)arg1;
- (id)presentingViewControllerForAdLockupView:(id)arg1;

@end
