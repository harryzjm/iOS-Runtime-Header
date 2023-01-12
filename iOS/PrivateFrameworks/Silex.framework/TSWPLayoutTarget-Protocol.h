//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, NSMutableArray, NSObject, TSDBezierPath, TSDCanvas, TSDDrawableInfo, TSDLayout, TSPObject, TSWPColumn, TSWPDrawableAttachment;
@protocol TSDHint, TSDInfo, TSWPColumnMetrics, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPStyleProvider;

@protocol TSWPLayoutTarget <NSObject>
@property(readonly, nonatomic) double maxAnchorY;
@property(readonly, nonatomic) _Bool layoutIsValid;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
@property(readonly, nonatomic) _Bool wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) unsigned int naturalAlignment;
@property(readonly, nonatomic) unsigned int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) const void *nextTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const void *previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
@property(readonly, retain, nonatomic) NSMutableArray *columns;
- (_Bool)isLayoutOffscreen;
- (void)addAttachmentLayout:(TSDLayout *)arg1;
- (NSArray *)currentAnchoredDrawableLayouts;
- (NSArray *)currentInlineDrawableLayouts;
- (TSDLayout *)validatedLayoutForAnchoredDrawable:(id <TSDInfo>)arg1;
- (TSDLayout *)layoutForInlineDrawable:(id <TSDInfo>)arg1;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (_Bool)shouldPositionAttachmentsIteratively;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
- (_Bool)isLastTarget;
- (NSObject<TSWPColumnMetrics> *)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) _Bool alwaysAllowWordSplit;
@property(readonly, nonatomic) _Bool pushAscendersIntoColumn;
@property(readonly, nonatomic) _Bool allowsDescendersToClip;
@property(readonly, nonatomic) _Bool ignoresEquationAlignment;
@property(readonly, nonatomic) unsigned int maxLineCount;
@property(readonly, nonatomic) double reservedWidthWhenTruncating;
@property(readonly, nonatomic) _Bool allowsLastLineTruncation;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) TSDCanvas *canvas;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, nonatomic) struct CGRect maskRect;
- (_Bool)adjustColumnOriginForAlignment;
- (_Bool)siblingTargetIsManipulatingDrawable:(TSDDrawableInfo *)arg1;
- (struct _NSRange)expandedRangeForLayoutRange:(struct _NSRange)arg1 styleProvider:(id <TSWPStyleProvider>)arg2;
- (TSDBezierPath *)interiorClippingPath;
- (_Bool)invalidateForPageCountChange;
- (unsigned int)pageIndex;
- (void)scaleTextPercentDidChange:(unsigned long long)arg1;
- (_Bool)drawableAttachment:(TSWPDrawableAttachment *)arg1 withLayout:(TSDLayout *)arg2 shouldPositionIterativelyInColumn:(TSWPColumn *)arg3;
- (void)drawableAttachment:(TSWPDrawableAttachment *)arg1 didFinalizePosition:(struct CGPoint)arg2;
- (void)drawableAttachment:(TSWPDrawableAttachment *)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;
- (void)startedIterativePositioningProcessForDrawableAttachment:(TSWPDrawableAttachment *)arg1;
- (struct CGPoint)anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint)arg1;
- (struct CGPoint)layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint)arg1;
- (struct CGPoint)layoutPositionFromInlineAttachmentPosition:(struct CGPoint)arg1;
@end

