//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/SKProductsRequestDelegate-Protocol.h>

@class FCCloudContext, FCIntroductoryOffer, NSNumber, NSString, SKProduct;
@protocol OS_dispatch_group;

@interface FCPurchase : NSObject <SKProductsRequestDelegate>
{
    _Bool _purchaseRestore;
    NSNumber *_appAdamID;
    NSString *_purchaseID;
    NSString *_subscriptionPriceFormatted;
    NSString *_subscriptionPeriodInISO_8601;
    NSString *_offerName;
    NSNumber *_storeExternalVersion;
    NSString *_bundleID;
    FCIntroductoryOffer *_introductoryOffer;
    NSNumber *_price;
    SKProduct *_product;
    NSObject<OS_dispatch_group> *_productRequestGroup;
    FCCloudContext *_cloudContext;
}

@property(nonatomic) _Bool purchaseRestore; // @synthesize purchaseRestore=_purchaseRestore;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *productRequestGroup; // @synthesize productRequestGroup=_productRequestGroup;
@property(retain, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(retain, nonatomic) FCIntroductoryOffer *introductoryOffer; // @synthesize introductoryOffer=_introductoryOffer;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSNumber *storeExternalVersion; // @synthesize storeExternalVersion=_storeExternalVersion;
@property(copy, nonatomic) NSString *offerName; // @synthesize offerName=_offerName;
@property(copy, nonatomic) NSString *subscriptionPeriodInISO_8601; // @synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601;
@property(copy, nonatomic) NSString *subscriptionPriceFormatted; // @synthesize subscriptionPriceFormatted=_subscriptionPriceFormatted;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(copy, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
- (void).cxx_destruct;
- (void)simulatePurchaseWithTagID:(id)arg1 webAccessOptIn:(_Bool)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startPurchaseWithTagID:(id)arg1 webAccessOptIn:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)productLookupWithcompletion:(CDUnknownBlockType)arg1;
- (void)appLookupForBundleIDWithAppAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appLookupWithAppAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkIfOfferUsedAlreadyWithAppAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purchaseLookUp:(CDUnknownBlockType)arg1;
- (id)initWithPurchaseID:(id)arg1 cloudContext:(id)arg2 purchaseRestore:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

