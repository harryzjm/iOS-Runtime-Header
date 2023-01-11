//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DKDGLDataBuffer, DKDGLFrameBuffer, PKDrawing, PKGLContext, PKLinedPaper, PKResourceHandler;

@interface PKRenderer : NSObject
{
    struct vector<(anonymous namespace)::AnimatingStroke, std::__1::allocator<(anonymous namespace)::AnimatingStroke>> _animatingStrokes;
    DKDGLFrameBuffer *_paintFramebuffer;
    DKDGLFrameBuffer *_paintFramebufferAccumulator;
    DKDGLFrameBuffer *_originalBackFramebuffer;
    struct CGRect _paintFramebufferDirtyRect;
    struct __GLsync *_finishRenderingFence;
    PKResourceHandler *_resourceHandler;
    int _backingWidth;
    int _backingHeight;
    unsigned int _backgroundImageTexture;
    struct CGSize _backgroundImageTextureSize;
    CDStruct_f2e236b6 _backgroundGLColor;
    struct CGSize _drawingPixelSize;
    double _fromStrokeSpaceScale;
    struct CGAffineTransform _strokeTransform;
    DKDGLDataBuffer *_strokeBuffer;
    DKDGLDataBuffer *_linesBuffer;
    unsigned long long _strokeBufferCount;
    struct _PKStrokePoint _lastPointForEraser;
    _Bool _lastPointForEraserIsValid;
    _Bool _rendersToSharedContext;
    _Bool _useMetalRandomNumberGenerator;
    _Bool _solidColorBackboard;
    _Bool _isFinishedRendering;
    PKGLContext *_glContext;
    PKDrawing *_drawing;
    double _inputScale;
    double _eraserIndicatorAlpha;
    double _backboardPaperMultiply;
    struct CGColor *_backgroundColor;
    PKLinedPaper *_linedPaper;
    struct CGSize _actualSize;
    struct CGRect _viewScissor;
    struct CGAffineTransform _paperTransform;
}

+ (id)tileQueue;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
@property(retain, nonatomic) PKResourceHandler *resourceHandler; // @synthesize resourceHandler=_resourceHandler;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) double backboardPaperMultiply; // @synthesize backboardPaperMultiply=_backboardPaperMultiply;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(nonatomic) _Bool isFinishedRendering; // @synthesize isFinishedRendering=_isFinishedRendering;
@property(nonatomic) _Bool solidColorBackboard; // @synthesize solidColorBackboard=_solidColorBackboard;
@property(nonatomic) double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property(nonatomic) double inputScale; // @synthesize inputScale=_inputScale;
@property(nonatomic) __weak PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(readonly, nonatomic) PKGLContext *glContext; // @synthesize glContext=_glContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 stopBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)renderStrokes:(id)arg1 stopBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 stopBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 stopBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 stopBlock:(CDUnknownBlockType)arg4;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 clippedToStrokeSpaceRect:(struct CGRect)arg3;
- (void)applyStrokeSpaceClipRect:(struct CGRect)arg1 strokeTransform:(struct CGAffineTransform)arg2;
- (void)setBackgroundImage:(struct CGImage *)arg1;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)renderImage:(struct CGImage *)arg1 intoFramebuffer:(id)arg2;
- (void)renderTexture:(unsigned int)arg1 intoFramebuffer:(id)arg2;
- (void)clear;
- (struct CGImage *)newCGImageFromFramebuffer:(id)arg1 withClipRect:(struct CGRect)arg2;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1;
- (struct CGImage *)newCGImage;
- (void)renderTile:(id)arg1 intoTile:(id)arg2;
- (void)renderTile:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)copyIntoTile:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (id)framebufferForTile:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)didTeardownTile;
- (struct CGImage *)newCGImageFromGL;
- (void)clearPaintFramebuffers;
- (void)finishRenderingNoTeardownForStroke:(struct AnimatingStroke *)arg1 clippedToPixelSpaceRect:(struct CGRect)arg2;
- (void)finishRendering;
- (void)finishRenderingClippedToStrokeSpaceRect:(struct CGRect)arg1 forStroke:(struct AnimatingStroke *)arg2;
- (void)drawingCancelled;
- (void)setupStrokeBufferIfNecessary;
- (void)setupDrawingFramebuffersIfNecessary;
- (void)setupMaskFramebufferIfNecessary;
- (void)restoreGLContextIfNecessary;
- (void)switchGLContextIfNecessary;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)renderAnimatingStrokesWithTransform:(struct CGAffineTransform)arg1 renderBufferSize:(struct CGSize)arg2;
- (void)resetPaintFramebufferAccumulateIfNeeded;
- (void)renderAheadWithTransform:(struct CGAffineTransform)arg1 onPaper:(_Bool)arg2 renderBufferSize:(struct CGSize)arg3;
- (void)finishStroke;
- (void)drawNewPointsAt:(double)arg1;
@property(readonly, nonatomic) double latestTimestamp;
- (void)getAndRenderNewPoints:(id)arg1;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)renderFullscreenQuadWithShader:(id)arg1 transform:(struct CGAffineTransform)arg2 flipped:(_Bool)arg3;
- (void)renderBrushIndicatorForStroke:(id)arg1 withTransform:(struct CGAffineTransform)arg2 mode:(long long)arg3 flipped:(_Bool)arg4;
- (void)renderLinesRenderBufferSize:(struct CGSize)arg1;
- (void)renderPaperTransform:(struct CGAffineTransform)arg1 paperTransform:(struct CGAffineTransform)arg2 flipped:(_Bool)arg3 multiply:(double)arg4;
- (void)setPaperTextureOnShader:(id)arg1;
- (void)renderStroke:(id)arg1 withTransform:(struct CGAffineTransform)arg2 mode:(long long)arg3 flipped:(_Bool)arg4 renderBufferSize:(struct CGSize)arg5;
- (void)renderWithTransform:(struct CGAffineTransform)arg1 animatingStroke:(struct AnimatingStroke *)arg2 mode:(long long)arg3 clipped:(_Bool)arg4 renderBufferSize:(struct CGSize)arg5;
- (void)renderLiveStrokeWithTransform:(struct CGAffineTransform)arg1 renderBufferSize:(struct CGSize)arg2;
- (void)renderTexture:(unsigned int)arg1 flipped:(_Bool)arg2;
- (void)renderParticleStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2 starts:(_Bool)arg3 ends:(_Bool)arg4 combinedRendering:(_Bool)arg5;
- (void)renderParticleStrokeVertices:(StrokeVertex_e2fc4686 *)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4;
- (void)renderEraserIndicatorVertices:(StrokeVertex_e2fc4686 *)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4 withTransform:(struct CGAffineTransform)arg5;
- (void)renderStrokeVertices:(StrokeVertex_e2fc4686 *)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4;
- (struct CGRect)clipRectForVertices:(StrokeVertex_e2fc4686 *)arg1 numVertices:(unsigned long long)arg2;
- (struct CATransform3D)setShaderTransform:(id)arg1 forFramebufferSize:(struct CGSize)arg2 flipped:(_Bool)arg3;
- (void)setShaderTransform:(id)arg1;
- (void)renderPenStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2 alpha:(double)arg3 combinedRendering:(_Bool)arg4;
- (void)renderEraserIndicator:(struct _PKStrokePoint)arg1 withTransform:(struct CGAffineTransform)arg2;
- (void)renderStroke:(struct _PKStrokePointSlice)arg1 animatingStroke:(struct AnimatingStroke *)arg2 accumulating:(_Bool)arg3 combinedRendering:(_Bool)arg4;
- (void)setupOpenGL;
- (const float *)randomNumberArray;
- (void)flushMemoryIfPossible;
- (void)dealloc;
- (id)initWithDrawingPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 glContext:(id)arg3;
- (id)initWithDrawingPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;

@end

