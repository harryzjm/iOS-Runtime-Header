//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKEncryptedDate, CKRecordZoneID, CKServerChangeToken, NSData, NSDate, NSString;

@interface CKRecordZone : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _needsZoneishPCSRolled;
    _Bool _zoneKeyRollAllowed;
    _Bool _serializeProtectionData;
    int _deviceCount;
    CKRecordZoneID *_zoneID;
    unsigned long long _capabilities;
    CKContainerID *_containerID;
    CKServerChangeToken *_currentServerChangeToken;
    NSData *_clientChangeToken;
    NSData *_protectionData;
    NSString *_protectionEtag;
    NSData *_zoneishProtectionData;
    NSDate *_zonePCSModificationDate;
    CKEncryptedDate *_encryptedLastZoneishPCSRollDate;
    NSData *_pcsKeyID;
    NSData *_zoneishKeyID;
    NSString *_previousProtectionEtag;
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultRecordZone;
@property(nonatomic) _Bool serializeProtectionData; // @synthesize serializeProtectionData=_serializeProtectionData;
@property(nonatomic) long long metadataQuotaUsage; // @synthesize metadataQuotaUsage=_metadataQuotaUsage;
@property(nonatomic) long long assetQuotaUsage; // @synthesize assetQuotaUsage=_assetQuotaUsage;
@property(retain, nonatomic) NSString *previousProtectionEtag; // @synthesize previousProtectionEtag=_previousProtectionEtag;
@property(retain, nonatomic) NSData *zoneishKeyID; // @synthesize zoneishKeyID=_zoneishKeyID;
@property(retain, nonatomic) NSData *pcsKeyID; // @synthesize pcsKeyID=_pcsKeyID;
@property(retain, nonatomic) CKEncryptedDate *encryptedLastZoneishPCSRollDate; // @synthesize encryptedLastZoneishPCSRollDate=_encryptedLastZoneishPCSRollDate;
@property(retain, nonatomic) NSDate *zonePCSModificationDate; // @synthesize zonePCSModificationDate=_zonePCSModificationDate;
@property(nonatomic) _Bool zoneKeyRollAllowed; // @synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed;
@property(nonatomic) _Bool needsZoneishPCSRolled; // @synthesize needsZoneishPCSRolled=_needsZoneishPCSRolled;
@property(retain, nonatomic) NSData *zoneishProtectionData; // @synthesize zoneishProtectionData=_zoneishProtectionData;
@property(retain, nonatomic) NSString *protectionEtag; // @synthesize protectionEtag=_protectionEtag;
@property(retain, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) CKServerChangeToken *currentServerChangeToken; // @synthesize currentServerChangeToken=_currentServerChangeToken;
@property(nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKPropertiesDescription;
@property(readonly, nonatomic) NSData *currentServerContinuationToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1;
- (id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2;

@end

