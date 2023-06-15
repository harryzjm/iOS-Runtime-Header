//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CADDiagnosticsDatabaseCollectorDBInfo : NSObject
{
    NSURL *_outputURL;
    NSURL *_walOutputURL;
    struct CalDatabase *_mainDatabase;
    void *_auxDatabase;
    NSString *_movedAsideDatabasePath;
}

- (void).cxx_destruct;
- (_Bool)redactAndCompress:(id)arg1 context:(id)arg2;
- (_Bool)collectMovedAsideDatabaseWithoutRedacting:(id)arg1;
- (_Bool)redactAndCollectMovedAsideDatabase:(id)arg1;
- (_Bool)backupDatabaseFromPath:(id)arg1 toPath:(id)arg2 context:(id)arg3;
- (void)collectMovedAsideDatabase:(id)arg1;
- (void)collectStandardDatabase:(id)arg1;
- (void)collect:(id)arg1;
- (void)determineExpectedOutputFiles:(id)arg1;
- (void)dealloc;
- (id)initWithPossiblyUnmigratedDatabaseDirectory:(id)arg1 context:(id)arg2;
- (id)initWithMainDatabase:(struct CalDatabase *)arg1 auxDatabase:(void *)arg2 context:(id)arg3;
- (id)initWithMainDatabase:(struct CalDatabase *)arg1 context:(id)arg2;

@end

