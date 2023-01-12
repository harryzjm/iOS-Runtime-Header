//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, SKUIContextActionsViewController, UILongPressGestureRecognizer, UIPreviewInteraction, UIViewController, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsPresentationRegistration : NSObject
{
    _Bool _previewInteractionDidEnd;
    CDUnknownBlockType _handler;
    UIViewController *_viewController;
    UIPreviewInteraction *_previewInteraction;
    NSTimer *_previewInteractionTimeout;
    SKUIContextActionsViewController *_orbContextActionsViewController;
    UIViewPropertyAnimator *_previewPhasePropertyAnimator;
    UIViewPropertyAnimator *_commitPhasePropertyAnimator;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIViewPropertyAnimator *commitPhasePropertyAnimator; // @synthesize commitPhasePropertyAnimator=_commitPhasePropertyAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *previewPhasePropertyAnimator; // @synthesize previewPhasePropertyAnimator=_previewPhasePropertyAnimator;
@property(retain, nonatomic) SKUIContextActionsViewController *orbContextActionsViewController; // @synthesize orbContextActionsViewController=_orbContextActionsViewController;
@property(retain, nonatomic) NSTimer *previewInteractionTimeout; // @synthesize previewInteractionTimeout=_previewInteractionTimeout;
@property(nonatomic) _Bool previewInteractionDidEnd; // @synthesize previewInteractionDidEnd=_previewInteractionDidEnd;
@property(retain, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)_presentFromGestureRecognizer:(id)arg1;
- (void)longPressGestureRecognizerTriggered:(id)arg1;
- (void)cleanupPreviewInteraction:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

