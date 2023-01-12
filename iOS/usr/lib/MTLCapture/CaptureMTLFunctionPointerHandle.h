//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLFunctionPointerHandleSPI-Protocol.h>

@class NSString;
@protocol MTLFunctionPointerHandleSPI;

@interface CaptureMTLFunctionPointerHandle : NSObject <MTLFunctionPointerHandleSPI, CaptureMTLObject>
{
    id <MTLFunctionPointerHandleSPI> _baseObject;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly, nonatomic) unsigned long long gpuAddress;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;
- (id)originalObject;
@property(readonly) id <MTLFunctionPointerHandleSPI> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
