//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject
{
    SSSQLiteDatabase *_database;
}

+ (_Bool)_setupDatabase:(id)arg1;
+ (void)_createDatabaseDirectory;
+ (id)accountUniqueIdentifierKey;
+ (id)newDefaultInstance;
- (id)database;
- (id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(_Bool)arg3;
- (_Bool)removeValueForDatabaseProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (_Bool)resetCacheForNewAccountID:(id)arg1;
- (_Bool)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2;
- (long long)localRevisionForAccountUniqueIdentifier:(id)arg1;
- (_Bool)setCurrentAccountUniqueIdentifier:(id)arg1;
- (id)currentAccountUniqueIdentifier;
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;
- (id)init;

@end
