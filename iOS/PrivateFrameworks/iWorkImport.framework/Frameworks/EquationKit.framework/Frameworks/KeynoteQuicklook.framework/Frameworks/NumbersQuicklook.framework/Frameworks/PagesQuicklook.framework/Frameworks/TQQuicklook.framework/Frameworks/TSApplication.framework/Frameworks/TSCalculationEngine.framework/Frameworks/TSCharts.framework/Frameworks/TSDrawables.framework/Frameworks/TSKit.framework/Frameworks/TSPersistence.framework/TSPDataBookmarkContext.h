//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSUManagedTemporaryDirectory;
@protocol OS_dispatch_queue;

@interface TSPDataBookmarkContext : NSObject
{
    TSUManagedTemporaryDirectory *_temporaryDirectory;
    NSMutableDictionary *_bookmarkDataURLsForFilenames;
    NSMutableDictionary *_digestStringsForFilenames;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)isEncryptedDataStorate:(id)arg1;
- (_Bool)bookmarkDataNeedsWriteForData:(id)arg1;
- (id)makeBookmarkDataForData:(id)arg1 filename:(id)arg2 options:(unsigned long long)arg3 error:(out id *)arg4;
- (id)init;

@end
