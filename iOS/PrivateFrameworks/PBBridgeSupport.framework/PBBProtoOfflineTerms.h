//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PBBProtoOfflineTerms : PBCodable <NSCopying>
{
    NSMutableArray *_appleLanguages;
    NSString *_countryCode;
    NSString *_languageCode;
    NSData *_license;
    NSData *_multiterms;
    NSData *_warranty;
}

+ (Class)appleLanguagesType;
@property(retain, nonatomic) NSMutableArray *appleLanguages; // @synthesize appleLanguages=_appleLanguages;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSData *warranty; // @synthesize warranty=_warranty;
@property(retain, nonatomic) NSData *multiterms; // @synthesize multiterms=_multiterms;
@property(retain, nonatomic) NSData *license; // @synthesize license=_license;
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
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appleLanguagesCount;
- (void)addAppleLanguages:(id)arg1;
- (void)clearAppleLanguages;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasWarranty;
@property(readonly, nonatomic) _Bool hasMultiterms;
@property(readonly, nonatomic) _Bool hasLicense;

@end

