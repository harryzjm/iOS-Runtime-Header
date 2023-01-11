//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBComscoreEventSend : PBCodable <NSCopying>
{
    int _comscoreEventType;
    NSString *_contentViewedId;
    NSString *_eventUdid;
    NSString *_failureReasonCode;
    int _resultType;
    NSString *_sourceChannelId;
    struct {
        unsigned int comscoreEventType:1;
        unsigned int resultType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *contentViewedId; // @synthesize contentViewedId=_contentViewedId;
@property(retain, nonatomic) NSString *failureReasonCode; // @synthesize failureReasonCode=_failureReasonCode;
@property(retain, nonatomic) NSString *eventUdid; // @synthesize eventUdid=_eventUdid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasContentViewedId;
@property(readonly, nonatomic) _Bool hasFailureReasonCode;
@property(readonly, nonatomic) _Bool hasEventUdid;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) _Bool hasComscoreEventType;
@property(nonatomic) int comscoreEventType; // @synthesize comscoreEventType=_comscoreEventType;

@end
