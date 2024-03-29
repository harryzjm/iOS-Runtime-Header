//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteTable.h>

@interface CKDAssetHandleTable : CKSQLiteTable
{
}

+ (Class)entryClass;
+ (id)dbProperties;
- (id)interruptedAssetWithSignature:(id)arg1 error:(id *)arg2;
- (id)selectProperties:(id)arg1 inAssetHandlesWithStatus:(long long)arg2 error:(id *)arg3;
- (id)saveStatusAndChunkCount:(id)arg1;
- (id)oldestLastUsedTime;
- (id)saveLastUsedTime:(id)arg1;
- (id)saveChunkCount:(id)arg1;
- (id)saveStatus:(id)arg1;
- (id)saveOrInsert:(id)arg1;
- (id)assetHandleWithUUID:(id)arg1;
- (_Bool)assetHandleExistsInDatabase:(id)arg1;

@end

