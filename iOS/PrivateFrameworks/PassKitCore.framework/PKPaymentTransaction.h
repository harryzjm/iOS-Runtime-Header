//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class CLLocation, NSData, NSDate, NSDecimalNumber, NSDictionary, NSString, PKCurrencyAmount, PKMerchant, PKPaymentTransactionFees, PKPaymentTransactionForeignExchangeInformation;

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    _Bool _enRoute;
    _Bool _isCloudKitArchived;
    _Bool _processedForLocation;
    _Bool _processedForMerchantCleanup;
    _Bool _processedForStations;
    _Bool _hasAssociatedPaymentApplication;
    _Bool _hasNotificationServiceData;
    NSString *_identifier;
    NSString *_serviceIdentifier;
    NSString *_paymentHash;
    NSDecimalNumber *_amount;
    NSDecimalNumber *_subtotalAmount;
    NSString *_currencyCode;
    NSDate *_transactionDate;
    NSDate *_transactionStatusChangedDate;
    PKMerchant *_merchant;
    NSString *_locality;
    NSString *_administrativeArea;
    NSDate *_locationDate;
    double _locationLatitude;
    double _locationLongitude;
    double _locationAltitude;
    double _locationHorizontalAccuracy;
    double _locationVerticalAccuracy;
    long long _transitType;
    unsigned long long _transitModifiers;
    NSString *_stationCodeProvider;
    NSData *_startStationCode;
    NSString *_startStation;
    NSData *_endStationCode;
    NSString *_endStation;
    long long _peerPaymentType;
    NSString *_peerPaymentCounterpartHandle;
    NSString *_peerPaymentMemo;
    PKPaymentTransactionForeignExchangeInformation *_foreignExchangeInformation;
    PKPaymentTransactionFees *_fees;
    NSDecimalNumber *_primaryFundingSourceAmount;
    NSString *_primaryFundingSourceCurrencyCode;
    NSDecimalNumber *_secondaryFundingSourceAmount;
    NSString *_secondaryFundingSourceCurrencyCode;
    long long _secondaryFundingSourceNetwork;
    NSString *_secondaryFundingSourceDPANSuffix;
    NSString *_secondaryFundingSourceFPANIdentifier;
    NSString *_secondaryFundingSourceDescription;
    NSDictionary *_metadata;
    long long _transactionStatus;
    long long _transactionType;
    long long _technologyType;
    unsigned long long _transactionSource;
}

+ (id)cloudStoreTransactionDeviceDataRecordTypeRecordNamePrefix;
+ (_Bool)supportsSecureCoding;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(_Bool)arg3;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
@property(nonatomic) unsigned long long transactionSource; // @synthesize transactionSource=_transactionSource;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property(nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(nonatomic) _Bool hasNotificationServiceData; // @synthesize hasNotificationServiceData=_hasNotificationServiceData;
@property(nonatomic) _Bool hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property(nonatomic) _Bool processedForStations; // @synthesize processedForStations=_processedForStations;
@property(nonatomic) _Bool processedForMerchantCleanup; // @synthesize processedForMerchantCleanup=_processedForMerchantCleanup;
@property(nonatomic) _Bool processedForLocation; // @synthesize processedForLocation=_processedForLocation;
@property(nonatomic) _Bool isCloudKitArchived; // @synthesize isCloudKitArchived=_isCloudKitArchived;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *secondaryFundingSourceDescription; // @synthesize secondaryFundingSourceDescription=_secondaryFundingSourceDescription;
@property(copy, nonatomic) NSString *secondaryFundingSourceFPANIdentifier; // @synthesize secondaryFundingSourceFPANIdentifier=_secondaryFundingSourceFPANIdentifier;
@property(copy, nonatomic) NSString *secondaryFundingSourceDPANSuffix; // @synthesize secondaryFundingSourceDPANSuffix=_secondaryFundingSourceDPANSuffix;
@property(nonatomic) long long secondaryFundingSourceNetwork; // @synthesize secondaryFundingSourceNetwork=_secondaryFundingSourceNetwork;
@property(copy, nonatomic) NSString *secondaryFundingSourceCurrencyCode; // @synthesize secondaryFundingSourceCurrencyCode=_secondaryFundingSourceCurrencyCode;
@property(copy, nonatomic) NSDecimalNumber *secondaryFundingSourceAmount; // @synthesize secondaryFundingSourceAmount=_secondaryFundingSourceAmount;
@property(copy, nonatomic) NSString *primaryFundingSourceCurrencyCode; // @synthesize primaryFundingSourceCurrencyCode=_primaryFundingSourceCurrencyCode;
@property(copy, nonatomic) NSDecimalNumber *primaryFundingSourceAmount; // @synthesize primaryFundingSourceAmount=_primaryFundingSourceAmount;
@property(retain, nonatomic) PKPaymentTransactionFees *fees; // @synthesize fees=_fees;
@property(retain, nonatomic) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation; // @synthesize foreignExchangeInformation=_foreignExchangeInformation;
@property(copy, nonatomic) NSString *peerPaymentMemo; // @synthesize peerPaymentMemo=_peerPaymentMemo;
@property(copy, nonatomic) NSString *peerPaymentCounterpartHandle; // @synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle;
@property(nonatomic) long long peerPaymentType; // @synthesize peerPaymentType=_peerPaymentType;
@property(copy, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property(copy, nonatomic) NSData *endStationCode; // @synthesize endStationCode=_endStationCode;
@property(copy, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property(copy, nonatomic) NSData *startStationCode; // @synthesize startStationCode=_startStationCode;
@property(copy, nonatomic) NSString *stationCodeProvider; // @synthesize stationCodeProvider=_stationCodeProvider;
@property(nonatomic) _Bool enRoute; // @synthesize enRoute=_enRoute;
@property(nonatomic) unsigned long long transitModifiers; // @synthesize transitModifiers=_transitModifiers;
@property(nonatomic) long long transitType; // @synthesize transitType=_transitType;
@property(nonatomic) double locationVerticalAccuracy; // @synthesize locationVerticalAccuracy=_locationVerticalAccuracy;
@property(nonatomic) double locationHorizontalAccuracy; // @synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy;
@property(nonatomic) double locationAltitude; // @synthesize locationAltitude=_locationAltitude;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(retain, nonatomic) NSDate *locationDate; // @synthesize locationDate=_locationDate;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property(copy, nonatomic) NSDate *transactionStatusChangedDate; // @synthesize transactionStatusChangedDate=_transactionStatusChangedDate;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *subtotalAmount; // @synthesize subtotalAmount=_subtotalAmount;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *paymentHash; // @synthesize paymentHash=_paymentHash;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *formattedBalanceAdjustmentAmount;
@property(readonly, nonatomic) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *currencyAmount;
- (id)_transactionTypeString;
- (id)_transactionSourceString;
- (id)description;
@property(readonly, nonatomic) _Bool hasBackingData;
@property(readonly, nonatomic) _Bool hasTransactionSource;
@property(nonatomic) unsigned long long peerPaymentStatus;
@property(retain, nonatomic) CLLocation *location;
@property(readonly, nonatomic) __weak NSString *displayLocation;
- (id)recordTypesAndNames;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPaymentTransaction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)init;

@end

