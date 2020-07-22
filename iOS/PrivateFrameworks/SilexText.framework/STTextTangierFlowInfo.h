//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexText/STTangierRepDirectLayerHostingInfo-Protocol.h>
#import <SilexText/TSDContainerInfo-Protocol.h>

@class NSString, STTextTangierFlowStorage, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment, TSDRepDirectLayerHosting;

@interface STTextTangierFlowInfo : NSObject <TSDContainerInfo, STTangierRepDirectLayerHostingInfo>
{
    _Bool floatingAboveText;
    _Bool anchoredToText;
    _Bool inlineWithText;
    _Bool attachedToBodyText;
    TSDInfoGeometry *geometry;
    TSPObject<TSDOwningAttachment> *owningAttachment;
    NSObject<TSDContainerInfo> *parentInfo;
    STTextTangierFlowStorage *_storage;
    id <TSDRepDirectLayerHosting> _directLayerHost;
    struct _NSRange _range;
}

@property(nonatomic) __weak id <TSDRepDirectLayerHosting> directLayerHost; // @synthesize directLayerHost=_directLayerHost;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) STTextTangierFlowStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText; // @synthesize attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @synthesize inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @synthesize anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @synthesize floatingAboveText;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @synthesize geometry;
- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)childInfos;
- (_Bool)isThemeContent;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (_Bool)inlineWithText;
- (_Bool)floatingAboveText;
- (_Bool)attachedToBodyText;
- (_Bool)anchoredToText;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

