//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDSharePCSData, CKRecordID, CKRecordZoneID, NSData, NSDate;

@interface CKDZonePCSData
{
    struct _OpaquePCSShareProtection *_zoneishPCS;
    CKRecordZoneID *_zoneID;
    NSData *_zoneishPCSData;
    NSData *_zoneishPublicKeyID;
    CKDSharePCSData *_sharePCSData;
    CKRecordID *_shareID;
    NSDate *_zonePCSModificationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataWithZone:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *zonePCSModificationDate; // @synthesize zonePCSModificationDate=_zonePCSModificationDate;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) NSData *zoneishPublicKeyID; // @synthesize zoneishPublicKeyID=_zoneishPublicKeyID;
@property(copy, nonatomic) NSData *zoneishPCSData; // @synthesize zoneishPCSData=_zoneishPCSData;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)itemID;
@property(nonatomic) struct _OpaquePCSShareProtection *zoneishPCS;
- (void)dealloc;
- (id)initWithZone:(id)arg1;

@end

