//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class PKInk, PKLinedPaper, PKTool, UIImage;
@protocol UITextViewDrawingDelegate;

@interface UITextView (UITextViewDrawing)
- (void)_cleanupStaleCachedViewProviders;
- (id)_cachedViewProviderForTextAttachment:(id)arg1;
- (void)_setCachedViewProvider:(id)arg1 textAttachment:(id)arg2;
- (id)_cacheIdentifierForTextAttachment:(id)arg1;
- (id)_pk_viewProviderForAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 createIfNeeded:(_Bool)arg3;
- (struct CGRect)_pk_lineFragmentRectForGlyphAtCharacterIndex:(unsigned long long)arg1;
- (void)_pk_ensureLayoutForCharacterRange:(struct _NSRange)arg1;
- (void)_pk_invalidateLayoutForCharacterRange:(struct _NSRange)arg1 invalidateDisplay:(_Bool)arg2 ensureLayout:(_Bool)arg3;
- (id)_pk_textRangeFromCharacterRange:(struct _NSRange)arg1 textLayoutManager:(id)arg2;
- (_Bool)_canSelectDrawing;
- (void)_insertDrawing:(id)arg1;
- (_Bool)_canInsertDrawingInRange:(struct _NSRange)arg1;
- (_Bool)_canInsertDrawing;
- (_Bool)_canAddDrawingAtIndex:(unsigned long long)arg1;
- (_Bool)_canAddStroke;
- (void)_didEndStroke;
- (void)_willBeginNewStrokeForTouch:(id)arg1;
- (void)_canvasViewWillCreateSnapshot;
- (void)_upgradeDrawingAtCharacterIndex:(long long)arg1 itemProviders:(id)arg2 insertionLocationInDrawing:(struct CGPoint)arg3;
- (void)_updateDrawingBackgroundColor;
- (void)_undoDrawingBounds:(struct CGRect)arg1 viewBounds:(struct CGRect)arg2 ofAttachmentUUID:(id)arg3;
- (_Bool)_growView:(id)arg1 textAttachment:(id)arg2 atCharacterIndex:(long long)arg3 step:(double)arg4 stop:(CDUnknownBlockType)arg5;
- (void)_removeDrawingAttachment:(id)arg1 withView:(id)arg2 forDeletion:(_Bool)arg3;
- (id)_insertEmptyDrawingAttachmentAtLocation:(long long)arg1;
- (id)_textRangeFromRange:(struct _NSRange)arg1;
- (struct CGRect)_pk_boundsForDrawingTextAttachment:(id)arg1 characterIndex:(unsigned long long)arg2;
- (struct CGRect)_boundsForDrawingTextAttachment:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (void)_didEndInteractiveResize;
- (void)_willBeginInteractiveResize;
@property(nonatomic, getter=isFingerDrawingEnabled) _Bool fingerDrawingEnabled;
@property(nonatomic, getter=isPaperEnabled) _Bool paperEnabled;
- (void)setStylusDrawingEnabled:(_Bool)arg1 drawingClass:(Class)arg2 sixChannelBlending:(_Bool)arg3;
@property(nonatomic, getter=isStylusDrawingEnabled) _Bool stylusDrawingEnabled;
@property(nonatomic) __weak id <UITextViewDrawingDelegate> drawingDelegate;
@property(retain, nonatomic) UIImage *paperTexture;
@property(nonatomic, setter=_setCropDrawingAttachmentsWhenViewIsSmaller:) _Bool _cropDrawingAttachmentsWhenViewIsSmaller;
@property(copy, nonatomic) PKLinedPaper *linedPaper;
@property(nonatomic, getter=isRulerEnabled) _Bool rulerEnabled;
@property(readonly, nonatomic) _Bool _isHandwritingToolSelected;
- (void)_setSelectedInkColor:(id)arg1;
@property(copy, nonatomic, setter=_setTool:) PKTool *_tool;
@property(copy, nonatomic) PKInk *ink;
- (id)_pkTiledViewIfEnabled;
- (void)_clearDrawingInfo;
- (id)_drawingInfo;
- (id)_drawingInfoCreateIfNecessary;
@end

