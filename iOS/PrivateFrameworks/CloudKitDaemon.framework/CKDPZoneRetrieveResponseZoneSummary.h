//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDate, CKDPZone, CKDPZoneCapabilities, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying>
{
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
    CKDPZoneCapabilities *_capabilities;
    NSData *_clientChangeToken;
    NSData *_currentServerContinuationToken;
    int _deviceCount;
    CKDPZone *_targetZone;
    NSString *_zonePcsModificationDevice;
    CKDPDate *_zonePcsModificationTime;
    _Bool _zoneKeyRollAllowed;
    _Bool _zoneishPcsNeedsRolled;
    struct {
        unsigned int assetQuotaUsage:1;
        unsigned int metadataQuotaUsage:1;
        unsigned int deviceCount:1;
        unsigned int zoneKeyRollAllowed:1;
        unsigned int zoneishPcsNeedsRolled:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *zonePcsModificationDevice; // @synthesize zonePcsModificationDevice=_zonePcsModificationDevice;
@property(retain, nonatomic) CKDPDate *zonePcsModificationTime; // @synthesize zonePcsModificationTime=_zonePcsModificationTime;
@property(nonatomic) _Bool zoneKeyRollAllowed; // @synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed;
@property(nonatomic) _Bool zoneishPcsNeedsRolled; // @synthesize zoneishPcsNeedsRolled=_zoneishPcsNeedsRolled;
@property(retain, nonatomic) CKDPZoneCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) long long metadataQuotaUsage; // @synthesize metadataQuotaUsage=_metadataQuotaUsage;
@property(nonatomic) long long assetQuotaUsage; // @synthesize assetQuotaUsage=_assetQuotaUsage;
@property(nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *currentServerContinuationToken; // @synthesize currentServerContinuationToken=_currentServerContinuationToken;
@property(retain, nonatomic) CKDPZone *targetZone; // @synthesize targetZone=_targetZone;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasZonePcsModificationDevice;
@property(readonly, nonatomic) _Bool hasZonePcsModificationTime;
@property(nonatomic) _Bool hasZoneKeyRollAllowed;
@property(nonatomic) _Bool hasZoneishPcsNeedsRolled;
@property(readonly, nonatomic) _Bool hasCapabilities;
@property(nonatomic) _Bool hasMetadataQuotaUsage;
@property(nonatomic) _Bool hasAssetQuotaUsage;
@property(nonatomic) _Bool hasDeviceCount;
@property(readonly, nonatomic) _Bool hasClientChangeToken;
@property(readonly, nonatomic) _Bool hasCurrentServerContinuationToken;
@property(readonly, nonatomic) _Bool hasTargetZone;

@end
