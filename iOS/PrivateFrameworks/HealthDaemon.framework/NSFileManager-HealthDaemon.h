//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (HealthDaemon)
- (_Bool)hd_removeAllFilesAtDirectoryPath:(id)arg1 error:(id *)arg2;
- (_Bool)hd_removeHFDDatabaseAtURL:(id)arg1 preserveCopy:(_Bool)arg2;
- (_Bool)hd_removeSQLiteDatabaseAtURL:(id)arg1 preserveCopy:(_Bool)arg2;
@end

