//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSData, NSString;

@interface BMPBSiriPrivateLearningSELFEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;
    NSData *_eventData;
    NSString *_uniqueId;
    CDStruct_d3e759b0 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
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
@property(readonly, nonatomic) _Bool hasEventData;
@property(readonly, nonatomic) _Bool hasUniqueId;
@property(nonatomic) _Bool hasAbsoluteTimestamp;

@end
