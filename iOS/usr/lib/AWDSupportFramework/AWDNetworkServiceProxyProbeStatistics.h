//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDNetworkServiceProxyProbeStatistics : PBCodable <NSCopying>
{
    unsigned long long _alternateProbeTimeMsecs;
    unsigned long long _genericDNSProbeTimeMsecs;
    unsigned long long _genericProbeTimeMsecs;
    unsigned long long _timestamp;
    int _interfaceType;
    NSString *_label;
    int _protocolType;
    struct {
        unsigned int alternateProbeTimeMsecs:1;
        unsigned int genericDNSProbeTimeMsecs:1;
        unsigned int genericProbeTimeMsecs:1;
        unsigned int timestamp:1;
        unsigned int interfaceType:1;
        unsigned int protocolType:1;
    } _has;
}

@property(nonatomic) unsigned long long genericDNSProbeTimeMsecs; // @synthesize genericDNSProbeTimeMsecs=_genericDNSProbeTimeMsecs;
@property(nonatomic) unsigned long long genericProbeTimeMsecs; // @synthesize genericProbeTimeMsecs=_genericProbeTimeMsecs;
@property(nonatomic) unsigned long long alternateProbeTimeMsecs; // @synthesize alternateProbeTimeMsecs=_alternateProbeTimeMsecs;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
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
- (int)StringAsProtocolType:(id)arg1;
- (id)protocolTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasProtocolType;
@property(nonatomic) int protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) _Bool hasGenericDNSProbeTimeMsecs;
@property(nonatomic) _Bool hasGenericProbeTimeMsecs;
@property(nonatomic) _Bool hasAlternateProbeTimeMsecs;
@property(readonly, nonatomic) _Bool hasLabel;
- (int)StringAsInterfaceType:(id)arg1;
- (id)interfaceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasInterfaceType;
@property(nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

