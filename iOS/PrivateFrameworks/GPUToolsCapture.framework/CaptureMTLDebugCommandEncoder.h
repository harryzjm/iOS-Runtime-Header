//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLDebugCommandEncoder, MTLDevice;

__attribute__((visibility("hidden")))
@interface CaptureMTLDebugCommandEncoder : NSObject
{
    id <MTLDebugCommandEncoder> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    NSMutableSet *_retainedObjects;
    CaptureMTLCommandBuffer *_captureCommandBuffer;
}

- (void).cxx_destruct;
- (void)dumpTexture:(id)arg1;
- (void)dumpTexture:(id)arg1 name:(const char *)arg2;
- (void)dumpTexture:(id)arg1 name:(const char *)arg2 glMode:(_Bool)arg3;
- (void)dumpBuffer:(id)arg1;
- (void)dumpBuffer:(id)arg1 name:(const char *)arg2;
@property(readonly) id <MTLDebugCommandEncoder> baseObject;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

