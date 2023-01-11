//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SFDeviceAssetQuery : NSObject
{
    _Bool _forEngagement;
    _Bool _legacyFormats;
    struct LogCategory *_ucat;
    NSString *_productType;
    NSString *_mappedProductType;
    NSString *_marketingProductNumber;
    NSString *_mappedMarketingProductNumber;
    NSString *_color;
    NSString *_colorHousing;
    NSString *_colorCoverGlass;
    unsigned long long _version;
    NSDictionary *_additionalQueryParameters;
}

+ (_Bool)deviceWantsLegacyFormats;
@property(readonly, nonatomic) NSDictionary *additionalQueryParameters; // @synthesize additionalQueryParameters=_additionalQueryParameters;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *colorCoverGlass; // @synthesize colorCoverGlass=_colorCoverGlass;
@property(readonly, nonatomic) NSString *colorHousing; // @synthesize colorHousing=_colorHousing;
@property(readonly, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *mappedMarketingProductNumber; // @synthesize mappedMarketingProductNumber=_mappedMarketingProductNumber;
@property(readonly, nonatomic) NSString *marketingProductNumber; // @synthesize marketingProductNumber=_marketingProductNumber;
@property(retain, nonatomic) NSString *mappedProductType; // @synthesize mappedProductType=_mappedProductType;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) _Bool legacyFormats; // @synthesize legacyFormats=_legacyFormats;
@property(readonly, nonatomic) _Bool forEngagement; // @synthesize forEngagement=_forEngagement;
@property(readonly, nonatomic) struct LogCategory *ucat; // @synthesize ucat=_ucat;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)loggingMarketingProductNumber;
- (id)effectiveMarketingProductNumber;
- (id)loggingProductType;
- (id)effectiveProductType;
@property(readonly, nonatomic) NSString *variantIdentifier;
@property(readonly, nonatomic) NSString *stringIdentifier;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(_Bool)arg3;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2;
- (id)initWithPhoneCaseProductType:(id)arg1 color:(id)arg2;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithProductType:(id)arg1;

@end

