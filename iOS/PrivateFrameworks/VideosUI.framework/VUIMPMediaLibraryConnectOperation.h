//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaLibrary, NSError, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation
{
    _Bool _success;
    CDUnknownBlockType _progressBlock;
    NSError *_error;
    MPMediaLibrary *_mediaLibrary;
    NSObject<OS_dispatch_source> *_progressTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void)_notifyClientOfProgress:(float)arg1;
- (void)_stopProgressTimer;
- (void)_startProgressTimer;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

@end

