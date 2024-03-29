//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaRecorderHistoryBuffer : NSObject
{
    id _delegate;
    unsigned int _bufferLength;
    struct __CFArray *_timestampQueue;
    struct __CFDictionary *_sampleMap;
    unsigned int _lastTimestamp;
    struct __CFAllocator *_timestampAllocator;
}

- (id)delegate;
- (int)getCount;
- (void)flushBuffer;
- (struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;

@end

