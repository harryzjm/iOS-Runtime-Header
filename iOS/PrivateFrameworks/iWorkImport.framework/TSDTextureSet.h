//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class CALayer, NSArray, NSDictionary, NSMapTable, NSMutableArray, TSDBitmapRenderingQualityInfo, TSDRep;

__attribute__((visibility("hidden")))
@interface TSDTextureSet : NSObject <NSCopying>
{
    CALayer *_layer;
    NSMutableArray *_allTextures;
    NSMutableArray *_animatableTextures;
    NSDictionary *_bakedAttributes;
    NSMapTable *_eventIndexToViewLayerMap;
    NSMutableArray *_finalTextures;
    NSMapTable *_textureToStageIndexMap;
    NSMapTable *_flattenKeyToFlattenedTextureMap;
    long long _textureZOrder;
    _Bool _isBackground;
    _Bool _isBaked;
    _Bool _isFlippedHorizontally;
    _Bool _isMagicMove;
    _Bool _shouldTransformUsingTextureCenter;
    _Bool _shouldIncludeFinalTexturesInVisibleSet;
    CALayer *_alternateLayer;
    TSDBitmapRenderingQualityInfo *_bitmapRenderingQualityInfo;
    NSMapTable *_boundingRectForStageMap;
    struct CGColorSpace *_colorSpace;
    long long _maxStageIndex;
    long long _objectType;
    TSDRep *_rep;
    double _textureOpacity;
    double _textureAngle;
    double _textureAnimationPercent;
    struct CGPoint _center;
    struct CGPoint _originalPosition;
    struct CGRect _boundingRect;
}

+ (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(struct CGRect)arg2;
@property(nonatomic) long long textureZOrder; // @synthesize textureZOrder=_textureZOrder;
@property(nonatomic) double textureAnimationPercent; // @synthesize textureAnimationPercent=_textureAnimationPercent;
@property(nonatomic) double textureAngle; // @synthesize textureAngle=_textureAngle;
@property(nonatomic) double textureOpacity; // @synthesize textureOpacity=_textureOpacity;
@property(nonatomic) __weak TSDRep *rep; // @synthesize rep=_rep;
@property(nonatomic) _Bool shouldIncludeFinalTexturesInVisibleSet; // @synthesize shouldIncludeFinalTexturesInVisibleSet=_shouldIncludeFinalTexturesInVisibleSet;
@property(nonatomic) _Bool shouldTransformUsingTextureCenter; // @synthesize shouldTransformUsingTextureCenter=_shouldTransformUsingTextureCenter;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) long long maxStageIndex; // @synthesize maxStageIndex=_maxStageIndex;
@property(nonatomic) _Bool isMagicMove; // @synthesize isMagicMove=_isMagicMove;
@property(nonatomic) _Bool isFlippedHorizontally; // @synthesize isFlippedHorizontally=_isFlippedHorizontally;
@property(nonatomic) _Bool isBaked; // @synthesize isBaked=_isBaked;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(copy, nonatomic) NSMapTable *boundingRectForStageMap; // @synthesize boundingRectForStageMap=_boundingRectForStageMap;
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // @synthesize bitmapRenderingQualityInfo=_bitmapRenderingQualityInfo;
@property(retain, nonatomic) CALayer *alternateLayer; // @synthesize alternateLayer=_alternateLayer;
@property(readonly, nonatomic) NSArray *allTextures; // @synthesize allTextures=_allTextures;
- (void).cxx_destruct;
- (id)description;
- (id)viewLayerAtEventIndex:(unsigned long long)arg1;
- (void)removeAllPerspectiveLayers;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(struct CGSize)arg2;
- (void)resetLayers;
- (void)resetToOriginalSource;
- (void)evictRenderedResources;
@property(readonly, nonatomic) _Bool isRenderable;
- (void)renderIntoContext:(struct CGContext *)arg1 eventIndex:(unsigned long long)arg2 requiresTransparentBackground:(_Bool)arg3;
- (struct CGRect)p_frameAtEventIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGRect frame;
- (void)setBoundingRect:(struct CGRect)arg1 forStage:(long long)arg2;
- (void)setBoundingRect:(struct CGRect)arg1;
- (_Bool)isBackgroundTexture:(id)arg1;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(_Bool)arg3 shouldBake:(_Bool)arg4 applyScaleOnly:(_Bool)arg5 ignoreScale:(_Bool)arg6 shouldCheckActionKeys:(_Bool)arg7 eventIndex:(unsigned long long)arg8;
- (_Bool)p_areAttributes:(id)arg1 equalToAttributes:(id)arg2;
- (void)p_getComponentsOpacity:(double *)arg1 scale:(double *)arg2 angle:(double *)arg3 fromAttributes:(id)arg4 shouldApplyOpacity:(_Bool *)arg5 shouldApplyAngle:(_Bool *)arg6 shouldApplyScale:(_Bool *)arg7;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2 eventIndex:(unsigned long long)arg3;
- (void)p_resetAttributesWithViewScale:(double)arg1 eventIndex:(unsigned long long)arg2;
- (void)resetAnchorPoint;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (void)p_setLayerGeometryWithLayer:(id)arg1;
- (void)setLayerGeometry;
- (void)setLayerGeometryAtEventIndex:(unsigned long long)arg1;
- (void)hideLayersOfFinalTexturesAtEventIndex:(unsigned long long)arg1;
- (id)finalTexturesForStage:(long long)arg1;
- (long long)stageIndexForTexture:(id)arg1;
- (id)visibleTexturesWithTextureType:(long long)arg1;
- (id)firstVisibleTextureForTextureType:(long long)arg1;
- (void)removeRenderable:(id)arg1;
- (_Bool)hasTexture:(id)arg1 beenFlattenedForKey:(id)arg2;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(_Bool)arg2 shouldFlatten:(_Bool)arg3 flattenKey:(id)arg4;
@property(readonly, nonatomic) NSArray *visibleTextures;
- (void)renderLayerContentsIfNeeded;
@property(readonly, nonatomic) _Bool isImageSource;
@property(readonly, nonatomic) _Bool containsFinalTextures;
- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2;
- (void)p_addRenderable:(id)arg1 forStage:(long long)arg2 shouldAdjustBounds:(_Bool)arg3;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)addRenderable:(id)arg1 shouldAdjustBounds:(_Bool)arg2;
- (void)addRenderable:(id)arg1;
- (struct CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(_Bool)arg2;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)releaseSingleTextures;
- (void)teardown;
- (id)init;

@end

