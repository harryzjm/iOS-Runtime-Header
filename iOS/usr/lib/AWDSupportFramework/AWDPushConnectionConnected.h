//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDPushConnectionConnected : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _connectDuration;
    unsigned int _connectionType;
    unsigned int _dnsDuration;
    unsigned int _dualChannelState;
    NSString *_guid;
    int _linkQuality;
    unsigned int _tlsDuration;
    struct {
        unsigned int timestamp:1;
        unsigned int connectDuration:1;
        unsigned int connectionType:1;
        unsigned int dnsDuration:1;
        unsigned int dualChannelState:1;
        unsigned int linkQuality:1;
        unsigned int tlsDuration:1;
    } _has;
}

@property(nonatomic) unsigned int tlsDuration; // @synthesize tlsDuration=_tlsDuration;
@property(nonatomic) unsigned int dnsDuration; // @synthesize dnsDuration=_dnsDuration;
@property(nonatomic) unsigned int dualChannelState; // @synthesize dualChannelState=_dualChannelState;
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) unsigned int connectDuration; // @synthesize connectDuration=_connectDuration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTlsDuration;
@property(nonatomic) _Bool hasDnsDuration;
@property(nonatomic) _Bool hasDualChannelState;
@property(nonatomic) _Bool hasLinkQuality;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) _Bool hasConnectDuration;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasGuid;
- (void)dealloc;

@end
