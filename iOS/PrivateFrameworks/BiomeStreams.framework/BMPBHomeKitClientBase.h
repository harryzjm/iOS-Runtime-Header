//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBHomeKitClientBase : PBCodable <NSCopying>
{
    double _absoluteTimestamp;
    double _duration;
    NSString *_clientName;
    NSString *_eventCorrelationIdentifier;
    int _homeOccupancy;
    NSString *_homeUniqueIdentifier;
    NSString *_source;
    struct {
        unsigned int absoluteTimestamp:1;
        unsigned int duration:1;
        unsigned int homeOccupancy:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *eventCorrelationIdentifier; // @synthesize eventCorrelationIdentifier=_eventCorrelationIdentifier;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) int homeOccupancy; // @synthesize homeOccupancy=_homeOccupancy;
@property(retain, nonatomic) NSString *homeUniqueIdentifier; // @synthesize homeUniqueIdentifier=_homeUniqueIdentifier;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEventCorrelationIdentifier;
@property(readonly, nonatomic) _Bool hasClientName;
@property(readonly, nonatomic) _Bool hasSource;
@property(nonatomic) _Bool hasHomeOccupancy;
@property(readonly, nonatomic) _Bool hasHomeUniqueIdentifier;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasAbsoluteTimestamp;

@end
