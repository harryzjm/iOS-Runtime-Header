//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface GLKTexture : NSObject
{
    struct CGImageBlockSet *_blockSet;
    struct __CFData *_cfData;
    int _unpackAlignment;
    _Bool _requestIssuedForAlphaPremultiplication;
    _Bool _requestIssuedToReorientToGL;
    _Bool _requestIssuedToInterpretGrayAsAlpha;
    _Bool _requestIssuedForSRGB;
    unsigned int _primarySurfaceLength;
    _Bool _requestIssuedForMipmapGeneration;
    _Bool _hasPremultipliedAlpha;
    _Bool _isPowerOfTwo;
    _Bool _isCubeMap;
    _Bool _isMipmapped;
    _Bool _isVerticalFlipped;
    _Bool _hasAlpha;
    _Bool _reOrient;
    unsigned int _GLTextureName;
    unsigned int _bindTarget;
    unsigned int _textureTarget;
    unsigned int _internalFormat;
    unsigned int _format;
    unsigned int _type;
    int _texelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned int _orientation;
    unsigned int _numMipMapLevels;
    unsigned int _bitsPerPixel;
    unsigned int _rowBytes;
    unsigned int _nComponents;
    unsigned int _nPrimarySurfaces;
    unsigned int _nSurfaces;
    int _loadMode;
    int _dataCategory;
    unsigned int _index;
    NSData *_imageData;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool reOrient; // @synthesize reOrient=_reOrient;
@property(nonatomic) _Bool hasAlpha; // @synthesize hasAlpha=_hasAlpha;
@property(nonatomic) _Bool isVerticalFlipped; // @synthesize isVerticalFlipped=_isVerticalFlipped;
@property(nonatomic) _Bool isMipmapped; // @synthesize isMipmapped=_isMipmapped;
@property(nonatomic) _Bool isCubeMap; // @synthesize isCubeMap=_isCubeMap;
@property(nonatomic) _Bool isPowerOfTwo; // @synthesize isPowerOfTwo=_isPowerOfTwo;
@property(readonly) _Bool hasPremultipliedAlpha; // @synthesize hasPremultipliedAlpha=_hasPremultipliedAlpha;
@property(readonly) _Bool requestIssuedForMipmapGeneration; // @synthesize requestIssuedForMipmapGeneration=_requestIssuedForMipmapGeneration;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) int dataCategory; // @synthesize dataCategory=_dataCategory;
@property(nonatomic) int loadMode; // @synthesize loadMode=_loadMode;
@property(nonatomic) unsigned int nSurfaces; // @synthesize nSurfaces=_nSurfaces;
@property(nonatomic) unsigned int nPrimarySurfaces; // @synthesize nPrimarySurfaces=_nPrimarySurfaces;
@property(nonatomic) unsigned int nComponents; // @synthesize nComponents=_nComponents;
@property(nonatomic) unsigned int rowBytes; // @synthesize rowBytes=_rowBytes;
@property(nonatomic) unsigned int bitsPerPixel; // @synthesize bitsPerPixel=_bitsPerPixel;
@property(nonatomic) unsigned int numMipMapLevels; // @synthesize numMipMapLevels=_numMipMapLevels;
@property(nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) int texelFormat; // @synthesize texelFormat=_texelFormat;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int format; // @synthesize format=_format;
@property(nonatomic) unsigned int internalFormat; // @synthesize internalFormat=_internalFormat;
@property(nonatomic) unsigned int textureTarget; // @synthesize textureTarget=_textureTarget;
@property(nonatomic) unsigned int bindTarget; // @synthesize bindTarget=_bindTarget;
@property(nonatomic) unsigned int GLTextureName; // @synthesize GLTextureName=_GLTextureName;
@property(readonly) NSData *imageData; // @synthesize imageData=_imageData;
- (_Bool)premultiplyWithAlpha:(void *)arg1 source:(void *)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id *)arg6;
- (_Bool)reorientToGL:(void *)arg1 source:(void *)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id *)arg6;
- (_Bool)determinePVRFormat:(unsigned int)arg1;
- (_Bool)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long long)arg2 andColorModel:(int)arg3;
- (_Bool)uploadToGLTexture:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)_uploadToGLTexture:(unsigned int)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id *)arg8;
- (_Bool)loadCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)loadWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)decodeCGImage:(struct CGImage *)arg1;
- (_Bool)decodeCGImageImageProvider:(struct CGImage *)arg1 CGImageProvider:(struct CGImageProvider *)arg2;
- (_Bool)decodeCGImageDataProvider:(struct CGImage *)arg1;
- (void *)alignmentFix:(unsigned int)arg1 data:(const void *)arg2;
- (_Bool)loadPVRTCData:(id)arg1 error:(id *)arg2;
- (id)initWithDecodedData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 rowBytes:(unsigned int)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id *)arg8;
- (id)initWithCGImage:(struct CGImage *)arg1 forceCubeMap:(_Bool)arg2 wasCubeMap:(_Bool *)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id *)arg6;
- (id)initWithData:(id)arg1 forceCubeMap:(_Bool)arg2 wasCubeMap:(_Bool *)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)canHonorSRGBrequest;
- (_Bool)shouldApplyReorientToGL;
- (_Bool)shouldApplyPremultiplication;
- (void)updateRequestedOperationsFromOptions:(id)arg1;
- (void)dealloc;
- (id)init;

@end

