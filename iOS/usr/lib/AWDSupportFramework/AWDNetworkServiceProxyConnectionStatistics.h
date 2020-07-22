//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDNetworkServiceProxyConnectionStatistics : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _connectionDurationBuckets;
    unsigned long long _captivePresentCount;
    unsigned long long _connectionCount;
    unsigned long long _mptcpSuccessCount;
    unsigned long long _restrictedNetworkCount;
    unsigned long long _resultConnectionResetCount;
    unsigned long long _resultNetworkUnavailableCount;
    unsigned long long _resultResponseTimeoutCount;
    unsigned long long _resultSendFailureCount;
    unsigned long long _resultServerBusyCount;
    unsigned long long _resultServerDetachedCount;
    unsigned long long _resultServerInterruptCount;
    unsigned long long _resultServerOfflineCount;
    unsigned long long _resultServerOrphanedCount;
    unsigned long long _resultServerSessionExpiredCount;
    unsigned long long _resultServerUnreachableCount;
    unsigned long long _resultSuccessCount;
    unsigned long long _resultUnknownErrorCount;
    unsigned long long _tfoSuccessCount;
    unsigned long long _timestamp;
    unsigned int _alternatePathCount;
    unsigned int _captivePresentFailedCount;
    unsigned int _exceededMssCount;
    int _interfaceType;
    int _protocolType;
    unsigned int _restrictedNetworkFailedCount;
    struct {
        unsigned int captivePresentCount:1;
        unsigned int connectionCount:1;
        unsigned int mptcpSuccessCount:1;
        unsigned int restrictedNetworkCount:1;
        unsigned int resultConnectionResetCount:1;
        unsigned int resultNetworkUnavailableCount:1;
        unsigned int resultResponseTimeoutCount:1;
        unsigned int resultSendFailureCount:1;
        unsigned int resultServerBusyCount:1;
        unsigned int resultServerDetachedCount:1;
        unsigned int resultServerInterruptCount:1;
        unsigned int resultServerOfflineCount:1;
        unsigned int resultServerOrphanedCount:1;
        unsigned int resultServerSessionExpiredCount:1;
        unsigned int resultServerUnreachableCount:1;
        unsigned int resultSuccessCount:1;
        unsigned int resultUnknownErrorCount:1;
        unsigned int tfoSuccessCount:1;
        unsigned int timestamp:1;
        unsigned int alternatePathCount:1;
        unsigned int captivePresentFailedCount:1;
        unsigned int exceededMssCount:1;
        unsigned int interfaceType:1;
        unsigned int protocolType:1;
        unsigned int restrictedNetworkFailedCount:1;
    } _has;
}

@property(nonatomic) unsigned long long resultServerOrphanedCount; // @synthesize resultServerOrphanedCount=_resultServerOrphanedCount;
@property(nonatomic) unsigned int exceededMssCount; // @synthesize exceededMssCount=_exceededMssCount;
@property(nonatomic) unsigned int alternatePathCount; // @synthesize alternatePathCount=_alternatePathCount;
@property(nonatomic) unsigned int captivePresentFailedCount; // @synthesize captivePresentFailedCount=_captivePresentFailedCount;
@property(nonatomic) unsigned int restrictedNetworkFailedCount; // @synthesize restrictedNetworkFailedCount=_restrictedNetworkFailedCount;
@property(nonatomic) unsigned long long resultUnknownErrorCount; // @synthesize resultUnknownErrorCount=_resultUnknownErrorCount;
@property(nonatomic) unsigned long long resultServerSessionExpiredCount; // @synthesize resultServerSessionExpiredCount=_resultServerSessionExpiredCount;
@property(nonatomic) unsigned long long resultServerInterruptCount; // @synthesize resultServerInterruptCount=_resultServerInterruptCount;
@property(nonatomic) unsigned long long resultServerDetachedCount; // @synthesize resultServerDetachedCount=_resultServerDetachedCount;
@property(nonatomic) unsigned long long resultServerOfflineCount; // @synthesize resultServerOfflineCount=_resultServerOfflineCount;
@property(nonatomic) unsigned long long resultServerBusyCount; // @synthesize resultServerBusyCount=_resultServerBusyCount;
@property(nonatomic) unsigned long long resultConnectionResetCount; // @synthesize resultConnectionResetCount=_resultConnectionResetCount;
@property(nonatomic) unsigned long long resultResponseTimeoutCount; // @synthesize resultResponseTimeoutCount=_resultResponseTimeoutCount;
@property(nonatomic) unsigned long long resultSendFailureCount; // @synthesize resultSendFailureCount=_resultSendFailureCount;
@property(nonatomic) unsigned long long resultServerUnreachableCount; // @synthesize resultServerUnreachableCount=_resultServerUnreachableCount;
@property(nonatomic) unsigned long long resultNetworkUnavailableCount; // @synthesize resultNetworkUnavailableCount=_resultNetworkUnavailableCount;
@property(nonatomic) unsigned long long resultSuccessCount; // @synthesize resultSuccessCount=_resultSuccessCount;
@property(nonatomic) unsigned long long captivePresentCount; // @synthesize captivePresentCount=_captivePresentCount;
@property(nonatomic) unsigned long long restrictedNetworkCount; // @synthesize restrictedNetworkCount=_restrictedNetworkCount;
@property(nonatomic) unsigned long long mptcpSuccessCount; // @synthesize mptcpSuccessCount=_mptcpSuccessCount;
@property(nonatomic) unsigned long long tfoSuccessCount; // @synthesize tfoSuccessCount=_tfoSuccessCount;
@property(nonatomic) unsigned long long connectionCount; // @synthesize connectionCount=_connectionCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasResultServerOrphanedCount;
- (int)StringAsProtocolType:(id)arg1;
- (id)protocolTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasProtocolType;
@property(nonatomic) int protocolType; // @synthesize protocolType=_protocolType;
- (void)setConnectionDurationBuckets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)connectionDurationBucketsAtIndex:(unsigned long long)arg1;
- (void)addConnectionDurationBuckets:(unsigned int)arg1;
- (void)clearConnectionDurationBuckets;
@property(readonly, nonatomic) unsigned int *connectionDurationBuckets;
@property(readonly, nonatomic) unsigned long long connectionDurationBucketsCount;
@property(nonatomic) _Bool hasExceededMssCount;
@property(nonatomic) _Bool hasAlternatePathCount;
@property(nonatomic) _Bool hasCaptivePresentFailedCount;
@property(nonatomic) _Bool hasRestrictedNetworkFailedCount;
@property(nonatomic) _Bool hasResultUnknownErrorCount;
@property(nonatomic) _Bool hasResultServerSessionExpiredCount;
@property(nonatomic) _Bool hasResultServerInterruptCount;
@property(nonatomic) _Bool hasResultServerDetachedCount;
@property(nonatomic) _Bool hasResultServerOfflineCount;
@property(nonatomic) _Bool hasResultServerBusyCount;
@property(nonatomic) _Bool hasResultConnectionResetCount;
@property(nonatomic) _Bool hasResultResponseTimeoutCount;
@property(nonatomic) _Bool hasResultSendFailureCount;
@property(nonatomic) _Bool hasResultServerUnreachableCount;
@property(nonatomic) _Bool hasResultNetworkUnavailableCount;
@property(nonatomic) _Bool hasResultSuccessCount;
@property(nonatomic) _Bool hasCaptivePresentCount;
@property(nonatomic) _Bool hasRestrictedNetworkCount;
@property(nonatomic) _Bool hasMptcpSuccessCount;
@property(nonatomic) _Bool hasTfoSuccessCount;
@property(nonatomic) _Bool hasConnectionCount;
- (int)StringAsInterfaceType:(id)arg1;
- (id)interfaceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasInterfaceType;
@property(nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

