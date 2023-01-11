//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDTransportHistoryRecord : PBCodable <NSCopying>
{
    unsigned long long _timestampFailure;
    NSMutableArray *_connectionInfos;
    int _connectionMethod;
    int _transport;
    unsigned int _transportSwitchReasonErrorCode;
    int _transportSwitchReasonErrorDomain;
    struct {
        unsigned int timestampFailure:1;
        unsigned int connectionMethod:1;
        unsigned int transport:1;
        unsigned int transportSwitchReasonErrorCode:1;
        unsigned int transportSwitchReasonErrorDomain:1;
    } _has;
}

+ (Class)connectionInfoType;
@property(nonatomic) unsigned long long timestampFailure; // @synthesize timestampFailure=_timestampFailure;
@property(nonatomic) unsigned int transportSwitchReasonErrorCode; // @synthesize transportSwitchReasonErrorCode=_transportSwitchReasonErrorCode;
@property(retain, nonatomic) NSMutableArray *connectionInfos; // @synthesize connectionInfos=_connectionInfos;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimestampFailure;
@property(nonatomic) _Bool hasTransportSwitchReasonErrorCode;
- (int)StringAsTransportSwitchReasonErrorDomain:(id)arg1;
- (id)transportSwitchReasonErrorDomainAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportSwitchReasonErrorDomain;
@property(nonatomic) int transportSwitchReasonErrorDomain; // @synthesize transportSwitchReasonErrorDomain=_transportSwitchReasonErrorDomain;
- (id)connectionInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionInfosCount;
- (void)addConnectionInfo:(id)arg1;
- (void)clearConnectionInfos;
- (int)StringAsConnectionMethod:(id)arg1;
- (id)connectionMethodAsString:(int)arg1;
@property(nonatomic) _Bool hasConnectionMethod;
@property(nonatomic) int connectionMethod; // @synthesize connectionMethod=_connectionMethod;
- (int)StringAsTransport:(id)arg1;
- (id)transportAsString:(int)arg1;
@property(nonatomic) _Bool hasTransport;
@property(nonatomic) int transport; // @synthesize transport=_transport;
- (void)dealloc;

@end

