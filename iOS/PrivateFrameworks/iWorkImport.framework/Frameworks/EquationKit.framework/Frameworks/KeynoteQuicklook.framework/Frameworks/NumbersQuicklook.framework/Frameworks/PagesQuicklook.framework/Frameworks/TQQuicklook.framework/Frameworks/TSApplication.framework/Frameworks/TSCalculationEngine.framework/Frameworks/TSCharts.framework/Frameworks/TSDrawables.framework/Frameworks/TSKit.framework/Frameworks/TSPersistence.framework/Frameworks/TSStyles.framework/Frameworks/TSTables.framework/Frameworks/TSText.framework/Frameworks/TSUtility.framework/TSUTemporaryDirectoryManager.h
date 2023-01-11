//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject
{
    NSURL *_baseDirectoryURL;
}

+ (id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2;
+ (id)sharedManager;
+ (Class)managedTemporaryDirectoryClass;
+ (_Bool)shouldExcludeFromBackup;
+ (id)baseDirectoryURL;
- (void).cxx_destruct;
- (id)newDirectoryWithFilename:(id)arg1;
- (void)_excludeFromBackupAsynchronously;
- (void)_clearDirectories:(id)arg1;
- (void)_clearDirectoriesAsynchronously:(id)arg1;
- (id)_readDirectories;
- (id)init;

@end
