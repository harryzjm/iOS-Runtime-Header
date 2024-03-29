//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/NSObject-Protocol.h>
#import <TSDrawables/TSDGPUDataBufferSharedAccessors-Protocol.h>

@class NSArray;
@protocol MTLDevice, MTLRenderCommandEncoder, TSDGLDataBuffer, TSDMTLDataBuffer;

@protocol TSDMTLDataBuffer <NSObject, TSDGPUDataBufferSharedAccessors>
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 addTransparentBorder:(_Bool)arg6 device:(id <MTLDevice>)arg7;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 device:(id <MTLDevice>)arg5;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 device:(id <MTLDevice>)arg4;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3 device:(id <MTLDevice>)arg4;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 device:(id <MTLDevice>)arg3;
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 quadParticleCount:(unsigned long long)arg2 device:(id <MTLDevice>)arg3;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 meshSize:(struct CGSize)arg2 device:(id <MTLDevice>)arg3;
+ (id <TSDMTLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id <MTLDevice>)arg4;
@property(readonly) unsigned long long centerAttributeIndex;
@property(readonly) unsigned long long texCoordAttributeIndex;
@property(readonly) unsigned long long positionAttributeIndex;
@property(nonatomic) unsigned long long metalDrawMode;
- (void)updateMetalDataBufferAttributes:(NSArray *)arg1 withBlock:(void (^)(struct *, unsigned long long))arg2;
- (void)updateDataBufferAttributesWithBlock:(void (^)(struct *, unsigned long long))arg1;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(_Bool)arg3 instanceCount:(unsigned long long)arg4;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(_Bool)arg3;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3 advanceDynamicBuffer:(_Bool)arg4 instanceCount:(unsigned long long)arg5;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3 advanceDynamicBuffer:(_Bool)arg4;
- (void)drawWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (void)encodeWithEncoder:(id <MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2;
- (void)disableWithDevice:(id <MTLDevice>)arg1;
- (void)enableDataBuffer;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 addTransparentBorder:(_Bool)arg6;
- (id)initWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
@end

