//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WebDatabaseManager : NSObject
{
}

+ (void)scheduleEmptyDatabaseRemoval;
+ (void)removeEmptyDatabaseFiles;
+ (id)sharedWebDatabaseManager;
- (void)deleteAllIndexedDatabases;
- (_Bool)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (_Bool)deleteOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)databasesWithOrigin:(id)arg1;
- (id)origins;
- (id)init;

@end
