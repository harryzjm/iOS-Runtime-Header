//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICHasDatabaseScope-Protocol.h>
#import <NotesShared/NSObject-Protocol.h>

@class CKModifyRecordsOperation, CKRecord, CKRecordID, NSArray, NSError, NSManagedObjectContext, NSManagedObjectID, NSString;

@protocol ICCloudObject <NSObject, ICHasDatabaseScope>
+ (NSArray *)allCloudObjectsInContext:(NSManagedObjectContext *)arg1;
+ (id)newPlaceholderObjectForRecordID:(CKRecordID *)arg1 context:(NSManagedObjectContext *)arg2;
+ (id)newCloudObjectForRecord:(CKRecord *)arg1 context:(NSManagedObjectContext *)arg2;
+ (id)existingCloudObjectForRecordID:(CKRecordID *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSManagedObjectID *)objectID;
- (void)objectWasFetchedButDoesNotExistInCloud;
- (void)objectWasFetchedFromCloudWithRecord:(CKRecord *)arg1;
- (void)objectFailedToBePushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;
- (void)objectWasPushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1 serverRecord:(CKRecord *)arg2;
- (void)objectWillBePushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasDeletedFromCloud;
- (NSString *)loggingDescription;
- (void)fixBrokenReferences;
- (_Bool)isValidObject;
- (_Bool)isInICloudAccount;
- (NSString *)className;
- (NSArray *)objectsToBeDeletedBeforeThisObject;
- (void)deleteFromLocalDatabase;
- (_Bool)needsToBeFetchedFromCloud;
- (_Bool)needsToBePushedToCloud;
- (_Bool)needsToBeDeletedFromCloud;
- (void)didDeleteUserSpecificRecordID:(CKRecordID *)arg1;
- (void)didFailToSaveUserSpecificRecord:(CKRecord *)arg1 error:(NSError *)arg2;
- (void)didSaveUserSpecificRecord:(CKRecord *)arg1;
- (void)didFetchUserSpecificRecord:(CKRecord *)arg1;
- (CKRecord *)newlyCreatedUserSpecificRecord;
- (CKRecordID *)userSpecificRecordID;
- (_Bool)wantsUserSpecificRecord;
- (_Bool)needsToSaveUserSpecificRecord;
- (void)mergeDataFromRecord:(CKRecord *)arg1;
- (CKRecord *)newlyCreatedRecord;
- (NSString *)recordType;
- (CKRecordID *)recordID;
@end
