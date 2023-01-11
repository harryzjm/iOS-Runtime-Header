//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/KNInspectableAnimation-Protocol.h>
#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>

@class KNAbstractSlide, KNAnimationInfo, KNAnimationPluginMenu, KNBuildAttributes, KNBuildChunk, NSArray, NSMutableDictionary, NSSet, NSString, NSUUID, TSDBezierPathSource, TSDDrawableInfo, TSDEditableBezierPathSource, TSUColor;

__attribute__((visibility("hidden")))
@interface KNBuild <NSCopying, TSKTransformableObject, KNInspectableAnimation, TSKModel>
{
    NSUUID *_drawableId;
    NSString *_delivery;
    KNBuildAttributes *_attributes;
    int _chunkIDSeed;
    KNAbstractSlide *_slide;
    TSDDrawableInfo *_drawable;
    NSArray *_cachedChunks;
    struct _NSRange _cachedActiveChunkRange;
    _Bool _cachedActiveChunkRangeIsValid;
    NSMutableDictionary *_buildChunkIDMap;
}

+ (id)buildWithEffect:(id)arg1 animationType:(long long)arg2 drawable:(id)arg3 slide:(id)arg4;
+ (id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(long long)arg2;
+ (id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(long long)arg2;
+ (id)p_drawableFromInfo:(id)arg1;
+ (_Bool)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2;
+ (void)i_repairBuildToDrawableReferencesFromUUIDsForBuilds:(id)arg1 drawables:(id)arg2;
+ (_Bool)needsObjectUUID;
@property(nonatomic) __weak KNAbstractSlide *slide; // @synthesize slide=_slide;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canEditAnimations;
- (_Bool)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1;
@property(readonly, nonatomic) NSSet *inspectableAttributes;
@property(readonly, nonatomic) NSString *customEffectTimingCurveThemeName3;
@property(readonly, nonatomic) NSString *customEffectTimingCurveThemeName2;
@property(readonly, nonatomic) NSString *customEffectTimingCurveThemeName1;
@property(readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve3;
@property(readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve2;
@property(readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve1;
@property(readonly, nonatomic) double customDetail;
@property(readonly, nonatomic) long long randomNumberSeed;
@property(readonly, nonatomic) unsigned long long customJiggleIntensity;
@property(readonly, nonatomic) unsigned long long customScale;
@property(readonly, nonatomic) _Bool customDecay;
@property(readonly, nonatomic) unsigned long long customRepeatCount;
@property(readonly, nonatomic) double customTravelDistance;
@property(readonly, nonatomic) double customScaleAmount;
@property(readonly, nonatomic) _Bool customShine;
@property(readonly, nonatomic) _Bool customIncludeEndpoints;
@property(readonly, nonatomic) _Bool customMotionBlur;
@property(readonly, nonatomic) _Bool customBounce;
@property(readonly, nonatomic) long long customAccelerationOption;
@property(readonly, nonatomic) unsigned long long customDeliveryOption;
@property(readonly, nonatomic) long long customTextDelivery;
@property(readonly, nonatomic) float custom3DChartRotation;
@property(readonly, nonatomic) double actionOpacity;
@property(readonly, nonatomic) unsigned long long actionRotationDirection;
@property(readonly, nonatomic) double actionRotationAngle;
@property(readonly, nonatomic) double actionScale;
@property(readonly, nonatomic) TSDEditableBezierPathSource *actionMotionPathSource;
@property(readonly, nonatomic) unsigned long long actionAcceleration;
@property(readonly, nonatomic) TSUColor *color;
@property(readonly, nonatomic) unsigned long long direction;
@property(readonly, nonatomic) double durationDefaultForInitialChunk;
@property(readonly, nonatomic) long long animationType;
@property(readonly, nonatomic) _Bool supportsCustomTextDelivery;
@property(readonly, nonatomic) _Bool supportsDelivery;
- (_Bool)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1;
@property(readonly, nonatomic) _Bool supportsCustomDetail;
@property(readonly, nonatomic) _Bool supportsCustomEffectTimingCurve3;
@property(readonly, nonatomic) _Bool supportsCustomEffectTimingCurve2;
@property(readonly, nonatomic) _Bool supportsCustomEffectTimingCurve1;
@property(readonly, nonatomic) _Bool supportsRandomNumberSeedInspection;
@property(readonly, nonatomic) _Bool supportsTravelDistance;
@property(readonly, nonatomic) _Bool supportsScaleAmount;
@property(readonly, nonatomic) _Bool supportsShine;
@property(readonly, nonatomic) _Bool supportsIncludeEndpoints;
- (_Bool)supportsAcceleration;
@property(readonly, nonatomic) _Bool supportsBounce;
@property(readonly, nonatomic) _Bool supportsDuration;
@property(readonly, nonatomic) _Bool supportsDirection;
@property(readonly, nonatomic) _Bool isContentBuild;
@property(readonly, nonatomic) _Bool isEmphasisBuild;
@property(readonly, nonatomic) _Bool isActionMotionBuild;
@property(readonly, nonatomic) _Bool isActionBuild;
@property(readonly, nonatomic) _Bool hasComplement;
- (_Bool)p_hasComplementInBuilds:(id)arg1;
- (_Bool)isComplementOfBuild:(id)arg1;
@property(readonly, nonatomic) _Bool isOnSlide;
@property(readonly, nonatomic) NSString *title;
- (id)p_chunkTitleByTruncatingTitle:(id)arg1 toLength:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasInactiveChunks;
@property(readonly, nonatomic) unsigned long long lastActiveChunkIndexInBuild;
@property(readonly, nonatomic) unsigned long long firstActiveChunkIndexInBuild;
- (unsigned long long)endChunkIndexFromEndOffset:(unsigned long long)arg1;
- (struct _NSRange)p_calculateActiveChunkRange;
@property(readonly, nonatomic) struct _NSRange activeChunkRange;
@property(readonly, nonatomic) unsigned long long endOffset;
@property(readonly, nonatomic) unsigned long long startOffset;
@property(readonly, nonatomic) unsigned long long deliveryStyle;
@property(readonly, nonatomic) NSString *deliveryWithoutDowngrading;
@property(copy, nonatomic) NSString *delivery;
- (_Bool)p_isDeliveryLocalized:(id)arg1 forNonNilDrawable:(id)arg2;
@property(readonly, nonatomic) _Bool downgradesDelivery;
- (id)deliveriesLocalized:(_Bool)arg1;
- (id)chunkForIdentifier:(id)arg1;
@property(readonly, nonatomic) KNBuildChunk *firstChunk;
@property(readonly, nonatomic) unsigned long long expectedChunkCount;
@property(readonly, nonatomic) unsigned long long chunkCount;
@property(readonly, nonatomic) unsigned long long lastChunkIndexOnSlide;
@property(readonly, nonatomic) unsigned long long firstChunkIndexOnSlide;
- (id)p_chunkAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *chunks;
@property(readonly, nonatomic) NSString *animationFilter;
@property(readonly, nonatomic) NSString *localizedEffect;
@property(readonly, nonatomic) unsigned long long directionType;
@property(readonly, nonatomic) KNAnimationPluginMenu *directionMenu;
@property(readonly, nonatomic) KNAnimationInfo *animationInfo;
@property(copy, nonatomic) KNBuildAttributes *attributes;
@property(readonly, nonatomic) NSString *effect;
@property(retain, nonatomic) TSDDrawableInfo *drawable;
@property(readonly, copy) NSString *description;
- (void)didInitFromSOS;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(long long)arg3 context:(id)arg4;
- (void)i_deregisterBuildChunkWithChunkIdentifier:(id)arg1;
- (id)i_buildChunkForChunkIdentifier:(id)arg1;
- (id)p_buildChunkIDMap;
- (void)i_registerBuildChunkIdentifierForChunk:(id)arg1;
- (void)i_resetChunkIDSeed;
@property(readonly, nonatomic) int i_chunkIDSeed;
- (void)i_rollbackChunkIDSeedForChunk:(id)arg1;
- (void)i_generateAndApplyNewChunkIdentifierToChunk:(id)arg1;
- (id)i_drawableOnSlide:(id)arg1;
- (id)i_drawableForArchiving:(_Bool)arg1;
@property(readonly, nonatomic) _Bool i_isFullyFormedBuild;
@property(readonly, nonatomic) NSUUID *i_drawableId;
@property(readonly, nonatomic) TSDDrawableInfo *i_drawable;
- (void)i_invalidateChunkCache;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct BuildArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct BuildArchive *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

