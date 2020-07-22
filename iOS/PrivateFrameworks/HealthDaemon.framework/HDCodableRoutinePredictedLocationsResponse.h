//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_predictedLocationsOfInterests;
}

+ (Class)predictedLocationsOfInterestType;
@property(retain, nonatomic) NSMutableArray *predictedLocationsOfInterests; // @synthesize predictedLocationsOfInterests=_predictedLocationsOfInterests;
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
- (id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1;
- (unsigned long long)predictedLocationsOfInterestsCount;
- (void)addPredictedLocationsOfInterest:(id)arg1;
- (void)clearPredictedLocationsOfInterests;

@end

