//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLRevGeoCompoundNameInfo;
@protocol GEOMapItemPrivate;

@interface PLRevGeoLocationInfo : NSObject
{
    _Bool _isValid;
    _Bool _isHome;
    id <GEOMapItemPrivate> _geoMapItem;
    PLRevGeoCompoundNameInfo *_compoundNameInfo;
    PLRevGeoCompoundNameInfo *_compoundSecondaryNameInfo;
    NSString *_providerId;
    unsigned long long _providerVersion;
}

+ (unsigned long long)currentVersion;
+ (unsigned long long)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2;
+ (CDUnknownBlockType)sortedNameAndAreaInfoComparatorWithHomeAtEnd:(_Bool)arg1;
+ (id)_namingOrderForAssetReverseGeoDescription;
+ (_Bool)isValidFromData:(id)arg1;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
@property(nonatomic) unsigned long long providerVersion; // @synthesize providerVersion=_providerVersion;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(nonatomic) _Bool isHome; // @synthesize isHome=_isHome;
@property(retain, nonatomic) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo; // @synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo;
@property(retain, nonatomic) PLRevGeoCompoundNameInfo *compoundNameInfo; // @synthesize compoundNameInfo=_compoundNameInfo;
@property(retain, nonatomic) id <GEOMapItemPrivate> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, copy, nonatomic) NSString *countryCode;
- (void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(long long *)arg3;
@property(readonly, nonatomic) _Bool hasLocation;
- (id)localizedDescription;
- (id)dataForInfo;
- (id)description;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end

