//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSProgress;

__attribute__((visibility("hidden")))
@interface _FPCopyFileStatus : NSObject
{
    int _copyError;
    NSProgress *_progress;
    NSMutableDictionary *_lastBytesCopiedByFile;
}

- (void).cxx_destruct;
@property int copyError; // @synthesize copyError=_copyError;
@property(retain) NSMutableDictionary *lastBytesCopiedByFile; // @synthesize lastBytesCopiedByFile=_lastBytesCopiedByFile;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
- (void)finishCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (void)updateCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (void)beginCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (id)init;

@end

