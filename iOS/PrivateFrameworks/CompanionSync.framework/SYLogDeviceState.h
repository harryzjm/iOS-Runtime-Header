//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SYLogDeviceState : PBCodable
{
    NSString *_buildVersion;
    NSString *_deviceClass;
    NSString *_identifier;
    unsigned int _state;
    struct {
        unsigned int state:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasState;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool hasBuildVersion;
@property(readonly, nonatomic) _Bool hasDeviceClass;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

