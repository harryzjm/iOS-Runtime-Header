//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIContextMenuInteraction, UINotificationFeedbackGenerator, UITextRange, UIView, _UIHighlightView;
@protocol _UITextContent, _UITextItemInteracting, _UITextItemInteractionHandler;

__attribute__((visibility("hidden")))
@interface _UITextInteractableItem : NSObject
{
    UINotificationFeedbackGenerator *_feedbackGenerator;
    _UIHighlightView *_highlightView;
    UITextRange *_range;
    id <_UITextItemInteractionHandler> _handler;
    UIView<_UITextItemInteracting> *_textItemInteractingView;
    UIContextMenuInteraction *_contextMenuInteraction;
    id <_UITextContent> _textContent;
    struct CGPoint _location;
}

+ (void)_removeHighlight;
+ (id)_sharedHighlightView;
+ (id)interactableLink:(id)arg1 range:(id)arg2 inTextItemInteractingView:(id)arg3 atLocation:(struct CGPoint)arg4;
+ (id)interactableAttachment:(id)arg1 range:(id)arg2 inTextItemInteractingView:(id)arg3 atLocation:(struct CGPoint)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_UITextContent> textContent; // @synthesize textContent=_textContent;
@property(nonatomic) __weak UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(nonatomic) __weak UIView<_UITextItemInteracting> *textItemInteractingView; // @synthesize textItemInteractingView=_textItemInteractingView;
@property(retain, nonatomic) id <_UITextItemInteractionHandler> handler; // @synthesize handler=_handler;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(retain, nonatomic) UITextRange *range; // @synthesize range=_range;
@property(readonly, nonatomic) NSArray *rects;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)unhighlight;
- (void)highlight;
- (_Bool)_allowHighlight;
- (_Bool)isEqual:(id)arg1;
- (void)_warnForInvalidAction;
- (id)contextMenuConfiguration;
@property(readonly, nonatomic) unsigned long long _preferredContextMenuLayout;
- (_Bool)_allowInteraction:(long long)arg1;
- (void)invokeDefaultAction;
- (_Bool)canInvokeDefaultAction;
- (_Bool)isAttachment;
- (_Bool)isLink;
- (void)dealloc;

@end

