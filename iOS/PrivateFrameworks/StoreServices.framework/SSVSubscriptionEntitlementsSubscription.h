//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface SSVSubscriptionEntitlementsSubscription : NSObject
{
    _Bool _newsAppPurchase;
    NSNumber *_appAdamId;
    NSNumber *_appVersion;
    NSString *_chargeCountryCode;
    NSString *_chargeCurrencyCode;
    NSNumber *_chargeStoreFrontIdentifier;
    NSDate *_expireDate;
    NSNumber *_familyId;
    NSNumber *_inAppAdamId;
    NSString *_inAppVersion;
    NSString *_offerIdentifier;
    NSNumber *_originalPurchaseDownloadId;
    NSNumber *_purchasabilityType;
    NSNumber *_purchaseDownloadId;
    NSNumber *_quantity;
    NSString *_vendorIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSNumber *purchaseDownloadId; // @synthesize purchaseDownloadId=_purchaseDownloadId;
@property(copy, nonatomic) NSNumber *purchasabilityType; // @synthesize purchasabilityType=_purchasabilityType;
@property(copy, nonatomic) NSNumber *originalPurchaseDownloadId; // @synthesize originalPurchaseDownloadId=_originalPurchaseDownloadId;
@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(nonatomic, getter=isNewsAppPurchase) _Bool newsAppPurchase; // @synthesize newsAppPurchase=_newsAppPurchase;
@property(copy, nonatomic) NSString *inAppVersion; // @synthesize inAppVersion=_inAppVersion;
@property(copy, nonatomic) NSNumber *inAppAdamId; // @synthesize inAppAdamId=_inAppAdamId;
@property(copy, nonatomic) NSNumber *familyId; // @synthesize familyId=_familyId;
@property(copy, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(copy, nonatomic) NSNumber *chargeStoreFrontIdentifier; // @synthesize chargeStoreFrontIdentifier=_chargeStoreFrontIdentifier;
@property(copy, nonatomic) NSString *chargeCurrencyCode; // @synthesize chargeCurrencyCode=_chargeCurrencyCode;
@property(copy, nonatomic) NSString *chargeCountryCode; // @synthesize chargeCountryCode=_chargeCountryCode;
@property(copy, nonatomic) NSNumber *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
