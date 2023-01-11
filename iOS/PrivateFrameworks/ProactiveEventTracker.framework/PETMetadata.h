//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@class NSString;

@interface PETMetadata : PBCodable <NSCopying>
{
    unsigned long long _uploadTime;
    NSString *_build;
    unsigned int _configVersion;
    NSString *_country;
    NSString *_device;
    NSString *_language;
    NSString *_platform;
    NSString *_pseudoDeviceId;
    _Bool _isGm;
    _Bool _isInternal;
    _Bool _isInternalCarry;
    _Bool _isSeed;
    _Bool _isTestingData;
    _Bool _isTrialUpload;
    struct {
        unsigned int uploadTime:1;
        unsigned int configVersion:1;
        unsigned int isGm:1;
        unsigned int isInternal:1;
        unsigned int isInternalCarry:1;
        unsigned int isSeed:1;
        unsigned int isTestingData:1;
        unsigned int isTrialUpload:1;
    } _has;
}

@property(nonatomic) _Bool isInternalCarry; // @synthesize isInternalCarry=_isInternalCarry;
@property(nonatomic) _Bool isTrialUpload; // @synthesize isTrialUpload=_isTrialUpload;
@property(retain, nonatomic) NSString *pseudoDeviceId; // @synthesize pseudoDeviceId=_pseudoDeviceId;
@property(nonatomic) _Bool isTestingData; // @synthesize isTestingData=_isTestingData;
@property(nonatomic) unsigned int configVersion; // @synthesize configVersion=_configVersion;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) _Bool isGm; // @synthesize isGm=_isGm;
@property(nonatomic) _Bool isSeed; // @synthesize isSeed=_isSeed;
@property(nonatomic) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(retain, nonatomic) NSString *build; // @synthesize build=_build;
@property(retain, nonatomic) NSString *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long uploadTime; // @synthesize uploadTime=_uploadTime;
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
@property(nonatomic) _Bool hasIsInternalCarry;
@property(nonatomic) _Bool hasIsTrialUpload;
@property(readonly, nonatomic) _Bool hasPseudoDeviceId;
@property(nonatomic) _Bool hasIsTestingData;
@property(nonatomic) _Bool hasConfigVersion;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(readonly, nonatomic) _Bool hasCountry;
@property(nonatomic) _Bool hasIsGm;
@property(nonatomic) _Bool hasIsSeed;
@property(nonatomic) _Bool hasIsInternal;
@property(readonly, nonatomic) _Bool hasBuild;
@property(readonly, nonatomic) _Bool hasDevice;
@property(readonly, nonatomic) _Bool hasPlatform;
@property(nonatomic) _Bool hasUploadTime;

@end
