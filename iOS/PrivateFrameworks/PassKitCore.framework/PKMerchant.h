//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSString, NSURL, PKMapsBrand, PKMapsMerchant;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    _Bool _useRawMerchantData;
    _Bool _mapsDataIsFromLocalMatch;
    NSString *_displayName;
    NSURL *_originURL;
    NSString *_webMerchantIdentifier;
    NSString *_webMerchantName;
    long long _adamIdentifier;
    long long _industryCode;
    NSString *_industryCategory;
    NSString *_name;
    NSString *_rawName;
    NSString *_merchantIdentifier;
    NSString *_rawCANL;
    NSString *_rawCity;
    NSString *_rawState;
    NSString *_rawCountry;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    long long _cleanConfidenceLevel;
    long long _fallbackcategory;
    NSString *_fallbackDetailedCategory;
    PKMapsMerchant *_mapsMerchant;
    PKMapsBrand *_mapsBrand;
}

+ (id)recordNamePrefix;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool mapsDataIsFromLocalMatch; // @synthesize mapsDataIsFromLocalMatch=_mapsDataIsFromLocalMatch;
@property(retain, nonatomic) PKMapsBrand *mapsBrand; // @synthesize mapsBrand=_mapsBrand;
@property(retain, nonatomic) PKMapsMerchant *mapsMerchant; // @synthesize mapsMerchant=_mapsMerchant;
@property(copy, nonatomic) NSString *fallbackDetailedCategory; // @synthesize fallbackDetailedCategory=_fallbackDetailedCategory;
@property(nonatomic) long long fallbackcategory; // @synthesize fallbackcategory=_fallbackcategory;
@property(nonatomic) _Bool useRawMerchantData; // @synthesize useRawMerchantData=_useRawMerchantData;
@property(nonatomic) long long cleanConfidenceLevel; // @synthesize cleanConfidenceLevel=_cleanConfidenceLevel;
@property(copy, nonatomic) NSString *zip; // @synthesize zip=_zip;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *rawCountry; // @synthesize rawCountry=_rawCountry;
@property(copy, nonatomic) NSString *rawState; // @synthesize rawState=_rawState;
@property(copy, nonatomic) NSString *rawCity; // @synthesize rawCity=_rawCity;
@property(copy, nonatomic) NSString *rawCANL; // @synthesize rawCANL=_rawCANL;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(copy, nonatomic) NSString *rawName; // @synthesize rawName=_rawName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(nonatomic) long long adamIdentifier; // @synthesize adamIdentifier=_adamIdentifier;
@property(copy, nonatomic) NSString *webMerchantName; // @synthesize webMerchantName=_webMerchantName;
@property(copy, nonatomic) NSString *webMerchantIdentifier; // @synthesize webMerchantIdentifier=_webMerchantIdentifier;
@property(copy, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
- (_Bool)hasBetterVisualPropertiesThanMerchant:(id)arg1;
- (_Bool)shouldBeCombinedWithMerchant:(id)arg1;
- (id)uniqueIdentifier;
- (void)_regenerateDisplayName;
@property(readonly, nonatomic) NSString *detailedCategory;
@property(readonly, nonatomic) long long category;
@property(readonly, nonatomic) NSURL *businessChatURL;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *heroImageAttribution;
@property(readonly, nonatomic) NSURL *logoImageURL;
@property(readonly, nonatomic) NSURL *heroImageURL;
@property(readonly, nonatomic) _Bool hasMapsMatch;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)jsonDictionaryRepresentation;
- (id)description;
- (_Bool)isEqualToMerchant:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)hasCloudArchivableDeviceData;
- (_Bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (unsigned long long)itemType;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesIncludingServerData:(_Bool)arg1;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
