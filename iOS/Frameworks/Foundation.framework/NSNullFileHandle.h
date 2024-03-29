//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileHandle.h"

__attribute__((visibility("hidden")))
@interface NSNullFileHandle : NSFileHandle
{
}

- (CDUnknownBlockType)readabilityHandler;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)writeabilityHandler;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (int)fileDescriptor;
- (_Bool)closeAndReturnError:(out id *)arg1;
- (void)closeFile;
- (_Bool)synchronizeAndReturnError:(out id *)arg1;
- (void)synchronizeFile;
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
- (unsigned long long)seekToEndOfFile;
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;
- (unsigned long long)offsetInFile;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;
- (void)writeData:(id)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;
- (id)readDataToEndOfFile;
- (id)availableData;

@end

