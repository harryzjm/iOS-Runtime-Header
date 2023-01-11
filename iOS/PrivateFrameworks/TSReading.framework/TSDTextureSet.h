//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TSDRep, TSUNoCopyDictionary;

@interface TSDTextureSet : NSObject <NSCopying>
{
    struct CGPoint mCenter;
    struct CGRect mBounds;
    struct CGPoint mOriginalPosition;
    _Bool mIsBaked;
    _Bool mShouldIncludeFinalTexturesInVisibleSet;
    _Bool mShouldTransformUsingTextureCenter;
    unsigned long long mChunkCount;
    NSMutableArray *mTextures;
    NSMutableArray *mAllTextures;
    TSUNoCopyDictionary *mStageIndexForTexture;
    NSMutableDictionary *mFinalTextureForStage;
    NSMutableDictionary *mBoundingRectForStage;
    NSMutableDictionary *mContentRectForStage;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    NSDictionary *mBakedAttributes;
    struct _NSRange mActiveChunkIndices;
    CALayer *mLayer;
    _Bool mIsMagicMove;
    double mTextureOpacity;
    struct CGRect mTextureContentRect;
    double mTextureAngle;
    long long mTextureZOrder;
    _Bool mIsBackground;
    CALayer *mAlternateLayer;
    TSDRep *mRep;
    struct CGColorSpace *mColorSpace;
    long long mMaxStageIndex;
    long long _stageIndex;
}

@property(readonly, nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property TSDRep *rep; // @synthesize rep=mRep;
@property(nonatomic) long long textureZOrder; // @synthesize textureZOrder=mTextureZOrder;
@property(nonatomic) double textureOpacity; // @synthesize textureOpacity=mTextureOpacity;
@property(nonatomic) double textureAngle; // @synthesize textureAngle=mTextureAngle;
@property(nonatomic) struct CGRect textureContentRect; // @synthesize textureContentRect=mTextureContentRect;
@property(nonatomic) _Bool shouldTransformUsingTextureCenter; // @synthesize shouldTransformUsingTextureCenter=mShouldTransformUsingTextureCenter;
@property(nonatomic) _Bool shouldIncludeFinalTexturesInVisibleSet; // @synthesize shouldIncludeFinalTexturesInVisibleSet=mShouldIncludeFinalTexturesInVisibleSet;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=mOriginalPosition;
@property(readonly, nonatomic) long long maxStageIndex; // @synthesize maxStageIndex=mMaxStageIndex;
@property(nonatomic) _Bool isMagicMove; // @synthesize isMagicMove=mIsMagicMove;
@property(nonatomic) _Bool isBaked; // @synthesize isBaked=mIsBaked;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=mIsBackground;
@property(retain, nonatomic) NSDictionary *contentRectForStage; // @synthesize contentRectForStage=mContentRectForStage;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=mColorSpace;
@property(readonly, nonatomic) unsigned long long chunkCount; // @synthesize chunkCount=mChunkCount;
@property(nonatomic) struct CGPoint center; // @synthesize center=mCenter;
@property(retain, nonatomic) NSDictionary *boundingRectForStage; // @synthesize boundingRectForStage=mBoundingRectForStage;
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=mBounds;
@property(retain, nonatomic) CALayer *alternateLayer; // @synthesize alternateLayer=mAlternateLayer;
@property(readonly, nonatomic) NSArray *allTextures; // @synthesize allTextures=mAllTextures;
- (id)description;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(struct CGSize)arg2;
@property(readonly, nonatomic) _Bool isRenderable;
- (void)renderIntoContext:(struct CGContext *)arg1;
@property(readonly, nonatomic) struct CGRect frame;
- (void)setContentRect:(struct CGRect)arg1 forStage:(long long)arg2;
- (void)setBoundingRect:(struct CGRect)arg1 forStage:(long long)arg2;
- (void)setBoundingRect:(struct CGRect)arg1;
- (_Bool)isBackgroundTexture:(id)arg1;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(_Bool)arg3 shouldBake:(_Bool)arg4 applyScaleOnly:(_Bool)arg5 ignoreScale:(_Bool)arg6 shouldCheckActionKeys:(_Bool)arg7;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2;
- (void)p_resetAttributesWithViewScale:(double)arg1;
- (void)resetAnchorPoint;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (void)setLayerGeometryFromRep:(id)arg1;
- (void)hideLayersOfFinalTextures;
- (id)finalTextureForStage:(long long)arg1 reverse:(_Bool)arg2;
- (long long)stageIndexForTexture:(id)arg1;
- (id)newFlattenedTexture;
- (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(struct CGRect)arg2;
- (id)firstVisibleTextureForTextureType:(int)arg1;
- (void)removeRenderable:(id)arg1;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(_Bool)arg2 shouldFlatten:(_Bool)arg3;
@property(readonly, nonatomic) NSArray *visibleTextures;
- (void)renderLayerContentsIfNeeded;
- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(_Bool)arg3;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)addRenderable:(id)arg1;
- (struct CGRect)contentRectForStage:(long long)arg1 isBuildIn:(_Bool)arg2;
- (struct CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(_Bool)arg2;
@property(readonly, nonatomic) CALayer *layer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)teardown;
- (id)init;

@end

