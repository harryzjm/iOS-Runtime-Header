//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPContainedObject.h>

@class KNSlideNode, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSNumberFormatter, NSString;

@interface KNSlideTree : TSPContainedObject
{
    NSMutableOrderedSet *_slideNodes;
    NSMutableArray *_displayedSlideNodeCache;
    NSMutableDictionary *_slideNodesForUniqueIdentifiersCache;
    NSMutableDictionary *_slideNodesForFormulaReferenceNamesCache;
    NSMapTable *_formulaReferenceNamesForSlideNodesCache;
    NSNumberFormatter *_formatter;
}

+ (_Bool)areMultipleMasterTypesInCollection:(id)arg1;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 atDepths:(id)arg2 minimumValidDepth:(unsigned long long)arg3 canExceedSlideTreeMaxDepth:(_Bool)arg4;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 minimumValidDepth:(unsigned long long)arg2 canExceedSlideTreeMaxDepth:(_Bool)arg3;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 atDepths:(id)arg2 minimumValidDepth:(unsigned long long)arg3;
+ (id)slideNodeDepthMapToCleanUpSlideNodes:(id)arg1 minimumValidDepth:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSArray *displayedSlideNodes; // @synthesize displayedSlideNodes=_displayedSlideNodeCache;
- (void)p_cacheSlideNodes;
- (void)p_clearSlideNodeCache;
- (void)addSlideNodeForDocumentUpgrade:(id)arg1 atDepth:(unsigned long long)arg2;
- (id)slideNodesInAscendingOrder:(id)arg1;
- (_Bool)slideNodeIsDisplayed:(id)arg1;
- (id)parentOfSlideNode:(id)arg1;
- (id)slideNodeAfterSlideNode:(id)arg1 omitSkippedSlideNodes:(_Bool)arg2 omitCollapsedSlideNodes:(_Bool)arg3;
- (id)slideNodeBeforeSlideNode:(id)arg1 omitSkippedSlideNodes:(_Bool)arg2 omitCollapsedSlideNodes:(_Bool)arg3;
- (id)descendantsOfSlideNode:(id)arg1 omitSkippedSlideNodes:(_Bool)arg2 omitCollapsedSlideNodes:(_Bool)arg3;
- (id)childrenOfSlideNode:(id)arg1;
- (void)invalidateSlideNameCache;
- (id)slideNamesMatchingPrefix:(id)arg1;
- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)formulaReferenceNameForSlideNode:(id)arg1;
- (id)slidesUsingTemplateSlide:(id)arg1;
- (unsigned long long)numberOfSlidesUsingTemplateSlide:(id)arg1;
- (void)slideIndex:(unsigned long long *)arg1 andEventIndex:(unsigned long long *)arg2 forByBuildPageIndex:(unsigned long long)arg3;
- (unsigned long long)byBuildPageIndexForSlideIndex:(unsigned long long)arg1 andEventIndex:(unsigned long long)arg2;
- (unsigned long long)visiblePageCountIsSeparatedByBuilds:(_Bool)arg1;
- (unsigned long long)slideNumberForSlideNode:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)slideNodeWithUniqueIdentifier:(id)arg1;
- (id)slideNodeAtIndex:(unsigned long long)arg1 ignoreHiddenNodes:(_Bool)arg2;
- (id)unhiddenSlideNodeAtIndex:(unsigned long long)arg1;
- (void)reloadDisplayedNodes;
- (id)orderedSlideNodesInSelection:(id)arg1;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (_Bool)containsSlideNode:(id)arg1;
- (id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) KNSlideNode *defaultSlideNodeForNewSelection;
@property(readonly, nonatomic) NSArray *visibleSlideNodes;
- (void)removeAll;
- (void)removeSlideNodes:(id)arg1 atIndexes:(id)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4;
- (void)moveSlideNodes:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 slideNodesChangingDepths:(id)arg4 depthsOfSlideNodesChangingDepths:(id)arg5;
- (void)insertSlideNodes:(id)arg1 atIndexes:(id)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4 dolcContext:(id)arg5;
- (void)addSlideNode:(id)arg1 atDepth:(unsigned long long)arg2 dolcContext:(id)arg3;
@property(readonly, nonatomic) NSArray *slideNodes;
- (id)objectEnumerator;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2 owner:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

