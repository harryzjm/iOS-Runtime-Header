//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKTiledTextView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit26InlineDrawingTiledTextView : PKTiledTextView
{
    MISSING_TYPE *inlineDrawingCanvasElementController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initInScrollView:(id)arg1 sixChannelBlending:(_Bool)arg2 defaultDrawingClass:(Class)arg3 readOnly:(_Bool)arg4;
- (void)selectionInteractionDidPaste:(id)arg1 atPoint:(struct CGPoint)arg2 inAttachment:(id)arg3;
- (_Bool)selectionInteraction:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 inAttachment:(id)arg4;
- (void)didMoveToWindow;

@end

