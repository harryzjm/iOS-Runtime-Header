//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDInfoWithPathSource-Protocol.h>
#import <TSDrawables/TSDMixing-Protocol.h>

@class NSObject, NSString, TSDInfoGeometry, TSDPathSource, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSDMaskInfo <TSDMixing, TSDInfoWithPathSource>
{
    TSDPathSource *mPathSource;
}

@property(copy, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)objectForProperty:(int)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (Class)repClass;
- (Class)layoutClass;
- (_Bool)isEqualToMaskInfo:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;
- (void)saveToArchive:(struct MaskArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct MaskArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isInlineWithTextWithWrap) _Bool inlineWithTextWithWrap;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDInfo> *parentInfo;
@property(readonly) Class superclass;

@end
