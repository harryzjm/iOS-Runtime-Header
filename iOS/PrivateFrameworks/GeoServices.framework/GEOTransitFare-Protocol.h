//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@protocol GEOTransitFare <NSObject>
@property(readonly, nonatomic) _Bool cashOnly;
@property(readonly, nonatomic) unsigned int *supportedPaymentMethodIndexs;
@property(readonly, nonatomic) unsigned long long supportedPaymentMethodIndexsCount;
@property(readonly, nonatomic) NSArray *supportedICCardProviders;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *value;
@end

