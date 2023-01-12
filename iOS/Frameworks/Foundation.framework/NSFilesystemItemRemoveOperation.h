//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOperation.h"

@class NSError, NSFileManager, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation
{
    NSFileManager *_fm;
    NSString *_removePath;
    NSError *_error;
    void *_state;
}

+ (id)filesystemItemRemoveOperationWithPath:(id)arg1 fileManager:(id)arg2;
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
@property(readonly) NSFileManager *fileManager; // @synthesize fileManager=_fm;
- (void)dealloc;
- (void)main;
- (id)initWithPath:(id)arg1 fileManager:(id)arg2;
- (_Bool)_delegateSaysProceedAfterError:(id)arg1 removingItemAtPath:(id)arg2;
- (_Bool)_delegateSaysShouldRemoveItemAtPath:(id)arg1;
- (void)_setError:(id)arg1;
- (id)error;

@end

