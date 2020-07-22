//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SetupAssistant/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BYBackupMetadata : PBCodable <NSCopying>
{
    unsigned int _appAnalyticsOptIn;
    unsigned int _deviceAnalyticsOptIn;
    unsigned int _homeButtonHapticKind;
    NSData *_nanoRegistryData;
    unsigned int _version;
    _Bool _findMyiPhoneOptIn;
    _Bool _locationServicesOptIn;
    _Bool _siriOptIn;
    struct {
        unsigned int appAnalyticsOptIn:1;
        unsigned int deviceAnalyticsOptIn:1;
        unsigned int homeButtonHapticKind:1;
        unsigned int findMyiPhoneOptIn:1;
        unsigned int locationServicesOptIn:1;
        unsigned int siriOptIn:1;
    } _has;
}

@property(nonatomic) _Bool siriOptIn; // @synthesize siriOptIn=_siriOptIn;
@property(nonatomic) _Bool findMyiPhoneOptIn; // @synthesize findMyiPhoneOptIn=_findMyiPhoneOptIn;
@property(nonatomic) _Bool locationServicesOptIn; // @synthesize locationServicesOptIn=_locationServicesOptIn;
@property(nonatomic) unsigned int appAnalyticsOptIn; // @synthesize appAnalyticsOptIn=_appAnalyticsOptIn;
@property(nonatomic) unsigned int deviceAnalyticsOptIn; // @synthesize deviceAnalyticsOptIn=_deviceAnalyticsOptIn;
@property(nonatomic) unsigned int homeButtonHapticKind; // @synthesize homeButtonHapticKind=_homeButtonHapticKind;
@property(retain, nonatomic) NSData *nanoRegistryData; // @synthesize nanoRegistryData=_nanoRegistryData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
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
@property(nonatomic) _Bool hasSiriOptIn;
@property(nonatomic) _Bool hasFindMyiPhoneOptIn;
@property(nonatomic) _Bool hasLocationServicesOptIn;
@property(nonatomic) _Bool hasAppAnalyticsOptIn;
@property(nonatomic) _Bool hasDeviceAnalyticsOptIn;
@property(nonatomic) _Bool hasHomeButtonHapticKind;
@property(readonly, nonatomic) _Bool hasNanoRegistryData;

@end
