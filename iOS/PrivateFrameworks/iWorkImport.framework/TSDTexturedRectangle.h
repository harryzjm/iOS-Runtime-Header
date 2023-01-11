//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class CALayer, NSMapTable, NSOperation, NSString, TSDBitmapRenderingQualityInfo, TSDTextureSet, TSUBezierPath, TSUColor;
@protocol MTLTexture, TSDLiveTexturedRectangleSource;

__attribute__((visibility("hidden")))
@interface TSDTexturedRectangle : NSObject <NSCopying>
{
    struct CGRect _originalFrame;
    CDUnknownBlockType _renderBlock;
    _Bool _singleTextureContainsMipmaps;
    _Bool _didInitFromLayer;
    _Bool _shouldCleanUpSingleTexture;
    _Bool _didInitFromGPUTexture;
    NSMapTable *_eventIndexToViewLayerMap;
    struct CGColorSpace *_colorSpace;
    TSUBezierPath *_shapePath;
    TSUBezierPath *_bakedShapePath;
    _Bool _isIncomingContent;
    _Bool _isVerticalText;
    _Bool _isFlattenedRepresentation;
    _Bool _shouldGenerateMipmap;
    unsigned int _singleTextureName;
    struct CGImage *_bakedImage;
    TSDBitmapRenderingQualityInfo *_bitmapRenderingQualityInfo;
    CALayer *_layer;
    id <MTLTexture> _metalTexture;
    TSDTextureSet *_parent;
    NSOperation *_renderingOperation;
    NSOperation *_renderingOperationOpenGL;
    NSOperation *_renderingOperationMetal;
    struct CGImage *_sourceImage;
    NSString *_text;
    double _textBaseline;
    TSUColor *_textColor;
    double _textXHeight;
    long long _textureType;
    double _textureOpacity;
    id <TSDLiveTexturedRectangleSource> _liveTexturedRectangleSource;
    struct CGPoint _offset;
    struct CGPoint _originalPosition;
    struct CGSize _singleTextureSize;
    struct CGSize _size;
    struct _NSRange _textRange;
    struct CGRect _contentRect;
}

+ (id)setupMetalShaderForContext:(id)arg1;
+ (struct CGRect)boundingRectOnCanvasForTextures:(id)arg1;
+ (struct CGRect)boundingRectForTextures:(id)arg1;
@property __weak id <TSDLiveTexturedRectangleSource> liveTexturedRectangleSource; // @synthesize liveTexturedRectangleSource=_liveTexturedRectangleSource;
@property(nonatomic) double textureOpacity; // @synthesize textureOpacity=_textureOpacity;
@property(nonatomic) long long textureType; // @synthesize textureType=_textureType;
@property(nonatomic) double textXHeight; // @synthesize textXHeight=_textXHeight;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(copy, nonatomic) TSUColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double textBaseline; // @synthesize textBaseline=_textBaseline;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) TSUBezierPath *shapePath; // @synthesize shapePath=_shapePath;
@property struct CGImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property __weak NSOperation *renderingOperationMetal; // @synthesize renderingOperationMetal=_renderingOperationMetal;
@property __weak NSOperation *renderingOperationOpenGL; // @synthesize renderingOperationOpenGL=_renderingOperationOpenGL;
@property __weak NSOperation *renderingOperation; // @synthesize renderingOperation=_renderingOperation;
@property(nonatomic) __weak TSDTextureSet *parent; // @synthesize parent=_parent;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool shouldGenerateMipmap; // @synthesize shouldGenerateMipmap=_shouldGenerateMipmap;
@property(readonly, nonatomic) id <MTLTexture> metalTexture; // @synthesize metalTexture=_metalTexture;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) _Bool isFlattenedRepresentation; // @synthesize isFlattenedRepresentation=_isFlattenedRepresentation;
@property(nonatomic) _Bool isVerticalText; // @synthesize isVerticalText=_isVerticalText;
@property(nonatomic) _Bool isIncomingContent; // @synthesize isIncomingContent=_isIncomingContent;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) __weak TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // @synthesize bitmapRenderingQualityInfo=_bitmapRenderingQualityInfo;
@property struct CGImage *bakedImage; // @synthesize bakedImage=_bakedImage;
- (void).cxx_destruct;
- (void)drawFrameAtLayerTime:(double)arg1 context:(id)arg2;
- (void)setupMetalTextureForDevice:(id)arg1;
- (id)p_allocateMetalTextureForDevice:(id)arg1;
- (void)releaseMetalTexture;
- (_Bool)isMetalTextureSetup;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(_Bool)arg1;
- (id)viewLayerAtEventIndex:(unsigned long long)arg1;
- (struct CGRect)convertToCanvasCoordinates:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect frameOnCanvas;
@property(readonly, nonatomic) CALayer *parentLayer;
@property(readonly, nonatomic) _Bool isBackgroundTexture;
- (void)p_renderIntoContext:(struct CGContext *)arg1 viewLayer:(id)arg2 shouldApplyAlpha:(_Bool)arg3 shouldIgnoreLayerVisibility:(_Bool)arg4 shouldClipToBounds:(_Bool)arg5;
- (void)renderIntoContext:(struct CGContext *)arg1 eventIndex:(unsigned long long)arg2 shouldApplyAlpha:(_Bool)arg3 shouldClipToBounds:(_Bool)arg4;
- (void)renderIntoContext:(struct CGContext *)arg1 shouldApplyAlpha:(_Bool)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 shouldApplyAlpha:(_Bool)arg2 shouldIgnoreLayerVisibility:(_Bool)arg3;
- (void)p_bakeLayerWithAngle:(double)arg1 scale:(double)arg2 layer:(id)arg3;
- (void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2 layer:(id)arg3;
@property(readonly, nonatomic) _Bool isBaked;
@property(readonly, nonatomic) struct CGImage *image;
@property(readonly, nonatomic) double singleTextureOpacity;
- (void)releaseSingleTexture;
@property(readonly, nonatomic) unsigned int singleTextureTarget;
@property(readonly, nonatomic) struct CGSize singleTextureSize; // @synthesize singleTextureSize=_singleTextureSize;
@property(readonly, nonatomic) unsigned int singleTextureName; // @synthesize singleTextureName=_singleTextureName;
- (void)setupSingleTextureWithContext:(id)arg1;
- (void)setupSingleTexture;
@property(readonly, nonatomic) _Bool isSingleTextureSetup;
- (void)p_setupSingleTextureAndGenerateMipMaps:(_Bool)arg1 withContext:(id)arg2;
- (char *)p_setupTextureDataWithSize:(struct CGSize)arg1 isBGRA:(_Bool)arg2;
- (void)renderLayerContentsIfNeeded;
@property(readonly, nonatomic) _Bool isRenderable;
@property(readonly, nonatomic) _Bool isRendered;
- (void)evictRenderedResources;
- (void)resetToSourceImageAtEventIndex:(unsigned long long)arg1;
- (struct CGImage *)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(struct CGPoint)arg3 transform:(struct CGAffineTransform *)arg4;
- (struct CGColorSpace *)p_colorSpace;
- (void)resetAnchorPointAtEventIndex:(unsigned long long)arg1;
- (void)adjustAnchorRelativeToCenterOfRotation:(struct CGPoint)arg1 atEventIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool isImageSource;
@property(readonly, nonatomic) struct CGRect frame;
- (void)p_updateFrame;
- (void)p_initializeMap;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) _Bool isValid;
- (void)dealloc;
- (void)teardown;
- (id)init;
- (id)initWithLayer:(id)arg1 forMetalTexture:(id)arg2;
- (id)initWithLayer:(id)arg1 forGLTexture:(id)arg2;
- (id)initWithMetalTexture:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithTextureInfo:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 renderBlock:(CDUnknownBlockType)arg3;

@end

