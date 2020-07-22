//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying>
{
    double _establishmentTime;
    double _postConnectSessionLifetime;
    unsigned long long _timestamp;
    NSString *_clientId;
    int _establishmentFailureError;
    NSString *_establishmentInterfaceName;
    int _establishmentSynRetransmits;
    NSMutableArray *_interfaceReports;
    int _postConnectSubflowAttemptCount;
    int _postConnectSubflowMaxSubflowCount;
    int _subflowSwitchingCount;
    NSMutableArray *_subflowSwitchingReports;
    _Bool _establishmentCellularFallback;
    _Bool _establishmentForcedTcpFallback;
    _Bool _establishmentSuccess;
    _Bool _establishmentTcpFallback;
    _Bool _postConnectMultiHomed;
    _Bool _postConnectSingleHomed;
    struct {
        unsigned int establishmentTime:1;
        unsigned int postConnectSessionLifetime:1;
        unsigned int timestamp:1;
        unsigned int establishmentFailureError:1;
        unsigned int establishmentSynRetransmits:1;
        unsigned int postConnectSubflowAttemptCount:1;
        unsigned int postConnectSubflowMaxSubflowCount:1;
        unsigned int subflowSwitchingCount:1;
        unsigned int establishmentCellularFallback:1;
        unsigned int establishmentForcedTcpFallback:1;
        unsigned int establishmentSuccess:1;
        unsigned int establishmentTcpFallback:1;
        unsigned int postConnectMultiHomed:1;
        unsigned int postConnectSingleHomed:1;
    } _has;
}

+ (Class)subflowSwitchingReportsType;
+ (Class)interfaceReportsType;
@property(retain, nonatomic) NSMutableArray *subflowSwitchingReports; // @synthesize subflowSwitchingReports=_subflowSwitchingReports;
@property(retain, nonatomic) NSMutableArray *interfaceReports; // @synthesize interfaceReports=_interfaceReports;
@property(nonatomic) int subflowSwitchingCount; // @synthesize subflowSwitchingCount=_subflowSwitchingCount;
@property(nonatomic) double postConnectSessionLifetime; // @synthesize postConnectSessionLifetime=_postConnectSessionLifetime;
@property(nonatomic) int postConnectSubflowMaxSubflowCount; // @synthesize postConnectSubflowMaxSubflowCount=_postConnectSubflowMaxSubflowCount;
@property(nonatomic) int postConnectSubflowAttemptCount; // @synthesize postConnectSubflowAttemptCount=_postConnectSubflowAttemptCount;
@property(nonatomic) _Bool postConnectSingleHomed; // @synthesize postConnectSingleHomed=_postConnectSingleHomed;
@property(nonatomic) _Bool postConnectMultiHomed; // @synthesize postConnectMultiHomed=_postConnectMultiHomed;
@property(nonatomic) _Bool establishmentForcedTcpFallback; // @synthesize establishmentForcedTcpFallback=_establishmentForcedTcpFallback;
@property(nonatomic) int establishmentSynRetransmits; // @synthesize establishmentSynRetransmits=_establishmentSynRetransmits;
@property(nonatomic) double establishmentTime; // @synthesize establishmentTime=_establishmentTime;
@property(nonatomic) _Bool establishmentCellularFallback; // @synthesize establishmentCellularFallback=_establishmentCellularFallback;
@property(nonatomic) _Bool establishmentTcpFallback; // @synthesize establishmentTcpFallback=_establishmentTcpFallback;
@property(nonatomic) int establishmentFailureError; // @synthesize establishmentFailureError=_establishmentFailureError;
@property(nonatomic) _Bool establishmentSuccess; // @synthesize establishmentSuccess=_establishmentSuccess;
@property(retain, nonatomic) NSString *establishmentInterfaceName; // @synthesize establishmentInterfaceName=_establishmentInterfaceName;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
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
- (id)subflowSwitchingReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subflowSwitchingReportsCount;
- (void)addSubflowSwitchingReports:(id)arg1;
- (void)clearSubflowSwitchingReports;
- (id)interfaceReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interfaceReportsCount;
- (void)addInterfaceReports:(id)arg1;
- (void)clearInterfaceReports;
@property(nonatomic) _Bool hasSubflowSwitchingCount;
@property(nonatomic) _Bool hasPostConnectSessionLifetime;
@property(nonatomic) _Bool hasPostConnectSubflowMaxSubflowCount;
@property(nonatomic) _Bool hasPostConnectSubflowAttemptCount;
@property(nonatomic) _Bool hasPostConnectSingleHomed;
@property(nonatomic) _Bool hasPostConnectMultiHomed;
@property(nonatomic) _Bool hasEstablishmentForcedTcpFallback;
@property(nonatomic) _Bool hasEstablishmentSynRetransmits;
@property(nonatomic) _Bool hasEstablishmentTime;
@property(nonatomic) _Bool hasEstablishmentCellularFallback;
@property(nonatomic) _Bool hasEstablishmentTcpFallback;
@property(nonatomic) _Bool hasEstablishmentFailureError;
@property(nonatomic) _Bool hasEstablishmentSuccess;
@property(readonly, nonatomic) _Bool hasEstablishmentInterfaceName;
@property(readonly, nonatomic) _Bool hasClientId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

