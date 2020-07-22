//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUGLPipeline, NUGLVertexArray, NUImageGeometry;
@protocol NUTextureImage;

@interface NUImageLayer
{
    NUGLPipeline *_pipeline;
    NUGLVertexArray *_vertices;
    id <NUTextureImage> __image;
    NUImageGeometry *__geometry;
}

+ (id)fragmentShaderProgram;
+ (id)vertexLayout;
+ (id)vertexShaderProgram;
@property(retain) NUImageGeometry *_geometry; // @synthesize _geometry=__geometry;
@property(retain) id <NUTextureImage> _image; // @synthesize _image=__image;
- (void).cxx_destruct;
- (void)drawTexture:(id)arg1 inRect:(CDStruct_0973877e)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)drawImage:(id)arg1 region:(id)arg2 context:(id)arg3;
- (void)clearBackground:(struct CGColor *)arg1 context:(id)arg2;
- (void)draw:(id)arg1;
- (void)reset:(id)arg1;
@property(retain) NUImageGeometry *geometry;
@property(retain) id <NUTextureImage> image;
- (id)init;

@end

