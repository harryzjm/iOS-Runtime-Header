//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit23CanvasElementResizeView : UIView
{
    MISSING_TYPE *resizeHandles;
    MISSING_TYPE *borderView;
    MISSING_TYPE *canvas;
    MISSING_TYPE *contextMenuInteraction;
    MISSING_TYPE *resizingCanvasElements;
    MISSING_TYPE *hasContextMenuInteractionVisible;
    MISSING_TYPE *hasDraggingCanvasElement;
    MISSING_TYPE *resizeOriginalFrame;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)tapped:(id)arg1;
- (void)dragMoved:(id)arg1;
- (void)resizeHandleMoved:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end
