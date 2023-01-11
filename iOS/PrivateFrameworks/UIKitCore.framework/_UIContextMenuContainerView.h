//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIPassthroughScrollInteractionDelegate-Protocol.h>

@class NSString, UIView, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIContextMenuContainerView <_UIPassthroughScrollInteractionDelegate>
{
    _Bool _lastHitTestWasPassedThrough;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
    _Bool _dismissesInstantly;
    UIView *_contentWrapperView;
    CDUnknownBlockType _dismissalHandler;
    CDUnknownBlockType _subtreeTraitPropagationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType subtreeTraitPropagationHandler; // @synthesize subtreeTraitPropagationHandler=_subtreeTraitPropagationHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(nonatomic) __weak UIView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
@property(nonatomic) _Bool dismissesInstantly; // @synthesize dismissesInstantly=_dismissesInstantly;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;
- (void)_attemptDismiss:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
