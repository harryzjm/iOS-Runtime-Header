//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKFileUploadMediaTranscoder : NSObject
{
    struct RetainPtr<NSTimer> _progressTimer;
    struct RetainPtr<PXActivityProgressController> _progressController;
    struct RetainPtr<AVAssetExportSession> _exportSession;
    struct RetainPtr<NSArray<_WKFileUploadItem *>> _items;
    struct RetainPtr<NSString> _temporaryDirectoryPath;
    struct Function<void (NSArray<_WKFileUploadItem *>*)> _completionHandler;
    unsigned long long _videoCount;
    unsigned long long _processedVideoCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_temporaryDirectoryCreateIfNecessary;
- (void)_updateProgress:(id)arg1;
- (void)_dismissProgress;
- (void)_finishedProcessing;
- (void)_processItemAtIndex:(unsigned long long)arg1;
- (void)start;
- (id)initWithItems:(id)arg1 videoCount:(unsigned long long)arg2 completionHandler:(void *)arg3;

@end

