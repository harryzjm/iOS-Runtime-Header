//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIColor;
@protocol DKOpenGLRendererDelegate;

__attribute__((visibility("hidden")))
@interface DKOpenGLRenderer : NSObject
{
    _Bool _didNotifyRendererDelegate;
    int mBufferSize;
    unsigned int mWetPaintProg;
    unsigned int mDryPaintProg;
    unsigned int mCompositeProg;
    unsigned int mTextureProg;
    unsigned int mColorProg;
    unsigned int mAttributes;
    unsigned int mVbo;
    struct _NSRange mVertexRange;
    vector_8a3ef5f6 mContiguousVertexStorage;
    struct vector<VertexGroup, std::__1::allocator<VertexGroup>> mVertexHistory;
    struct vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> mNonCollisionSegments;
    MISSING_TYPE *U_COLOR;
    struct vector<Page, std::__1::allocator<Page>> mPages;
    unsigned int mWetPaintBufferFBO;
    unsigned int mWetPaintBufferT;
    MISSING_TYPE *mWetPaintBufferSize;
    unsigned int mPaperTex;
    MISSING_TYPE *mWinSize;
    MISSING_TYPE *mCanvasSize;
    MISSING_TYPE *mCanvasOffset;
    float mTime;
    float mTimeWetBecameDirty;
    float mParticleLifespan;
    struct CGRect mDirtyCanvasRegion;
    int mCompositeProgViewportUniformLocation;
    int mWetPaintProgTimeUniformLocation;
    int mWetPaintProgSubtractEndPointsOnlyUniformLocation;
    int mWetPaintProgLifespanUniformLocation;
    int mDryPaintProgXCoordOffsetUniformLocation;
    int mColorProgColorUniformLocation;
    int mColorProgModelViewProjectionUniformLocation;
    int mTextureProgModelViewProjectionUniformLocation;
    _Bool _undoEnabled;
    _Bool _ignoreFirstUndoItem;
    _Bool _drawingEnabled;
    _Bool _allowWetComposite;
    id <DKOpenGLRendererDelegate> _delegate;
    UIColor *_inkColor;
    double _lineWidthScale;
    double _backingScale;
    long long _numPages;
    struct CGSize _contentSize;
    struct CGRect _bounds;
}

@property(nonatomic) long long numPages; // @synthesize numPages=_numPages;
@property(nonatomic) _Bool allowWetComposite; // @synthesize allowWetComposite=_allowWetComposite;
@property(nonatomic) _Bool drawingEnabled; // @synthesize drawingEnabled=_drawingEnabled;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(nonatomic) _Bool ignoreFirstUndoItem; // @synthesize ignoreFirstUndoItem=_ignoreFirstUndoItem;
@property(nonatomic, getter=isUndoEnabled) _Bool undoEnabled; // @synthesize undoEnabled=_undoEnabled;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) double lineWidthScale; // @synthesize lineWidthScale=_lineWidthScale;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property(nonatomic) __weak id <DKOpenGLRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)snapshot;
- (void)updateVertexControllerWithData:(vector_8a3ef5f6)arg1 range:(struct _NSRange)arg2 allowWet:(_Bool)arg3;
- (void)updateVertexControllerWithDataRange:(struct _NSRange)arg1 allowWet:(_Bool)arg2;
- (void)didBeginNewStroke;
- (void)didCompleteStroke;
- (void)clearComposite;
- (void)clearDryPaintBuffer;
- (void)clearWetPaintBuffer;
- (void)clear;
- (void)resetRendererState;
- (_Bool)canvasIsEmpty;
- (void)drawContiguousVertexStorageImmediatelyWithLayeredBlending:(_Bool)arg1;
- (void)redrawEntireDrawingImmediatelyWithLayeredBlending:(_Bool)arg1;
- (void)undo;
- (void)drawComposite;
- (void)draw;
- (void)updateDryForcefully;
- (void)renderToComposite:(_Bool)arg1;
- (void)renderToDryPaintBuffer;
- (void)renderToWetPaintBufferWithRange:(struct _NSRange)arg1;
- (void)updateDryCycleIncludingComposite:(_Bool)arg1;
- (void)updateWet;
- (struct CGRect)getVertexBounds;
- (struct CGRect)regionWithVertices:(vector_8a3ef5f6)arg1 withInflationAmount:(float)arg2;
- (void)update;
- (_Bool)detectCollision:: /* Error: Ran out of types for this method. */;
- (void)addPoints:(id)arg1 withSegmentLength:(unsigned long long)arg2;
- (void)removeVertexHistoryElement;
- (void)appendVertexHistoryElement;
- (void)initializeFrameBuffers;
- (void)destroyFrameBuffers;
- (void)didResize;
- (_Bool)initGL;
- (void)teardown;
- (void)dealloc;
- (id)init;
- (id)initWithBounds:(struct CGRect)arg1 scale:(double)arg2;
- (id)initWithBounds:(struct CGRect)arg1 scale:(double)arg2 bufferSize:(int)arg3;

@end
