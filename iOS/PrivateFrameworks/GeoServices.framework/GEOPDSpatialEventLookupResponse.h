//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _categorys;
    GEOLatLng *_center;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOTimezone *_timezone;
}

+ (Class)eventDateTimeType;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSMutableArray *eventDateTimes; // @synthesize eventDateTimes=_eventDateTimes;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId; // @synthesize eventId=_eventId;
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
@property(readonly, nonatomic) _Bool hasTimezone;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDateTimesCount;
- (void)addEventDateTime:(id)arg1;
- (void)clearEventDateTimes;
- (int)StringAsCategorys:(id)arg1;
- (id)categorysAsString:(int)arg1;
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (void)addCategory:(int)arg1;
- (void)clearCategorys;
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(readonly, nonatomic) _Bool hasCenter;
@property(readonly, nonatomic) _Bool hasEventId;
- (void)dealloc;

@end

