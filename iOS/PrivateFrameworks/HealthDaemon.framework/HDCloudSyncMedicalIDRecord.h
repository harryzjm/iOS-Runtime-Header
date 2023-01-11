//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCloudSyncCodableMedicalID, HDCodableMedicalIDData, NSArray;

@interface HDCloudSyncMedicalIDRecord
{
    HDCloudSyncCodableMedicalID *_underlyingCodableMedicalIDMessage;
}

+ (_Bool)hasFutureSchema:(id)arg1;
+ (id)recordType;
+ (_Bool)requiresUnderlyingMessage;
+ (_Bool)isMedicalIDRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
- (void).cxx_destruct;
- (id)serializeUnderlyingMessage;
- (id)description;
- (void)addMedicalIDEvent:(id)arg1;
@property(readonly, nonatomic) NSArray *medicalIDLogs;
@property(retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)initInZone:(id)arg1;
- (id)initInSyncCircle:(id)arg1;

@end
