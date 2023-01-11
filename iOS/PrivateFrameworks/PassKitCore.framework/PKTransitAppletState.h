//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSNumber, NSString, PKFelicaTransitAppletState;

@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _blacklisted;
    _Bool _needsStationProcessing;
    NSNumber *_historySequenceNumber;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSString *_currency;
    NSDate *_expirationDate;
    NSArray *_enrouteTransitTypes;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool needsStationProcessing; // @synthesize needsStationProcessing=_needsStationProcessing;
@property(copy, nonatomic) NSArray *enrouteTransitTypes; // @synthesize enrouteTransitTypes=_enrouteTransitTypes;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSNumber *loyaltyBalance; // @synthesize loyaltyBalance=_loyaltyBalance;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSNumber *historySequenceNumber; // @synthesize historySequenceNumber=_historySequenceNumber;
@property(nonatomic, getter=isBlacklisted) _Bool blacklisted; // @synthesize blacklisted=_blacklisted;
- (void).cxx_destruct;
- (void)addEnrouteTransitType:(id)arg1;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id *)arg4 ephemeralTransaction:(id *)arg5;
- (id)updatedEnrouteTransitTypesFromExistingTypes:(id)arg1 newTypes:(id)arg2;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id *)arg2 ephemeralTransaction:(id *)arg3;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id *)arg2 ephemeralTransactions:(id *)arg3;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isInStation) _Bool inStation; // @dynamic inStation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) PKFelicaTransitAppletState *felicaState;

@end

