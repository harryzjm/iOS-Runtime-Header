//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTimeToLeaveInitialTravelTimeFeedbackCollection : PBCodable <NSCopying>
{
    int _travelTime;
    CDStruct_36597415 _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTravelTime:(id)arg1;
- (id)travelTimeAsString:(int)arg1;
@property(nonatomic) _Bool hasTravelTime;
@property(nonatomic) int travelTime; // @synthesize travelTime=_travelTime;
- (id)initWithTravelTime:(double)arg1;
- (int)bucketValueForTravelTime:(double)arg1;

@end

