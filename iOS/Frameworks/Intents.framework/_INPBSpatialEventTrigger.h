//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBLocationValue;

@interface _INPBSpatialEventTrigger : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _event;
    _INPBLocationValue *_location;
    struct {
        unsigned int event:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBLocationValue *location; // @synthesize location=_location;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsEvent:(id)arg1;
- (id)eventAsString:(int)arg1;
@property(nonatomic) _Bool hasEvent;
@property(nonatomic) int event; // @synthesize event=_event;
@property(readonly, nonatomic) _Bool hasLocation;

@end
