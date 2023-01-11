//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineModelAlgorithmInstance : PBCodable <NSCopying>
{
    unsigned long long _addressComponentMatches;
    double _distanceFromTruth;
    double _uncertainty;
    unsigned int _efficacy;
    unsigned int _previousType;
    unsigned int _source;
    unsigned int _truthSource;
    unsigned int _truthType;
    unsigned int _type;
    struct {
        unsigned int addressComponentMatches:1;
        unsigned int distanceFromTruth:1;
        unsigned int uncertainty:1;
        unsigned int efficacy:1;
        unsigned int previousType:1;
        unsigned int source:1;
        unsigned int truthSource:1;
        unsigned int truthType:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned int truthSource; // @synthesize truthSource=_truthSource;
@property(nonatomic) unsigned int truthType; // @synthesize truthType=_truthType;
@property(nonatomic) unsigned int previousType; // @synthesize previousType=_previousType;
@property(nonatomic) unsigned long long addressComponentMatches; // @synthesize addressComponentMatches=_addressComponentMatches;
@property(nonatomic) double distanceFromTruth; // @synthesize distanceFromTruth=_distanceFromTruth;
@property(nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned int efficacy; // @synthesize efficacy=_efficacy;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTruthSource;
@property(nonatomic) _Bool hasTruthType;
@property(nonatomic) _Bool hasPreviousType;
@property(nonatomic) _Bool hasAddressComponentMatches;
@property(nonatomic) _Bool hasDistanceFromTruth;
@property(nonatomic) _Bool hasUncertainty;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) _Bool hasEfficacy;
@property(nonatomic) _Bool hasType;

@end

