//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface IndirectRenderCommandEncoderState : NSObject
{
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLBuffer> _vertexBuffers[31];
    void *_vertexBytes[31];
    unsigned long long _vertexBufferOffsets[31];
    unsigned long long _vertexBytesLength[31];
    id <MTLBuffer> _fragmentBuffers[31];
    void *_fragmentBytes[31];
    unsigned long long _fragmentBufferOffsets[31];
    unsigned long long _fragmentBytesLength[31];
}

+ (id)saveEncoder:(id)arg1 withDescriptor:(id)arg2 player:(id)arg3;
- (void).cxx_destruct;
- (void)restoreEncoder:(id)arg1 withDescriptor:(id)arg2;

@end

