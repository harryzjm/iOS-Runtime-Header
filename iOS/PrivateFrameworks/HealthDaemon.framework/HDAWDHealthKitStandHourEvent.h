//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitStandHourEvent : PBCodable <NSCopying>
{
    long long _standHourTimestamp;
    unsigned long long _timestamp;
    _Bool _didStand;
    struct {
        unsigned int standHourTimestamp:1;
        unsigned int timestamp:1;
        unsigned int didStand:1;
    } _has;
}

@property(nonatomic) _Bool didStand; // @synthesize didStand=_didStand;
@property(nonatomic) long long standHourTimestamp; // @synthesize standHourTimestamp=_standHourTimestamp;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDidStand;
@property(nonatomic) _Bool hasStandHourTimestamp;
@property(nonatomic) _Bool hasTimestamp;

@end

