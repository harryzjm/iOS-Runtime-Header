//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOResourceFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _scales;
    CDStruct_95bda58d _scenarios;
}

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
- (int)StringAsScenarios:(id)arg1;
- (id)scenariosAsString:(int)arg1;
- (void)setScenarios:(int *)arg1 count:(unsigned long long)arg2;
- (int)scenarioAtIndex:(unsigned long long)arg1;
- (void)addScenario:(int)arg1;
- (void)clearScenarios;
@property(readonly, nonatomic) int *scenarios;
@property(readonly, nonatomic) unsigned long long scenariosCount;
- (int)StringAsScales:(id)arg1;
- (id)scalesAsString:(int)arg1;
- (void)setScales:(int *)arg1 count:(unsigned long long)arg2;
- (int)scaleAtIndex:(unsigned long long)arg1;
- (void)addScale:(int)arg1;
- (void)clearScales;
@property(readonly, nonatomic) int *scales;
@property(readonly, nonatomic) unsigned long long scalesCount;
- (void)dealloc;

@end

