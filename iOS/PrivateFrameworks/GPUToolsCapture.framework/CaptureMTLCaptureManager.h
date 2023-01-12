//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLCaptureManager.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CaptureMTLCaptureManager : MTLCaptureManager
{
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    NSString *_gputracePath;
    _Bool _isToolTriggeredCapture;
}

- (void).cxx_destruct;
- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (_Bool)isCapturing;
- (void)stopCapture;
- (void)startCaptureWithScope:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (void)startCaptureWithDevice:(id)arg1;
- (_Bool)startCaptureWithDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)supportsDestination:(long long)arg1;
- (void)dealloc;
- (id)initWithCaptureContext:(struct GTTraceContext *)arg1;
@property(readonly) struct GTTraceStream *traceStream;

// Remaining properties
@property(readonly) id baseObject;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceContext *traceContext;

@end

