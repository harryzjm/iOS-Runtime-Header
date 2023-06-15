//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRI)
+ (id)triArbitraryFileInDirWithPath:(id)arg1;
+ (_Bool)triIdempotentCreateDirectoryOrFaultWithPath:(id)arg1;
+ (_Bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;
+ (_Bool)triHasFileProtection:(id)arg1;
- (_Bool)triRemoveItemAtPath:(id)arg1 error:(id *)arg2;
- (id)triCreateDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;
- (id)triPath:(id)arg1 relativeToParentPath:(id)arg2;
- (_Bool)triSafeCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
@end

