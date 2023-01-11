//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDAttachmentAwareContainerInfo-Protocol.h>
#import <TSDrawables/TSDMixing-Protocol.h>
#import <TSDrawables/TSDModelContainer-Protocol.h>
#import <TSDrawables/TSDMutableContainerInfo-Protocol.h>
#import <TSDrawables/TSKDocumentObject-Protocol.h>

@class NSArray, NSMutableArray, NSObject, NSSet, NSString, TSDInfoGeometry, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSDGroupInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDModelContainer, TSDAttachmentAwareContainerInfo>
{
    NSMutableArray *mChildInfos;
    _Bool mIsInDocument;
}

+ (id)p_drawablesToInsertForGroup:(id)arg1 outDidUngroup:(_Bool *)arg2 filteredWithBlock:(CDUnknownBlockType)arg3;
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithBlock:(CDUnknownBlockType)arg2;
+ (id)groupGeometryFromChildrenInfos:(id)arg1 currentlyLaidOutWithLayoutController:(id)arg2;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
+ (Class)classForUnarchiver:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldShowInPrint;
- (void)p_didUpdateChildInfos;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (_Bool)canCopyData;
- (_Bool)needsDownload;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (_Bool)allowsTitle;
- (_Bool)allowsCaption;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (id)childEnumeratorForUserSearch;
- (_Bool)canAnchor;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)ensureGeometryFitsChildren;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)p_ungroupedGeometryForInfo:(id)arg1;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (void)removeAllChildrenInDocument:(_Bool)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(id)arg1;
@property(copy, nonatomic) NSArray *childInfos;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(id)arg1;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *containedModels;
@property(readonly, nonatomic) NSSet *infosToObserveForAttachedInfo;
- (id)infoForSelectionPath:(id)arg1;
- (_Bool)isNonGroupedChild:(id)arg1;
@property(readonly, nonatomic) NSArray *allNestedChildrenInfosIncludingGroups;
@property(readonly, nonatomic) NSArray *allNestedChildrenInfosForWrap;
@property(readonly, nonatomic) NSArray *allNestedChildrenInfos;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) _Bool isEffectivelyEmpty;
@property(readonly, nonatomic) _Bool isFreehandDrawing;
- (Class)repClass;
- (Class)layoutClass;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (_Bool)shouldBeIgnoredWhenCopying;
- (_Bool)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
- (_Bool)supportsParentRotation;
- (_Bool)allowsParentGroupToBeResizedWithoutAspectRatioLock;
@property(readonly, nonatomic) _Bool canAspectRatioLockBeChangedByUser;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct GroupArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct GroupArchive *)arg1 unarchiver:(id)arg2 upgradeDOLC:(_Bool)arg3;
- (void)loadFromUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(readonly, nonatomic, getter=isInlineWithTextWithWrap) _Bool inlineWithTextWithWrap;
@property(readonly, nonatomic) _Bool isMaster;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end
