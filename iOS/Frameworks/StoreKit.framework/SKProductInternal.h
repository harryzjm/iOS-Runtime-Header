//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString, SKProductDiscount, SKProductSubscriptionPeriod;

__attribute__((visibility("hidden")))
@interface SKProductInternal : NSObject
{
    NSString *_contentVersion;
    _Bool _downloadable;
    _Bool _familyShareable;
    NSArray *_downloadContentLengths;
    SKProductDiscount *_introductoryPrice;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
    NSString *_subscriptionGroupIdentifier;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    NSArray *_discounts;
}

- (void).cxx_destruct;

@end
