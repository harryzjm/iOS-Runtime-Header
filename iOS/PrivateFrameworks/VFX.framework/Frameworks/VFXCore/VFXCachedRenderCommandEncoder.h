//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDevice, MTLRenderCommandEncoder;

@interface VFXCachedRenderCommandEncoder : NSObject
{
    id <MTLRenderCommandEncoder> _encoder;
    struct Cache _cache;
    struct BindingsCache _vertexCache;
    struct BindingsCache _fragmentCache;
}

- (id).cxx_construct;
- (void)applyChangedStates;
- (void)vfx_setLineWidth:(float)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;
- (void)setViewport:(CDStruct_8727d297)arg1;
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const CDStruct_c0454aff *)arg2;
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTriangleFillMode:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;
- (void)setScissorRect:(CDStruct_33dcf794)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (void)setFrontFacingWinding:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setCullMode:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
@property(readonly) unsigned long long tileHeight;
@property(readonly) unsigned long long tileWidth;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (id)init:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

