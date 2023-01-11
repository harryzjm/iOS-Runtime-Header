//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PagesQuicklook/TSDContainerInfo-Protocol.h>
#import <PagesQuicklook/TSKModelRootIndexProvider-Protocol.h>

@class NSArray, NSString, TPPageHint, TPPageInfo, TSDInfoGeometry, TSPObject, TSWPStorage;
@protocol TSDHint, TSDInfo, TSDOwningAttachment, TSWPOffscreenColumn, TSWPTopicNumberHints;

@interface TPBodyInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider>
{
    TPPageInfo *_pageInfo;
}

@property(nonatomic) NSObject<TSDInfo> *parentInfo; // @synthesize parentInfo=_pageInfo;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childInfos;
- (id)copyWithContext:(id)arg1;
- (_Bool)isThemeContent;
- (_Bool)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithTextWithWrap) _Bool inlineWithTextWithWrap;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (long long)modelRootIndex;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)inflateBodyLayout:(id)arg1;
@property(readonly, nonatomic) _Bool laysOutVertically;
@property(readonly, nonatomic) TPPageHint *pageHint;
@property(readonly, nonatomic) TSWPStorage *storage;
@property(readonly, nonatomic) TSWPStorage *bodyStorage;
@property(readonly, nonatomic) id <TSDHint> nextTargetFirstChildHint;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *previousTargetTopicNumbers;
@property(readonly, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isMaster;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end
