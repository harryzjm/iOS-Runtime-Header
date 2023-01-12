//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDSharingAuthorizationsEntity
{
}

+ (_Bool)deleteAllMarkedSharingAuthorizationsWithTransaction:(id)arg1 error:(id *)arg2;
+ (_Bool)markSharingAuthorizationsForDeletion:(id)arg1 recipientIdentifier:(id)arg2 databaseTransaction:(id)arg3 error:(id *)arg4;
+ (_Bool)deleteAllSharingAuthorizationsForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteSharingAuthorizations:(id)arg1 recipientIdentifier:(id)arg2 databaseTransaction:(id)arg3 error:(id *)arg4;
+ (id)recipientIdentifiersForSharingAuthorization:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;
+ (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 includeMarkedForDeletion:(_Bool)arg3 error:(id *)arg4;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)arg1 databaseTransaction:(id)arg2 error:(id *)arg3;
+ (_Bool)addSharingAuthorizations:(id)arg1 forRecipientIdentifier:(id)arg2 databaseTransaction:(id)arg3 error:(id *)arg4;
+ (_Bool)insertOrReplaceWithRecipientIdentifier:(id)arg1 sharingAuthorizations:(id)arg2 databaseTransaction:(id)arg3 error:(id *)arg4;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;

@end
