//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/UIPreviewInteractionDelegate-Protocol.h>
#import <TVMLKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <TVMLKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class IKCollectionElement, NSString, UICollectionView, UIPreviewInteraction, UIViewController, UIViewPropertyAnimator, _TVAppDocumentController, _TVConfirmationDialogPresentationController, _TVConfirmationDocumentWrapperViewController;
@protocol _TVConfirmationPreviewInteractionControllerDelegate;

@interface _TVConfirmationPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIPreviewInteraction *_previewInteraction;
    _Bool _previewTransitionEnded;
    _TVConfirmationDocumentWrapperViewController *_wrapperController;
    _TVAppDocumentController *_appDocumentController;
    _TVConfirmationDialogPresentationController *_dialogPresentationController;
    UIViewPropertyAnimator *_previewPropertyAnimator;
    UIViewPropertyAnimator *_commitPropertyAnimator;
    UICollectionView *_stashedCell;
    IKCollectionElement *_collectionElement;
    id <_TVConfirmationPreviewInteractionControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UIViewController *_presentingViewController;
}

@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <_TVConfirmationPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IKCollectionElement *collectionElement; // @synthesize collectionElement=_collectionElement;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_cleanupPreviewInteraction;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)dismissConfirmation;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)arg1 andCollectionView:(id)arg2 andCollectionElement:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

