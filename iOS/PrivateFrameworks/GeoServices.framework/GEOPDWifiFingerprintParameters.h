//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxLabels;
    NSMutableArray *_measurements;
    struct {
        unsigned int maxLabels:1;
    } _has;
}

+ (Class)measurementType;
@property(retain, nonatomic) NSMutableArray *measurements; // @synthesize measurements=_measurements;
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
@property(nonatomic) _Bool hasMaxLabels;
@property(nonatomic) unsigned int maxLabels; // @synthesize maxLabels=_maxLabels;
- (id)measurementAtIndex:(unsigned long long)arg1;
- (unsigned long long)measurementsCount;
- (void)addMeasurement:(id)arg1;
- (void)clearMeasurements;

@end

