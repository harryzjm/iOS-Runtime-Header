//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextInteractableItem;

__attribute__((visibility("hidden")))
@interface _UITextSimpleLinkInteraction
{
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
}

- (void).cxx_destruct;
- (_Bool)_presentActionsForTextInteractableItem:(id)arg1;
- (_Bool)_allowItemInteractions;
- (_Bool)_beginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)highlight:(id)arg1;
- (void)linkTapped:(id)arg1;
- (id)textLinkInteractableView;
- (id)itemInteractableView;
- (id)gesturesForFailureRequirements;
- (id)init;

@end
