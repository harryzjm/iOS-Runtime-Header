//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <StatusKitAgentCore/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ChannelIdentity : PBCodable <NSCopying>
{
    NSData *_channelId;
    int _channelOwnershipType;
    NSData *_channelToken;
    NSString *_channelTopic;
    CDStruct_cada917b _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *channelToken; // @synthesize channelToken=_channelToken;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *channelTopic; // @synthesize channelTopic=_channelTopic;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsChannelOwnershipType:(id)arg1;
- (id)channelOwnershipTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasChannelOwnershipType;
@property(nonatomic) int channelOwnershipType; // @synthesize channelOwnershipType=_channelOwnershipType;
@property(readonly, nonatomic) _Bool hasChannelToken;
@property(readonly, nonatomic) _Bool hasChannelId;
@property(readonly, nonatomic) _Bool hasChannelTopic;

@end
