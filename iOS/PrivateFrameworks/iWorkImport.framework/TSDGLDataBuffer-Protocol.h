//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>
#import <iWorkImport/TSDGLDataBufferAccessor-Protocol.h>
#import <iWorkImport/TSDGPUDataBufferSharedAccessors-Protocol.h>

@class NSArray, NSString, TSDGLDataBufferAttribute, TSDGLShader;
@protocol TSDGLDataBuffer;

@protocol TSDGLDataBuffer <NSObject, TSDGLDataBufferAccessor, TSDGPUDataBufferSharedAccessors>
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3;
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3;
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2;
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 quadParticleCount:(unsigned long long)arg2;
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 meshSize:(struct CGSize)arg2;
+ (id <TSDGLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3;
- (void)updateDataBufferAttributes:(NSArray *)arg1 withBlock:(void (^)(struct *, unsigned long long))arg2;
- (TSDGLDataBufferAttribute *)vertexAttributeNamed:(NSString *)arg1;
- (void)setDataForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(TSDGLDataBufferAttribute *)arg3 dataBuffer:(id <TSDGLDataBuffer>)arg4 index:(unsigned long long)arg5;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (void)drawWithShader:(TSDGLShader *)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(_Bool)arg3 advanceDynamicBuffer:(_Bool)arg4;
- (void)drawWithShader:(TSDGLShader *)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(_Bool)arg3;
- (void)drawWithShader:(TSDGLShader *)arg1 deactivateShaderWhenDone:(_Bool)arg2 advanceDynamicBuffer:(_Bool)arg3;
- (void)drawWithShader:(TSDGLShader *)arg1 deactivateShaderWhenDone:(_Bool)arg2;
- (void)drawWithShader:(TSDGLShader *)arg1 advanceDynamicBuffer:(_Bool)arg2;
- (void)drawWithShader:(TSDGLShader *)arg1;
- (void)disableDataBufferWithShader:(TSDGLShader *)arg1;
- (void)enableDataBufferWithShader:(TSDGLShader *)arg1;
- (void)disableGLElementArrayBuffer;
- (void)enableGLElementArrayBuffer;
- (void)teardown;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;
- (id)initWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
@end

