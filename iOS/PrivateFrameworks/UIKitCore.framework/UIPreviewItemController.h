//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>
#import <UIKitCore/UIPreviewInteractionControllerDelegate-Protocol.h>

@class CADisplayLink, MLULookupItem, NSArray, NSDictionary, NSString, UIGestureRecognizer, UIImageView, UIPreviewInteractionController, UIView, UIViewController;
@protocol UIPreviewItemDelegate;

@interface UIPreviewItemController : NSObject <UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver>
{
    MLULookupItem *_lookupItem;
    UIPreviewInteractionController *_previewInteractionController;
    UIView *_previewIndicatorView;
    UIImageView *_previewIndicatorImageView;
    UIView *_previewIndicatorSnapshotView;
    CADisplayLink *_previewIndicatorDisplayLink;
    double _lastPreviewIndicatorAnimationTimestamp;
    double _previewIndicatorAnimationTargetAlpha;
    struct CGRect _previewIndicatorBoundingRect;
    _Bool _previewIndicatorUsesStandardAnimation;
    _Bool _contentManagedByClient;
    UIPreviewItemController *_strongSelf;
    _Bool _interactionInProgress;
    id <UIPreviewItemDelegate> _delegate;
    long long _type;
    NSDictionary *_previewData;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    UIView *_view;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) NSDictionary *previewData; // @synthesize previewData=_previewData;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <UIPreviewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopInteraction;
- (void)startInteraction;
- (void)setupPreviewIndicatorInSourceView:(id)arg1;
- (void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(_Bool)arg2;
- (void)clearPreviewIndicator;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(_Bool)arg3;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (void)updatePreviewIndicatorAnimation:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (_Bool)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (_Bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
- (_Bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (id)previewViewControllerForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2 documentProperties:(id)arg3;
- (_Bool)_isMobileSafariRestricted;
- (_Bool)_shouldCancelPreviewWithNegativeFeedback;
@property(readonly, nonatomic) UIGestureRecognizer *presentationSecondaryGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
