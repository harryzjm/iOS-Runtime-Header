//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDEntity : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_altFaxs;
    NSMutableArray *_altTelephones;
    NSMutableArray *_altUrls;
    int _displayStyle;
    NSString *_fax;
    NSMutableArray *_localizedCategorys;
    NSMutableArray *_names;
    int _placeDisplayType;
    int _searchSection;
    NSMutableArray *_spokenNames;
    NSString *_telephone;
    int _type;
    NSString *_url;
    _Bool _altTelephoneAdsOptOut;
    _Bool _isDisputed;
    _Bool _isPermanentlyClosed;
    _Bool _isStandaloneBrand;
    _Bool _telephoneAdsOptOut;
    struct {
        unsigned int displayStyle:1;
        unsigned int placeDisplayType:1;
        unsigned int searchSection:1;
        unsigned int type:1;
        unsigned int altTelephoneAdsOptOut:1;
        unsigned int isDisputed:1;
        unsigned int isPermanentlyClosed:1;
        unsigned int isStandaloneBrand:1;
        unsigned int telephoneAdsOptOut:1;
    } _has;
}

+ (Class)localizedCategoryType;
+ (Class)spokenNameType;
+ (Class)nameType;
+ (Class)altUrlType;
+ (Class)altFaxType;
+ (Class)altTelephoneType;
+ (id)entityForPlaceData:(id)arg1;
@property(nonatomic) _Bool isStandaloneBrand; // @synthesize isStandaloneBrand=_isStandaloneBrand;
@property(nonatomic) _Bool altTelephoneAdsOptOut; // @synthesize altTelephoneAdsOptOut=_altTelephoneAdsOptOut;
@property(nonatomic) _Bool telephoneAdsOptOut; // @synthesize telephoneAdsOptOut=_telephoneAdsOptOut;
@property(retain, nonatomic) NSMutableArray *localizedCategorys; // @synthesize localizedCategorys=_localizedCategorys;
@property(retain, nonatomic) NSMutableArray *spokenNames; // @synthesize spokenNames=_spokenNames;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
@property(nonatomic) _Bool isDisputed; // @synthesize isDisputed=_isDisputed;
@property(nonatomic) _Bool isPermanentlyClosed; // @synthesize isPermanentlyClosed=_isPermanentlyClosed;
@property(retain, nonatomic) NSMutableArray *altUrls; // @synthesize altUrls=_altUrls;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableArray *altFaxs; // @synthesize altFaxs=_altFaxs;
@property(retain, nonatomic) NSString *fax; // @synthesize fax=_fax;
@property(retain, nonatomic) NSMutableArray *altTelephones; // @synthesize altTelephones=_altTelephones;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPlaceDisplayType:(id)arg1;
- (id)placeDisplayTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceDisplayType;
@property(nonatomic) int placeDisplayType; // @synthesize placeDisplayType=_placeDisplayType;
- (int)StringAsSearchSection:(id)arg1;
- (id)searchSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchSection;
@property(nonatomic) int searchSection; // @synthesize searchSection=_searchSection;
- (int)StringAsDisplayStyle:(id)arg1;
- (id)displayStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasDisplayStyle;
@property(nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) _Bool hasIsStandaloneBrand;
@property(nonatomic) _Bool hasAltTelephoneAdsOptOut;
@property(nonatomic) _Bool hasTelephoneAdsOptOut;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategorysCount;
- (void)addLocalizedCategory:(id)arg1;
- (void)clearLocalizedCategorys;
- (id)spokenNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenNamesCount;
- (void)addSpokenName:(id)arg1;
- (void)clearSpokenNames;
- (id)nameAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (void)addName:(id)arg1;
- (void)clearNames;
@property(nonatomic) _Bool hasIsDisputed;
@property(nonatomic) _Bool hasIsPermanentlyClosed;
- (id)altUrlAtIndex:(unsigned long long)arg1;
- (unsigned long long)altUrlsCount;
- (void)addAltUrl:(id)arg1;
- (void)clearAltUrls;
@property(readonly, nonatomic) _Bool hasUrl;
- (id)altFaxAtIndex:(unsigned long long)arg1;
- (unsigned long long)altFaxsCount;
- (void)addAltFax:(id)arg1;
- (void)clearAltFaxs;
@property(readonly, nonatomic) _Bool hasFax;
- (id)altTelephoneAtIndex:(unsigned long long)arg1;
- (unsigned long long)altTelephonesCount;
- (void)addAltTelephone:(id)arg1;
- (void)clearAltTelephones;
@property(readonly, nonatomic) _Bool hasTelephone;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)bestLocalizedName;

@end
