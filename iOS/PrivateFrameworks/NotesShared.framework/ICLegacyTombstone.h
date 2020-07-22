//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICAccount, NSDate, NSString;

@interface ICLegacyTombstone
{
}

+ (id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2;
+ (void)removeLegacyTombstoneForFolder:(id)arg1;
+ (void)addLegacyTombstoneForFolder:(id)arg1;
+ (void)removeLegacyTombstoneForNote:(id)arg1;
+ (void)addLegacyTombstoneForNote:(id)arg1;
+ (void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2;
+ (id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3;
+ (id)allLegacyTombstones;
+ (id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 context:(id)arg3;
+ (id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (_Bool)hasTombstonePrefix:(id)arg1;
+ (short)tombstoneTypeFromRecordName:(id)arg1;
- (id)ic_loggingValues;
- (void)deleteFromLocalDatabase;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasDeletedFromCloud;
- (void)mergeDataFromRecord:(id)arg1;
- (id)newlyCreatedRecord;
- (_Bool)hasAllMandatoryFields;
- (_Bool)isInICloudAccount;
- (id)recordZoneName;
- (id)recordType;

// Remaining properties
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
@property(retain, nonatomic) NSString *contentHashAtImport; // @dynamic contentHashAtImport;
@property(retain, nonatomic) NSDate *modificationDateAtImport; // @dynamic modificationDateAtImport;
@property(nonatomic) short type; // @dynamic type;

@end

