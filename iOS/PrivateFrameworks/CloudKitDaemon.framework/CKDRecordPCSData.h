//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDChainPCSData, CKDSharePCSData, CKDZonePCSData, CKEncryptedData, CKRecordID, CKRecordZoneID, NSData, NSString;

@interface CKDRecordPCSData
{
    CKRecordID *_recordID;
    NSString *_recordType;
    CKRecordID *_parentID;
    CKDRecordPCSData *_parentPCSData;
    NSData *_chainParentPublicKeyID;
    CKDZonePCSData *_zonePCSData;
    CKRecordZoneID *_zoneID;
    NSData *_zoneishPublicKeyID;
    CKDSharePCSData *_sharePCSData;
    CKRecordID *_shareID;
    struct _OpaquePCSShareProtection *_signingPCS;
    CKDChainPCSData *_chainPCSData;
    CKEncryptedData *_encryptedPublicSharingKey;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataWithRecord:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CKEncryptedData *encryptedPublicSharingKey; // @synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey;
@property(retain, nonatomic) CKDChainPCSData *chainPCSData; // @synthesize chainPCSData=_chainPCSData;
@property(nonatomic) struct _OpaquePCSShareProtection *signingPCS; // @synthesize signingPCS=_signingPCS;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) NSData *zoneishPublicKeyID; // @synthesize zoneishPublicKeyID=_zoneishPublicKeyID;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKDZonePCSData *zonePCSData; // @synthesize zonePCSData=_zonePCSData;
@property(retain, nonatomic) NSData *chainParentPublicKeyID; // @synthesize chainParentPublicKeyID=_chainParentPublicKeyID;
@property(retain, nonatomic) CKDRecordPCSData *parentPCSData; // @synthesize parentPCSData=_parentPCSData;
@property(retain, nonatomic) CKRecordID *parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CKPropertiesDescription;
- (void)setPcs:(struct _OpaquePCSShareProtection *)arg1;
- (_Bool)shouldEncodePCSData;
- (id)itemID;
- (id)initWithRecord:(id)arg1;
- (id)initWithPCSData:(id)arg1 recordID:(id)arg2;

@end

