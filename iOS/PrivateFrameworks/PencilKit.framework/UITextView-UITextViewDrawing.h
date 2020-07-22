//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@class PKInk, PKLinedPaper;
@protocol UITextViewDrawingDelegate;

@interface UITextView (UITextViewDrawing)
- (void)_insertDrawing:(id)arg1;
- (void)_insertDrawingWithTap:(id)arg1;
- (_Bool)_canInsertDrawingInRange:(struct _NSRange)arg1;
- (_Bool)_canInsertDrawing;
- (_Bool)_canAddDrawing;
- (_Bool)_canAddStroke;
- (void)_didEndStroke;
- (void)_willBeginNewStrokeForTouch:(id)arg1;
- (void)_undoDrawingBounds:(struct CGRect)arg1 viewBounds:(struct CGRect)arg2 ofAttachmentUUID:(id)arg3;
- (void)_growView:(id)arg1 textAttachment:(id)arg2 atCharacterIndex:(long long)arg3 step:(double)arg4 stop:(CDUnknownBlockType)arg5;
- (void)_removeDrawingAttachment:(id)arg1 withView:(id)arg2 forDeletion:(_Bool)arg3;
- (id)_insertEmptyDrawingAttachmentAtLocation:(long long)arg1;
- (id)_textRangeFromRange:(struct _NSRange)arg1;
@property(nonatomic, getter=isFingerDrawingEnabled) _Bool fingerDrawingEnabled;
@property(nonatomic, getter=isStylusDrawingEnabled) _Bool stylusDrawingEnabled;
@property(nonatomic) __weak id <UITextViewDrawingDelegate> drawingDelegate;
@property(copy, nonatomic) PKLinedPaper *linedPaper;
@property(copy, nonatomic) PKInk *ink;
- (void)_clearDrawingInfo;
- (id)_pkTiledView;
- (id)_drawingInfo;
@end

