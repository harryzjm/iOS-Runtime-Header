//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class NSError;

@interface SSGzipOutputStream : NSOutputStream
{
    NSOutputStream *_backingStream;
    struct z_stream_s _stream;
    unsigned long long _streamContentLength;
    NSError *_streamError;
    char *_streamOutBuffer;
    unsigned long long _streamOutBufferSize;
}

- (void).cxx_destruct;
- (void)_setStreamError:(int)arg1 context:(id)arg2;
- (long long)_consumeStreamOutput:(_Bool)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (unsigned long long)streamContentLength;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initToMemory;
- (id)initToFileAtPath:(id)arg1 append:(_Bool)arg2;
- (_Bool)_initializeOutputStream;

@end
