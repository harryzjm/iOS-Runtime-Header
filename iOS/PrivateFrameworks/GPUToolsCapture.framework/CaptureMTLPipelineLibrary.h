//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSArray, NSString;
@protocol MTLDevice, MTLPipelineCache, MTLPipelineLibrary, MTLPipelineLibrarySPI;

@interface CaptureMTLPipelineLibrary : NSObject
{
    id <MTLPipelineLibrarySPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    _Bool _isBaseObjectDebugDevice;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) NSArray *pipelineNames;
@property(readonly, nonatomic) id <MTLPipelineCache> pipelineCache;
@property(readonly) NSArray *metallibPaths;
@property(copy) NSString *label;
@property(readonly, nonatomic) id <MTLPipelineCache> functionCache;
@property _Bool disableRunTimeCompilation;
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
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
@property(readonly) id <MTLPipelineLibrary> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

