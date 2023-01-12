//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HKCodableOntologyEducationContentSection : PBCodable <NSCopying>
{
    long long _type;
    long long _version;
    NSMutableArray *_attributions;
    NSMutableArray *_citations;
    NSMutableArray *_localeIdentifiers;
    NSString *_localizedText;
    NSMutableArray *_validRegionCodes;
    struct {
        unsigned int type:1;
        unsigned int version:1;
    } _has;
}

+ (Class)citationsType;
+ (Class)attributionsType;
+ (Class)validRegionCodesType;
+ (Class)localeIdentifiersType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *citations; // @synthesize citations=_citations;
@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property(retain, nonatomic) NSMutableArray *validRegionCodes; // @synthesize validRegionCodes=_validRegionCodes;
@property(retain, nonatomic) NSMutableArray *localeIdentifiers; // @synthesize localeIdentifiers=_localeIdentifiers;
@property(retain, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)citationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)citationsCount;
- (void)addCitations:(id)arg1;
- (void)clearCitations;
- (id)attributionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)addAttributions:(id)arg1;
- (void)clearAttributions;
- (id)validRegionCodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)validRegionCodesCount;
- (void)addValidRegionCodes:(id)arg1;
- (void)clearValidRegionCodes;
- (id)localeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)localeIdentifiersCount;
- (void)addLocaleIdentifiers:(id)arg1;
- (void)clearLocaleIdentifiers;
@property(readonly, nonatomic) _Bool hasLocalizedText;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasType;

@end
