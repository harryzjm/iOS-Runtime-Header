//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/TSDInteractiveCanvasControllerDelegate-Protocol.h>

@class TSDRep, TSWPFootnoteReferenceAttachment, TSWPHyperlinkField, TSWPInteractiveCanvasController, TSWPSmartField, TSWPTwoPartAction, UIDragInteraction, UIDragItem, UIView, _UINonEditableTextSelectionForceGesture;
@protocol TSDGesture, TSWPHyperlinkHostRepProtocol, UIDragSession;

@protocol TSWPInteractiveCanvasControllerDelegate <TSDInteractiveCanvasControllerDelegate>

@optional
@property(readonly, nonatomic) _Bool interactiveCanvasControllerAllowsHyperlinkInteraction;
- (_Bool)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 tappedOnFootnoteAttachment:(TSWPFootnoteReferenceAttachment *)arg2;
- (_Bool)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 configureHardPressGesture:(_UINonEditableTextSelectionForceGesture *)arg2;
- (_Bool)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 allowsDragOfSmartField:(TSWPSmartField *)arg2;
- (UIDragItem *)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 dragItemForSmartField:(TSWPSmartField *)arg2 interaction:(UIDragInteraction *)arg3 session:(id <UIDragSession>)arg4;
- (void)showInsertPageNumberUIFromRect:(struct CGRect)arg1 inView:(UIView *)arg2;
- (TSWPTwoPartAction *)actionForHyperlink:(TSWPHyperlinkField *)arg1 inRep:(TSDRep<TSWPHyperlinkHostRepProtocol> *)arg2 gesture:(id <TSDGesture>)arg3;
@end

