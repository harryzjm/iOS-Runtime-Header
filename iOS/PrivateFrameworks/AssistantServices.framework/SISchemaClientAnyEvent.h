//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AssistantServices/NSCopying-Protocol.h>

@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying>
{
    NSData *_eventData;
    int _eventType;
    struct {
        unsigned int eventType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
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
@property(nonatomic) _Bool hasEventType;
- (id)si_dictionaryRepresentation;

@end
