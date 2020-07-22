//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSUUID, NSUndoManager, PKDrawing, PKInternalDrawingView, PKModifyStrokesCommand, UIView;

@protocol PKSelectionDelegate
- (void)resetSelectedStrokeStateForRenderer;
- (void)applyCommand:(PKModifyStrokesCommand *)arg1 toDrawing:(PKDrawing *)arg2;
- (PKInternalDrawingView *)drawingView;
- (PKDrawing *)drawingForLiveAttachment;
- (_Bool)liveDrawingIsAtEndOfDocument;
- (void)didBeginDraggingSelection;
- (_Bool)isValidDropPointForStrokes:(struct CGPoint)arg1;
- (struct CGPoint)closestPointForPastedSelectionRect:(struct CGRect)arg1 withDrawing:(id *)arg2;
- (PKDrawing *)drawingForSelectionRect:(struct CGRect)arg1;
- (PKDrawing *)drawingForUUID:(NSUUID *)arg1;
- (_Bool)containsDrawingUUID:(NSUUID *)arg1;
- (struct CGPoint)pointInStrokeSpace:(struct CGPoint)arg1 inDrawing:(PKDrawing *)arg2;
- (void)selectionRefreshWithChangeToDrawings:(NSArray *)arg1;
- (UIView *)selectionTopView;
- (void)scrollContent:(struct CGPoint)arg1;
- (void)toggleSelectedStrokes:(NSArray *)arg1 hide:(_Bool)arg2 inDrawing:(PKDrawing *)arg3;
- (SEL)drawingUndoSelector;
- (id)drawingUndoTarget;
- (NSUndoManager *)undoManager;
- (struct CGAffineTransform)imageTransform;
- (struct CGAffineTransform)selectionDrawingTransform;
- (struct CGPoint)selectionOffsetForDrawing:(PKDrawing *)arg1;
@end

