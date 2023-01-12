//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString, PKScribbleInteraction, UIEditMenuInteraction, UIGestureRecognizer, UIVibrancyEffect, UIView, UIVisualEffectView, _SFNavigationBarTheme;
@protocol _SFNavigationBarURLButtonDelegate;

__attribute__((visibility("hidden")))
@interface _SFNavigationBarURLButton : UIButton
{
    UIVibrancyEffect *_highlightedVibrancyEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_effectView;
    UIView *_effectMask;
    UIEditMenuInteraction *_editMenuInteraction;
    UIGestureRecognizer *_longPressGestureRecognizer;
    PKScribbleInteraction *_pencilScribbleInteraction;
    double _backgroundAlphaFactor;
    _SFNavigationBarTheme *_theme;
    id <_SFNavigationBarURLButtonDelegate> _delegate;
    double _urlOutlineCornerRadius;
}

- (void).cxx_destruct;
- (struct CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (void)_hover:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (_Bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_dismissMenu:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)pasteAndGo:(id)arg1;
- (void)pasteAndSearch:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

