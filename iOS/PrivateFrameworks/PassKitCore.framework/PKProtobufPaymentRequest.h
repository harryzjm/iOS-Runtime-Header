//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, PKProtobufPaymentMerchantSession;

@interface PKProtobufPaymentRequest : PBRequest <NSCopying>
{
    NSData *_applicationData;
    NSData *_billingContact;
    NSString *_countryCode;
    NSString *_currencyCode;
    unsigned int _merchantCapabilities;
    NSString *_merchantIdentifier;
    PKProtobufPaymentMerchantSession *_merchantSession;
    NSString *_originatingURL;
    unsigned int _requiredBillingAddressFields;
    NSMutableArray *_requiredBillingContactFields;
    unsigned int _requiredShippingAddressFields;
    NSMutableArray *_requiredShippingContactFields;
    NSData *_shippingContact;
    NSMutableArray *_shippingMethods;
    NSMutableArray *_summaryItems;
    NSMutableArray *_supportedCountries;
    NSMutableArray *_supportedNetworks;
    NSMutableArray *_thumbnailURLs;
    _Bool _expectsMerchantSession;
    struct {
        unsigned int merchantCapabilities:1;
        unsigned int requiredBillingAddressFields:1;
        unsigned int requiredShippingAddressFields:1;
        unsigned int expectsMerchantSession:1;
    } _has;
}

+ (Class)supportedCountriesType;
+ (Class)requiredBillingContactFieldsType;
+ (Class)requiredShippingContactFieldsType;
+ (Class)thumbnailURLsType;
+ (Class)shippingMethodsType;
+ (Class)summaryItemsType;
+ (Class)supportedNetworksType;
@property(retain, nonatomic) NSMutableArray *supportedCountries; // @synthesize supportedCountries=_supportedCountries;
@property(retain, nonatomic) NSMutableArray *requiredBillingContactFields; // @synthesize requiredBillingContactFields=_requiredBillingContactFields;
@property(retain, nonatomic) NSMutableArray *requiredShippingContactFields; // @synthesize requiredShippingContactFields=_requiredShippingContactFields;
@property(nonatomic) _Bool expectsMerchantSession; // @synthesize expectsMerchantSession=_expectsMerchantSession;
@property(retain, nonatomic) NSMutableArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(retain, nonatomic) PKProtobufPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
@property(retain, nonatomic) NSString *originatingURL; // @synthesize originatingURL=_originatingURL;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSMutableArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(retain, nonatomic) NSData *shippingContact; // @synthesize shippingContact=_shippingContact;
@property(retain, nonatomic) NSData *billingContact; // @synthesize billingContact=_billingContact;
@property(nonatomic) unsigned int requiredShippingAddressFields; // @synthesize requiredShippingAddressFields=_requiredShippingAddressFields;
@property(nonatomic) unsigned int requiredBillingAddressFields; // @synthesize requiredBillingAddressFields=_requiredBillingAddressFields;
@property(nonatomic) unsigned int merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(retain, nonatomic) NSMutableArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)supportedCountriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedCountriesCount;
- (void)addSupportedCountries:(id)arg1;
- (void)clearSupportedCountries;
- (id)requiredBillingContactFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredBillingContactFieldsCount;
- (void)addRequiredBillingContactFields:(id)arg1;
- (void)clearRequiredBillingContactFields;
- (id)requiredShippingContactFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredShippingContactFieldsCount;
- (void)addRequiredShippingContactFields:(id)arg1;
- (void)clearRequiredShippingContactFields;
@property(nonatomic) _Bool hasExpectsMerchantSession;
- (id)thumbnailURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)thumbnailURLsCount;
- (void)addThumbnailURLs:(id)arg1;
- (void)clearThumbnailURLs;
@property(readonly, nonatomic) _Bool hasMerchantSession;
@property(readonly, nonatomic) _Bool hasOriginatingURL;
@property(readonly, nonatomic) _Bool hasApplicationData;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (void)addShippingMethods:(id)arg1;
- (void)clearShippingMethods;
- (id)summaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryItemsCount;
- (void)addSummaryItems:(id)arg1;
- (void)clearSummaryItems;
@property(readonly, nonatomic) _Bool hasShippingContact;
@property(readonly, nonatomic) _Bool hasBillingContact;
@property(nonatomic) _Bool hasRequiredShippingAddressFields;
@property(nonatomic) _Bool hasRequiredBillingAddressFields;
@property(nonatomic) _Bool hasMerchantCapabilities;
- (id)supportedNetworksAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedNetworksCount;
- (void)addSupportedNetworks:(id)arg1;
- (void)clearSupportedNetworks;
@property(readonly, nonatomic) _Bool hasCurrencyCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasMerchantIdentifier;

@end

