//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableProvenance : PBCodable <NSCopying>
{
    NSData *_deviceUUID;
    NSString *_originBuild;
    int _originMajorVersion;
    int _originMinorVersion;
    int _originPatchVersion;
    NSString *_originProductType;
    NSData *_sourceUUID;
    NSString *_sourceVersion;
    NSString *_timeZoneName;
    struct {
        unsigned int originMajorVersion:1;
        unsigned int originMinorVersion:1;
        unsigned int originPatchVersion:1;
    } _has;
}

@property(nonatomic) int originPatchVersion; // @synthesize originPatchVersion=_originPatchVersion;
@property(nonatomic) int originMinorVersion; // @synthesize originMinorVersion=_originMinorVersion;
@property(nonatomic) int originMajorVersion; // @synthesize originMajorVersion=_originMajorVersion;
@property(retain, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(retain, nonatomic) NSString *originProductType; // @synthesize originProductType=_originProductType;
@property(retain, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) NSData *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(retain, nonatomic) NSData *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
@property(retain, nonatomic) NSString *originBuild; // @synthesize originBuild=_originBuild;
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
@property(nonatomic) _Bool hasOriginPatchVersion;
@property(nonatomic) _Bool hasOriginMinorVersion;
@property(nonatomic) _Bool hasOriginMajorVersion;
@property(readonly, nonatomic) _Bool hasTimeZoneName;
@property(readonly, nonatomic) _Bool hasOriginProductType;
@property(readonly, nonatomic) _Bool hasSourceVersion;
@property(readonly, nonatomic) _Bool hasDeviceUUID;
@property(readonly, nonatomic) _Bool hasSourceUUID;
@property(readonly, nonatomic) _Bool hasOriginBuild;
- (id)decodedDeviceUUID;
- (id)decodedSourceUUID;

@end

