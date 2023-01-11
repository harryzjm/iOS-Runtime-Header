//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FezAdditions)
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;
- (_Bool)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4 asCopy:(_Bool)arg5;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (_Bool)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;
- (_Bool)_isPathOnMissingVolume:(id)arg1;
- (id)_randomSimilarFilePathAsPath:(id)arg1;
- (id)_randomTemporaryPathWithFileName:(id)arg1 withAppendedPathComponent:(id)arg2;
- (id)_randomTemporaryPathWithFileName:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 withAppendedPathComponent:(id)arg3;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 withAppendedPathComponent:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1;
- (id)_generateLinkForURL:(id)arg1;
@end
