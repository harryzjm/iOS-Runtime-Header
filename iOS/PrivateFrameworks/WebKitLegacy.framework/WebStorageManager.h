//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WebStorageManager : NSObject
{
}

+ (void)closeIdleLocalStorageDatabases;
+ (void)setStorageDatabaseIdleInterval:(double)arg1;
+ (id)_storageDirectoryPath;
+ (id)sharedWebStorageManager;
- (void)syncFileSystemAndTrackerDatabase;
- (void)syncLocalStorage;
- (unsigned long long)diskUsageForOrigin:(id)arg1;
- (void)deleteOrigin:(id)arg1;
- (void)deleteAllOrigins;
- (id)origins;
- (id)init;

@end

