//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutManager, TTTextStorage, UIImage;

@interface ICTextDragPreviewRenderer : NSObject
{
    struct _NSRange _range;
    struct CGRect _firstRect;
    struct CGRect _lastRect;
    struct CGRect _middleRect;
    struct CGPoint _origin;
    UIImage *_image;
    _Bool _calculated;
    _Bool _unifyRects;
    _Bool _isDraggingChecklistItem;
    NSLayoutManager *_layoutManager;
    TTTextStorage *_textStorage;
    double _renderOffset;
    struct CGPoint _originAdjustment;
    struct _NSRange _renderedGlyphRange;
}

- (void).cxx_destruct;
@property(nonatomic) double renderOffset; // @synthesize renderOffset=_renderOffset;
@property(retain, nonatomic) TTTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(nonatomic) struct _NSRange renderedGlyphRange; // @synthesize renderedGlyphRange=_renderedGlyphRange;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGPoint originAdjustment; // @synthesize originAdjustment=_originAdjustment;
@property(readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) _Bool isDraggingChecklistItem; // @synthesize isDraggingChecklistItem=_isDraggingChecklistItem;
- (struct CGRect)_rawBoundingRect;
- (struct CGRect)_correctlyOffsetBoundingRect;
- (void)_calculateRectsUsingLayoutManager:(id)arg1;
- (void)_calculate;
@property(readonly, nonatomic) struct CGRect lastLineRect;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) struct CGRect firstLineRect;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange)arg2 textStorage:(id)arg3;

@end
