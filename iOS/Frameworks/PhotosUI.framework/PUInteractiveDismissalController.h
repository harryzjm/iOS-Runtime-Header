//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUTileController, PUTilingView, UIView, UIViewController;
@protocol PUInteractiveDismissalControllerDelegate, PUInterruptibleViewControllerTransition, PUTilingViewControllerTransition;

__attribute__((visibility("hidden")))
@interface PUInteractiveDismissalController : NSObject
{
    struct {
        _Bool respondsToCanBeginDismissalAtLocationFromProvider;
        _Bool respondsToTilingView;
        _Bool respondsToDesignatedTileController;
    } _delegateFlags;
    _Bool _isHandlingDismissalInteraction;
    _Bool __needsUpdateGestureRecognizers;
    id <PUInteractiveDismissalControllerDelegate> _delegate;
    UIViewController *__viewController;
    UIView *__viewHostingGestureRecognizers;
    id <PUInterruptibleViewControllerTransition> __interruptibleViewControllerTransition;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(retain, nonatomic, setter=_setInterruptibleViewControllerTransition:) id <PUInterruptibleViewControllerTransition> _interruptibleViewControllerTransition; // @synthesize _interruptibleViewControllerTransition=__interruptibleViewControllerTransition;
@property(retain, nonatomic, setter=_setViewHostingGestureRecognizers:) UIView *_viewHostingGestureRecognizers; // @synthesize _viewHostingGestureRecognizers=__viewHostingGestureRecognizers;
@property(nonatomic, setter=_setViewController:) __weak UIViewController *_viewController; // @synthesize _viewController=__viewController;
@property(readonly, nonatomic) _Bool isHandlingDismissalInteraction; // @synthesize isHandlingDismissalInteraction=_isHandlingDismissalInteraction;
@property(nonatomic) __weak id <PUInteractiveDismissalControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateInterruptibleViewControllerTransitionIfNeeded;
- (void)_invalidateInterruptibleViewControllerTransition;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_invalidateGestureRecognizers;
- (void)_updateViewHostingGestureRecognizersIfNeeded;
- (void)_invalidateViewHostingGestureRecognizers;
- (void)_updateViewControllerIfNeeded;
- (void)_invalidateViewController;
- (void)endDismissal:(_Bool)arg1;
- (void)updateDismissalWithInteractionProgress:(double)arg1 interactionWillFinish:(_Bool)arg2;
- (void)beginDismissal;
- (long long)_preferredDismissalTransitionType;
- (_Bool)canBeginDismissalAtLocationFromProvider:(id)arg1;
@property(readonly, nonatomic) id <PUTilingViewControllerTransition> tilingViewControllerTransition;
@property(readonly, nonatomic) PUTileController *designatedTileController;
@property(readonly, nonatomic) PUTilingView *tilingView;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)_updateIfNeeded;
- (void)invalidateDelegateData;

@end
