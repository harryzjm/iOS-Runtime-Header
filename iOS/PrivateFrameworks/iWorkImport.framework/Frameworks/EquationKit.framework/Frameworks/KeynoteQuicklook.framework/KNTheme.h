//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSApplication/TSATheme.h>

@class KNLiveVideoSourceCollection, KNSlideNode, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, TSUPointerKeyDictionary, TSWPParagraphStyle;
@protocol OS_dispatch_queue;

@interface KNTheme : TSATheme
{
    NSString *_UUID;
    NSArray *_templateSlides;
    NSMutableArray *_classicThemeRecords;
    NSMutableDictionary *_customEffectTimingCurves;
    NSObject<OS_dispatch_queue> *_defaultTemplateSlideNodeQueue;
    KNSlideNode *_defaultTemplateSlideNode;
    _Bool _defaultTemplateSlideNodeIsOurBestGuess;
    KNLiveVideoSourceCollection *_liveVideoSourceCollection;
    NSMutableDictionary *_slideNodesForFormulaReferenceNamesCache;
    TSUPointerKeyDictionary *_formulaReferenceNamesForSlideNodesCache;
}

+ (id)makeLiveVideoSourceCollectionWithContext:(id)arg1;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3;
+ (id)presetKinds;
+ (void)registerPresetSourceClasses;
+ (id)themeNameForCustomOrUnknownTheme;
+ (id)classicThemeNameFromTheme:(id)arg1;
+ (id)nativeThemeNameFromTheme:(id)arg1;
+ (id)generateUUID;
+ (void)initialize;
+ (_Bool)needsObjectUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) KNLiveVideoSourceCollection *liveVideoSourceCollection; // @synthesize liveVideoSourceCollection=_liveVideoSourceCollection;
@property(retain, nonatomic) NSArray *classicThemeRecords; // @synthesize classicThemeRecords=_classicThemeRecords;
@property(readonly, nonatomic) _Bool defaultTemplateSlideNodeIsOurBestGuess; // @synthesize defaultTemplateSlideNodeIsOurBestGuess=_defaultTemplateSlideNodeIsOurBestGuess;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(id)arg1;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *containedModels;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)modelPathComponentForChild:(id)arg1;
- (id)childEnumerator;
- (void)takeLiveVideoSourceCollectionFromTheme:(id)arg1;
- (void)p_cacheSlideNodes;
- (void)invalidateSlideNameCache;
- (id)slideNamesMatchingPrefix:(id)arg1;
- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)formulaReferenceNameForSlideNode:(id)arg1;
- (void)resolveDefaultTemplateSlide;
- (id)p_findDefaultTemplateSlideWithoutLoadingSlides;
- (id)i_findDefaultTemplateSlideDuringArchiving;
- (void)selectFallbackTemplateSlideAsDefault;
- (void)p_selectFallbackTemplateSlideAsDefault;
- (id)p_findFallbackDefaultTemplateSlide;
- (void)removeAllClassicThemeRecords;
- (void)addClassicThemeRecord:(id)arg1;
- (void)addDefaultPresenterNotesStylesIfAbsent;
@property(readonly, nonatomic) TSWPParagraphStyle *defaultPresenterNotesParagraphStyle;
- (id)undeletableStyles;
- (void)createDefaultMotionBackgroundStylePresetsIfNeeded;
- (id)mappedTemplateSlideForPasteForSlide:(id)arg1;
- (id)mappedTemplateSlideForThemeChangeForTemplateSlide:(id)arg1;
- (id)mappedTemplateSlideForPasteForTemplateSlide:(id)arg1;
- (id)p_mappedTemplateSlideForTemplateSlide:(id)arg1 scoringHeuristic:(CDUnknownBlockType)arg2;
- (int)p_matchScoreForTemplateSlide:(id)arg1 toTemplateSlide:(id)arg2;
@property(readonly, nonatomic) NSArray *displayedSlideNodes;
@property(readonly, nonatomic) NSArray *slideNodes;
- (id)orderedSlideNodesInSelection:(id)arg1;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (_Bool)containsSlideNode:(id)arg1;
- (id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) KNSlideNode *defaultSlideNodeForNewSelection;
- (void)removeAllTemplateSlides;
- (void)removeTemplateSlideNode:(id)arg1;
- (id)p_nameByIncrementingCounterAfterStringToAppend:(id)arg1 forOriginalName:(id)arg2 testForExistingName:(CDUnknownBlockType)arg3;
- (id)themeCurvesForBuilds:(id)arg1 slideNodes:(id)arg2;
- (id)updatedThemeCurveInfoForPastedThemeCurves:(id)arg1;
- (void)removeCustomTimingCurveWithName:(id)arg1;
- (_Bool)customTimingCurvesContainsName:(id)arg1;
- (id)customTimingCurveWithName:(id)arg1;
- (void)setCustomTimingCurve:(id)arg1 forName:(id)arg2;
@property(copy, nonatomic) NSDictionary *customEffectTimingCurves;
- (id)nameForTemplateSlideCopyWithName:(id)arg1;
- (id)templateSlideWithName:(id)arg1;
- (_Bool)containsTemplateSlideWithName:(id)arg1;
- (void)insertTemplateSlideNode:(id)arg1 withThumbnails:(id)arg2 atIndex:(unsigned long long)arg3 dolcContext:(id)arg4;
- (void)addTemplateSlideNode:(id)arg1 withThumbnails:(id)arg2 dolcContext:(id)arg3;
- (void)addTemplateSlideNode:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (id)initWithContext:(id)arg1 documentStylesheet:(id)arg2;
- (void)bootstrapWhiteThemeOfSize:(struct CGSize)arg1;
- (void)bootstrapGradientThemeOfSize:(struct CGSize)arg1;
- (void)bootstrapBlackThemeOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double cornerRadius;
- (void)bootstrapThemeOfSize:(struct CGSize)arg1 alternate:(unsigned long long)arg2;
@property(retain, nonatomic) KNSlideNode *defaultTemplateSlideNode;
- (void)p_setDefaultTemplateSlideNode:(id)arg1;
@property(retain, nonatomic) NSString *UUID;
@property(copy, nonatomic) NSArray *templateSlides;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const void *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

