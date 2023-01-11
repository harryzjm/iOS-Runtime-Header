//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKUIGLProgram;

@interface CLKUIGLQuad2D
{
    unsigned int _isPrepared:1;
    unsigned int _vertexArray;
    unsigned int _vertexBuffer;
    unsigned int _primaryTexture;
    unsigned int _secondaryTexture;
    CLKUIGLProgram *_program;
}

- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (void)purge;
- (void)prepare;
- (void)_deleteVertexArray;
- (void)_createVertexArray;

@end
