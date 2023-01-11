//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@interface HKCodableQuantitySeriesDatum : PBCodable <NSCopying>
{
    double _timeInterval;
    double _value;
    struct {
        unsigned int timeInterval:1;
        unsigned int value:1;
    } _has;
}

@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasValue;
@property(nonatomic) _Bool hasTimeInterval;

@end

