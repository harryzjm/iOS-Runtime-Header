//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying>
{
    int _configuration;
    int _configurationExtension;
    unsigned int _maxBandwidth;
    struct {
        unsigned int configurationExtension:1;
    } _has;
}

+ (int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2;
@property(nonatomic) unsigned int maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) int configuration; // @synthesize configuration=_configuration;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsConfigurationExtension:(id)arg1;
- (id)configurationExtensionAsString:(int)arg1;
@property(nonatomic) _Bool hasConfigurationExtension;
@property(nonatomic) int configurationExtension; // @synthesize configurationExtension=_configurationExtension;
- (int)StringAsConfiguration:(id)arg1;
- (id)configurationAsString:(int)arg1;
- (id)newBandwidthConfigurations;

@end
