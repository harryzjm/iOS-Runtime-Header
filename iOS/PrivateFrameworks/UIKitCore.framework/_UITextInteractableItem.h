//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIAction, UIContextMenuInteraction, UINotificationFeedbackGenerator, UITextItem, UITextItemMenuConfiguration, UITextRange, UIView, _UITextItemHighlightView, _UITextItemInteractionHandler;
@protocol _UITextContent, _UITextItemInteracting;

__attribute__((visibility("hidden")))
@interface _UITextInteractableItem : NSObject
{
    struct {
        unsigned int primaryAction:1;
        unsigned int menu:1;
    } _requested;
    UIAction *_primaryAction;
    UITextRange *_range;
    UITextItem *_representedTextItem;
    _UITextItemInteractionHandler *_itemHandler;
    UIView<_UITextItemInteracting> *_textItemInteractingView;
    UITextItemMenuConfiguration *_preparedMenuConfiguration;
    UIContextMenuInteraction *_contextMenuInteraction;
    id <_UITextContent> _textContent;
    _UITextItemHighlightView *_highlightView;
    UIAction *_defaultAction;
    UINotificationFeedbackGenerator *_feedbackGenerator;
    struct CGPoint _location;
}

+ (id)customItemWithTag:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint)arg4;
+ (id)itemForAttachment:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint)arg4;
+ (id)itemForLink:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(readonly, nonatomic) UIAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, nonatomic) _UITextItemHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) __weak id <_UITextContent> textContent; // @synthesize textContent=_textContent;
@property(nonatomic) __weak UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(readonly, nonatomic) UITextItemMenuConfiguration *preparedMenuConfiguration; // @synthesize preparedMenuConfiguration=_preparedMenuConfiguration;
@property(readonly, nonatomic) __weak UIView<_UITextItemInteracting> *textItemInteractingView; // @synthesize textItemInteractingView=_textItemInteractingView;
@property(retain, nonatomic) _UITextItemInteractionHandler *itemHandler; // @synthesize itemHandler=_itemHandler;
@property(readonly, nonatomic) UITextItem *representedTextItem; // @synthesize representedTextItem=_representedTextItem;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) UITextRange *range; // @synthesize range=_range;
- (id)_solverWithUnifyRects:(_Bool)arg1;
- (void)unhighlight;
- (void)highlight;
- (_Bool)_allowHighlight;
- (void)dealloc;
- (_Bool)_allowInteraction:(long long)arg1;
- (_Bool)_actionPresentsMenu:(id)arg1;
- (_Bool)defaultActionPresentsMenu;
- (_Bool)hasPrimaryAction;
- (void)invokeDefaultAction;
- (_Bool)canInvokeDefaultAction;
- (void)_warnForInvalidAction;
- (id)contextMenuConfiguration;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_showsPreviewByDefault;
- (_Bool)showsMenuPreview;
- (void)prepareMenuConfigurationWithDefaultMenu:(id)arg1;
- (id)preparedPrimaryActionWithDefaultAction:(id)arg1;
- (id)_itemRepresentationWithRange:(struct _NSRange)arg1;
- (id)itemRepresentationWithRange:(struct _NSRange)arg1;
- (_Bool)isTagItem;
- (_Bool)isAttachmentItem;
- (_Bool)isLinkItem;
- (id)initWithRange:(id)arg1 view:(id)arg2 location:(struct CGPoint)arg3;
@property(readonly, nonatomic) NSArray *rects;
@property(readonly, nonatomic) struct CGRect bounds;

@end

