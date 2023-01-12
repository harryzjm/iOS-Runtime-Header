//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelActivityPollingResponse : PBCodable
{
    unsigned long long _serverTimestampSeconds;
    unsigned long long _version;
    NSMutableArray *_participantPayloads;
    unsigned int _responseMessageIndex;
    int _status;
    unsigned int _totalResponseMessages;
    NSData *_uuid;
    struct {
        unsigned int serverTimestampSeconds:1;
        unsigned int version:1;
        unsigned int responseMessageIndex:1;
        unsigned int status:1;
        unsigned int totalResponseMessages:1;
    } _has;
}

+ (Class)participantPayloadType;
- (void).cxx_destruct;
@property(nonatomic) unsigned int totalResponseMessages; // @synthesize totalResponseMessages=_totalResponseMessages;
@property(nonatomic) unsigned int responseMessageIndex; // @synthesize responseMessageIndex=_responseMessageIndex;
@property(retain, nonatomic) NSMutableArray *participantPayloads; // @synthesize participantPayloads=_participantPayloads;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long serverTimestampSeconds; // @synthesize serverTimestampSeconds=_serverTimestampSeconds;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTotalResponseMessages;
@property(nonatomic) _Bool hasResponseMessageIndex;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantPayloadsCount;
- (void)addParticipantPayload:(id)arg1;
- (void)clearParticipantPayloads;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasServerTimestampSeconds;
@property(readonly, nonatomic) _Bool hasUuid;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

