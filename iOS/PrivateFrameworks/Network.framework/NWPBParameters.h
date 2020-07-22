//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NWPBEndpoint, NWPBInterface;

@interface NWPBParameters : PBCodable <NSCopying>
{
    CDStruct_95bda58d _prohibitedInterfaceSubTypes;
    CDStruct_95bda58d _prohibitedInterfaceTypes;
    NSString *_account;
    unsigned int _addressFamily;
    int _dataMode;
    NSString *_effectiveBundleID;
    NSString *_effectiveProcessUUID;
    unsigned int _ipProtocol;
    NWPBEndpoint *_localEndpoint;
    NSData *_metadata;
    NSMutableArray *_preferredAgents;
    NSMutableArray *_prohibitedAgents;
    NSMutableArray *_prohibitedInterfaces;
    NSString *_realProcessUUID;
    NSMutableArray *_requiredAgents;
    NWPBInterface *_requiredInterface;
    int _requiredInterfaceType;
    unsigned int _trafficClass;
    NSString *_url;
    _Bool _fastOpen;
    _Bool _keepalive;
    _Bool _longOutstandingQueries;
    unsigned int _multipathService;
    _Bool _noFallback;
    _Bool _prohibitExpensive;
    _Bool _reduceBuffering;
    _Bool _reuseLocalAddress;
    _Bool _useAWDL;
    _Bool _useP2P;
    struct {
        unsigned int addressFamily:1;
        unsigned int dataMode:1;
        unsigned int ipProtocol:1;
        unsigned int requiredInterfaceType:1;
        unsigned int trafficClass:1;
        unsigned int fastOpen:1;
        unsigned int keepalive:1;
        unsigned int longOutstandingQueries:1;
        unsigned int multipath:1;
        unsigned int noFallback:1;
        unsigned int prohibitExpensive:1;
        unsigned int reduceBuffering:1;
        unsigned int reuseLocalAddress:1;
        unsigned int useAWDL:1;
        unsigned int useP2P:1;
    } _has;
}

+ (Class)preferredAgentsType;
+ (Class)requiredAgentsType;
+ (Class)prohibitedAgentsType;
+ (Class)prohibitedInterfacesType;
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSMutableArray *preferredAgents; // @synthesize preferredAgents=_preferredAgents;
@property(retain, nonatomic) NSMutableArray *requiredAgents; // @synthesize requiredAgents=_requiredAgents;
@property(retain, nonatomic) NSMutableArray *prohibitedAgents; // @synthesize prohibitedAgents=_prohibitedAgents;
@property(retain, nonatomic) NSMutableArray *prohibitedInterfaces; // @synthesize prohibitedInterfaces=_prohibitedInterfaces;
@property(retain, nonatomic) NWPBInterface *requiredInterface; // @synthesize requiredInterface=_requiredInterface;
@property(retain, nonatomic) NWPBEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(nonatomic) _Bool keepalive; // @synthesize keepalive=_keepalive;
@property(nonatomic) unsigned int multipathService; // @synthesize multipathService=_multipathService;
@property(nonatomic) _Bool noFallback; // @synthesize noFallback=_noFallback;
@property(nonatomic) _Bool reuseLocalAddress; // @synthesize reuseLocalAddress=_reuseLocalAddress;
@property(nonatomic) _Bool useP2P; // @synthesize useP2P=_useP2P;
@property(nonatomic) _Bool useAWDL; // @synthesize useAWDL=_useAWDL;
@property(nonatomic) _Bool longOutstandingQueries; // @synthesize longOutstandingQueries=_longOutstandingQueries;
@property(nonatomic) _Bool reduceBuffering; // @synthesize reduceBuffering=_reduceBuffering;
@property(nonatomic) _Bool fastOpen; // @synthesize fastOpen=_fastOpen;
@property(nonatomic) _Bool prohibitExpensive; // @synthesize prohibitExpensive=_prohibitExpensive;
@property(nonatomic) unsigned int trafficClass; // @synthesize trafficClass=_trafficClass;
@property(nonatomic) unsigned int addressFamily; // @synthesize addressFamily=_addressFamily;
@property(nonatomic) unsigned int ipProtocol; // @synthesize ipProtocol=_ipProtocol;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *realProcessUUID; // @synthesize realProcessUUID=_realProcessUUID;
@property(retain, nonatomic) NSString *effectiveProcessUUID; // @synthesize effectiveProcessUUID=_effectiveProcessUUID;
@property(retain, nonatomic) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_effectiveBundleID;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMetadata;
- (id)preferredAgentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredAgentsCount;
- (void)addPreferredAgents:(id)arg1;
- (void)clearPreferredAgents;
- (id)requiredAgentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredAgentsCount;
- (void)addRequiredAgents:(id)arg1;
- (void)clearRequiredAgents;
- (id)prohibitedAgentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)prohibitedAgentsCount;
- (void)addProhibitedAgents:(id)arg1;
- (void)clearProhibitedAgents;
- (id)prohibitedInterfacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)prohibitedInterfacesCount;
- (void)addProhibitedInterfaces:(id)arg1;
- (void)clearProhibitedInterfaces;
- (int)StringAsProhibitedInterfaceSubTypes:(id)arg1;
- (id)prohibitedInterfaceSubTypesAsString:(int)arg1;
- (void)setProhibitedInterfaceSubTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)prohibitedInterfaceSubTypesAtIndex:(unsigned long long)arg1;
- (void)addProhibitedInterfaceSubTypes:(int)arg1;
- (void)clearProhibitedInterfaceSubTypes;
@property(readonly, nonatomic) int *prohibitedInterfaceSubTypes;
@property(readonly, nonatomic) unsigned long long prohibitedInterfaceSubTypesCount;
- (int)StringAsProhibitedInterfaceTypes:(id)arg1;
- (id)prohibitedInterfaceTypesAsString:(int)arg1;
- (void)setProhibitedInterfaceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)prohibitedInterfaceTypesAtIndex:(unsigned long long)arg1;
- (void)addProhibitedInterfaceTypes:(int)arg1;
- (void)clearProhibitedInterfaceTypes;
@property(readonly, nonatomic) int *prohibitedInterfaceTypes;
@property(readonly, nonatomic) unsigned long long prohibitedInterfaceTypesCount;
@property(readonly, nonatomic) _Bool hasRequiredInterface;
@property(readonly, nonatomic) _Bool hasLocalEndpoint;
@property(nonatomic) _Bool hasKeepalive;
@property(nonatomic) _Bool hasMultipath;
@property(nonatomic) _Bool hasNoFallback;
@property(nonatomic) _Bool hasReuseLocalAddress;
@property(nonatomic) _Bool hasUseP2P;
@property(nonatomic) _Bool hasUseAWDL;
@property(nonatomic) _Bool hasLongOutstandingQueries;
@property(nonatomic) _Bool hasReduceBuffering;
@property(nonatomic) _Bool hasFastOpen;
@property(nonatomic) _Bool hasProhibitExpensive;
- (int)StringAsRequiredInterfaceType:(id)arg1;
- (id)requiredInterfaceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequiredInterfaceType;
@property(nonatomic) int requiredInterfaceType; // @synthesize requiredInterfaceType=_requiredInterfaceType;
- (int)StringAsDataMode:(id)arg1;
- (id)dataModeAsString:(int)arg1;
@property(nonatomic) _Bool hasDataMode;
@property(nonatomic) int dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) _Bool hasTrafficClass;
@property(nonatomic) _Bool hasAddressFamily;
@property(nonatomic) _Bool hasIpProtocol;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasRealProcessUUID;
@property(readonly, nonatomic) _Bool hasEffectiveProcessUUID;
@property(readonly, nonatomic) _Bool hasEffectiveBundleID;
@property(readonly, nonatomic) _Bool hasAccount;
- (void)dealloc;

@end

