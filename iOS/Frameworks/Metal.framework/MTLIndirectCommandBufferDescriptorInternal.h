//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MTLIndirectCommandBufferDescriptorInternal
{
    unsigned long long _commandTypes;
    _Bool _inheritPipelineState;
    _Bool _inheritBuffers;
    unsigned long long _maxVertexBufferBindCount;
    unsigned long long _maxFragmentBufferBindCount;
    unsigned long long _maxKernelBufferBindCount;
}

- (void)setMaxFragmentBufferBindCount:(unsigned long long)arg1;
- (unsigned long long)maxFragmentBufferBindCount;
- (void)setMaxVertexBufferBindCount:(unsigned long long)arg1;
- (unsigned long long)maxVertexBufferBindCount;
- (void)setInheritBuffers:(_Bool)arg1;
- (_Bool)inheritBuffers;
- (void)setCommandTypes:(unsigned long long)arg1;
- (unsigned long long)commandTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
