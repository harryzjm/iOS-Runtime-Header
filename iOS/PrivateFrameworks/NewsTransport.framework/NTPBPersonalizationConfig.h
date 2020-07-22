//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBBinningConfig, NTPBPersonalizationTreatment;

@interface NTPBPersonalizationConfig : PBCodable <NSCopying>
{
    long long _moduloForHashing;
    NTPBBinningConfig *_binningConfig;
    NTPBPersonalizationTreatment *_defaultPersonalizationTreatment;
    NSMutableArray *_personalizationBuckets;
    NSMutableArray *_personalizationTreatments;
    CDStruct_3f5c4e18 _has;
}

+ (Class)personalizationTreatmentsType;
+ (Class)personalizationBucketsType;
@property(retain, nonatomic) NSMutableArray *personalizationTreatments; // @synthesize personalizationTreatments=_personalizationTreatments;
@property(retain, nonatomic) NSMutableArray *personalizationBuckets; // @synthesize personalizationBuckets=_personalizationBuckets;
@property(retain, nonatomic) NTPBPersonalizationTreatment *defaultPersonalizationTreatment; // @synthesize defaultPersonalizationTreatment=_defaultPersonalizationTreatment;
@property(nonatomic) long long moduloForHashing; // @synthesize moduloForHashing=_moduloForHashing;
@property(retain, nonatomic) NTPBBinningConfig *binningConfig; // @synthesize binningConfig=_binningConfig;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)personalizationTreatmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizationTreatmentsCount;
- (void)addPersonalizationTreatments:(id)arg1;
- (void)clearPersonalizationTreatments;
- (id)personalizationBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)personalizationBucketsCount;
- (void)addPersonalizationBuckets:(id)arg1;
- (void)clearPersonalizationBuckets;
@property(readonly, nonatomic) _Bool hasDefaultPersonalizationTreatment;
@property(nonatomic) _Bool hasModuloForHashing;
@property(readonly, nonatomic) _Bool hasBinningConfig;

@end

