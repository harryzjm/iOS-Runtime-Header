//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PETSchemaPETMetadata : PBCodable
{
    unsigned long long _upload_time;
    NSString *_platform;
    NSString *_device;
    NSString *_build;
    _Bool _is_internal;
    _Bool _is_seed;
    _Bool _is_gm;
    NSString *_country;
    NSString *_language;
    unsigned int _config_version;
    NSString *_pseudo_device_id;
    _Bool _is_internal_carry;
    _Bool _is_config_enabled;
    NSString *_message_group;
    NSString *_msg_type;
    _Bool _is_testing_data;
    _Bool _is_trial_upload;
    struct {
        unsigned int upload_time:1;
        unsigned int is_internal:1;
        unsigned int is_seed:1;
        unsigned int is_gm:1;
        unsigned int config_version:1;
        unsigned int is_internal_carry:1;
        unsigned int is_config_enabled:1;
        unsigned int is_testing_data:1;
        unsigned int is_trial_upload:1;
    } _has;
    _Bool _hasPlatform;
    _Bool _hasDevice;
    _Bool _hasBuild;
    _Bool _hasCountry;
    _Bool _hasLanguage;
    _Bool _hasPseudo_device_id;
    _Bool _hasMessage_group;
    _Bool _hasMsg_type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMsg_type; // @synthesize hasMsg_type=_hasMsg_type;
@property(nonatomic) _Bool hasMessage_group; // @synthesize hasMessage_group=_hasMessage_group;
@property(nonatomic) _Bool hasPseudo_device_id; // @synthesize hasPseudo_device_id=_hasPseudo_device_id;
@property(nonatomic) _Bool hasLanguage; // @synthesize hasLanguage=_hasLanguage;
@property(nonatomic) _Bool hasCountry; // @synthesize hasCountry=_hasCountry;
@property(nonatomic) _Bool hasBuild; // @synthesize hasBuild=_hasBuild;
@property(nonatomic) _Bool hasDevice; // @synthesize hasDevice=_hasDevice;
@property(nonatomic) _Bool hasPlatform; // @synthesize hasPlatform=_hasPlatform;
@property(nonatomic) _Bool is_trial_upload; // @synthesize is_trial_upload=_is_trial_upload;
@property(nonatomic) _Bool is_testing_data; // @synthesize is_testing_data=_is_testing_data;
@property(copy, nonatomic) NSString *msg_type; // @synthesize msg_type=_msg_type;
@property(copy, nonatomic) NSString *message_group; // @synthesize message_group=_message_group;
@property(nonatomic) _Bool is_config_enabled; // @synthesize is_config_enabled=_is_config_enabled;
@property(nonatomic) _Bool is_internal_carry; // @synthesize is_internal_carry=_is_internal_carry;
@property(copy, nonatomic) NSString *pseudo_device_id; // @synthesize pseudo_device_id=_pseudo_device_id;
@property(nonatomic) unsigned int config_version; // @synthesize config_version=_config_version;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) _Bool is_gm; // @synthesize is_gm=_is_gm;
@property(nonatomic) _Bool is_seed; // @synthesize is_seed=_is_seed;
@property(nonatomic) _Bool is_internal; // @synthesize is_internal=_is_internal;
@property(copy, nonatomic) NSString *build; // @synthesize build=_build;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) unsigned long long upload_time; // @synthesize upload_time=_upload_time;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIs_trial_upload;
@property(nonatomic) _Bool hasIs_testing_data;
@property(nonatomic) _Bool hasIs_config_enabled;
@property(nonatomic) _Bool hasIs_internal_carry;
@property(nonatomic) _Bool hasConfig_version;
@property(nonatomic) _Bool hasIs_gm;
@property(nonatomic) _Bool hasIs_seed;
@property(nonatomic) _Bool hasIs_internal;
@property(nonatomic) _Bool hasUpload_time;

@end
