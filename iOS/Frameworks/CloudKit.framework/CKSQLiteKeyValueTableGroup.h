//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTableGroup.h"

@class CKSQLiteKeyValueStore;

@interface CKSQLiteKeyValueTableGroup : CKSQLiteTableGroup
{
    CKSQLiteKeyValueStore *_store;
}

+ (id)keyValueStoreInDatabase:(id)arg1;
- (void).cxx_destruct;
- (id)createTables;

@end

