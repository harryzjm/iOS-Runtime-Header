//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/TSWPInteractiveCanvasControllerDelegate-Protocol.h>

@class STTextTangierFlowInfo, STTextTangierInteractiveCanvasController, TSDInteractiveCanvasController, TSWPHyperlinkField, UIScrollView, UITextInteraction;

@protocol STTextTangierInteractiveCanvasControllerDelegate <TSWPInteractiveCanvasControllerDelegate>

@optional
- (_Bool)interactiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1 shouldBeginInteraction:(UITextInteraction *)arg2 atPoint:(struct CGPoint)arg3;
- (void)interactiveCanvasControllerWillStartInteraction:(STTextTangierInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewDidEndDragging:(UIScrollView *)arg2 willDecelerate:(_Bool)arg3;
- (void)interactiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1 interactedWithHyperlink:(TSWPHyperlinkField *)arg2 info:(STTextTangierFlowInfo *)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(_Bool)arg6;
@end

