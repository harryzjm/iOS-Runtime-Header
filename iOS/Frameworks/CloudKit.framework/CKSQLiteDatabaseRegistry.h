//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTable.h"

@interface CKSQLiteDatabaseRegistry : CKSQLiteTable
{
}

+ (Class)entryClass;
+ (id)dbProperties;
- (id)databaseIDForDatabase:(id)arg1 error:(id *)arg2;
- (id)entryForDatabase:(id)arg1 refresh:(_Bool)arg2 error:(id *)arg3;
- (id)databaseWithID:(id)arg1;
- (id)registerDatabase:(id)arg1;

@end

