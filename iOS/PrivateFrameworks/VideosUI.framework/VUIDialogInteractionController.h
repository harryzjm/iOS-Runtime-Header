//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UICollectionView, UILongPressGestureRecognizer, UIViewController, VUIDialogPresentationController, VUIPresentationContainerViewController, VUIPreviewInteractionController;
@protocol VUIDialogInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIDialogInteractionController : NSObject
{
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
    _Bool _isPresenting;
    id <VUIDialogInteractionControllerDelegate> _delegate;
    NSIndexPath *_currentIndexPath;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    VUIPreviewInteractionController *_interactionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIPreviewInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) __weak id <VUIDialogInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cleanup;
- (void)interactionController:(id)arg1 didEndForIndexPath:(id)arg2;
- (void)interactionController:(id)arg1 didBeginForIndexPath:(id)arg2;
- (_Bool)interactionController:(id)arg1 shouldInteractionControllerBeginForIndexPath:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)longPressGestureRecognizerPressed:(id)arg1;
- (void)dismissConfirmation;
- (id)initWithPresentingViewController:(id)arg1 collectionView:(id)arg2 controllerToPresent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

