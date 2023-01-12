//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLEvent;

__attribute__((visibility("hidden")))
@interface CaptureMTLEvent : NSObject
{
    CaptureMTLDevice *_captureDevice;
    id <MTLEvent> _baseObject;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(copy) NSString *label;
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
- (void)setEnableBarrier:(_Bool)arg1;
- (_Bool)enableBarrier;
@property(readonly) id <MTLEvent> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

