//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CLPMicroLocationDuetEntry : PBCodable <NSCopying>
{
    double _endTimestamp;
    double _startTimestamp;
    NSMutableArray *_localizationResults;
    NSString *_uUID;
    NSString *_value;
    struct {
        unsigned int endTimestamp:1;
        unsigned int startTimestamp:1;
    } _has;
}

+ (Class)localizationResultsType;
@property(retain, nonatomic) NSMutableArray *localizationResults; // @synthesize localizationResults=_localizationResults;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) NSString *uUID; // @synthesize uUID=_uUID;
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
- (id)localizationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizationResultsCount;
- (void)addLocalizationResults:(id)arg1;
- (void)clearLocalizationResults;
@property(readonly, nonatomic) _Bool hasValue;
@property(nonatomic) _Bool hasEndTimestamp;
@property(nonatomic) _Bool hasStartTimestamp;
@property(readonly, nonatomic) _Bool hasUUID;

@end

