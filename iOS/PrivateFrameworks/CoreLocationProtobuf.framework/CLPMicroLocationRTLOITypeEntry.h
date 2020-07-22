//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CLPMicroLocationRTLOITypeEntry : PBCodable <NSCopying>
{
    double _confidence;
    double _uncertaintyInMeters;
    int _rtLOIType;
    NSString *_rtLOIUUID;
    int _typeSource;
    NSMutableArray *_visits;
    _Bool _rtVisitTimesAreQuantized;
    struct {
        unsigned int confidence:1;
        unsigned int uncertaintyInMeters:1;
        unsigned int rtLOIType:1;
        unsigned int typeSource:1;
        unsigned int rtVisitTimesAreQuantized:1;
    } _has;
}

+ (Class)visitsType;
@property(nonatomic) _Bool rtVisitTimesAreQuantized; // @synthesize rtVisitTimesAreQuantized=_rtVisitTimesAreQuantized;
@property(retain, nonatomic) NSMutableArray *visits; // @synthesize visits=_visits;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) double uncertaintyInMeters; // @synthesize uncertaintyInMeters=_uncertaintyInMeters;
@property(retain, nonatomic) NSString *rtLOIUUID; // @synthesize rtLOIUUID=_rtLOIUUID;
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
@property(nonatomic) _Bool hasRtVisitTimesAreQuantized;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
- (int)StringAsTypeSource:(id)arg1;
- (id)typeSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasTypeSource;
@property(nonatomic) int typeSource; // @synthesize typeSource=_typeSource;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasUncertaintyInMeters;
- (int)StringAsRtLOIType:(id)arg1;
- (id)rtLOITypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRtLOIType;
@property(nonatomic) int rtLOIType; // @synthesize rtLOIType=_rtLOIType;
@property(readonly, nonatomic) _Bool hasRtLOIUUID;

@end

