//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCClientZone, BRCPQLConnection, CKServerChangeToken, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface BRCPendingChangesStream : NSObject
{
    NSURL *_databaseURL;
    NSError *_error;
    BRCPQLConnection *_db;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)saveError;
- (void)destroyDatabaseOnQueue:(_Bool)arg1;
- (void)destroyDatabase;
- (void)_destroyDatabase;
- (_Bool)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6;
- (long long)_recordTypeFromRecordID:(id)arg1 isShare:(_Bool)arg2 isDelete:(_Bool)arg3;
- (_Bool)enumerateRecordsOfType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)fetchTokenState:(CDUnknownBlockType)arg1;
- (void)_openDB;
- (void)_createSchemaIfNecessary;
- (id)initWithServerZone:(id)arg1;
- (void)_dbBecameCorrupted;

@end

