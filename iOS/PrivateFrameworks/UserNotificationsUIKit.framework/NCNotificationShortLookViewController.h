//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCBannerPresentationTransitioningDelegateObserver-Protocol.h>
#import <UserNotificationsUIKit/NCLongLookDefaultPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLPreviewInteractionManagerDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLPreviewInteractionPresenting-Protocol.h>
#import <UserNotificationsUIKit/PLViewControllerAnimatorDelegate-Protocol.h>

@class NCBannerPresentationTransitionDelegate, NCNotificationViewController, NSDate, NSHashTable, NSString, PLPreviewInteractionManager, UIScrollView, UITapGestureRecognizer, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface NCNotificationShortLookViewController <NCNotificationViewControllerObserving, PLViewControllerAnimatorDelegate, PLPreviewInteractionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, PLPreviewInteractionPresenting>
{
    NCBannerPresentationTransitionDelegate *_bannerPresentationTransitionDelegate;
    NCNotificationViewController *_longLookNotificationViewController;
    UIView *_contextDefiningContainerView;
    UIViewController *_contextDefiningViewController;
    UITapGestureRecognizer *_tapGesture;
    NSDate *_tapBeginTime;
    UIView *_audioAccessoryView;
    NSHashTable *_audioAccessoryViewObservers;
    id <UIViewControllerContextTransitioning> _scrollPresentationTransitionContext;
    struct CGRect _finalPresentedFrameOfViewForPreview;
    _Bool _didScrollPresentLongLookViewController;
    PLPreviewInteractionManager *_previewInteractionManager;
    UIScrollView *_scrollView;
}

+ (long long)materialRecipeForLegibilitySettings:(id)arg1;
@property(nonatomic, getter=_didScrollPresentLongLookViewController, setter=_setDidScrollPresentLongLookViewController:) _Bool didScrollPresentLongLookViewController; // @synthesize didScrollPresentLongLookViewController=_didScrollPresentLongLookViewController;
@property(retain, nonatomic, getter=_scrollView) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (struct CGRect)_frameForTransitionViewInScrollView;
- (_Bool)wantsUseableContainerBoundsForTransitionWithDelegate:(id)arg1;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 didEndPresentationAnimation:(_Bool)arg2 withTransitionContext:(id)arg3;
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) PLPreviewInteractionManager *previewInteractionManager; // @synthesize previewInteractionManager=_previewInteractionManager;
@property(readonly, nonatomic) UIView *viewForPreview;
- (void)previewInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)_handlePresentedContentDismissalWithTrigger:(long long)arg1;
- (_Bool)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (void)previewInteractionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
- (_Bool)previewInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg2;
- (id)containerViewForPreviewInteractionManager:(id)arg1;
- (id)transitioningDelegateForPreviewInteractionManager:(id)arg1;
- (id)presentedViewControllerForPreviewInteractionManager:(id)arg1;
- (id)_longLookNotificationViewController;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (id)_legibilitySettings;
- (void)_presentLongLookForScrollAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentLongLookAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentLongLookViaPreviewInteraction:(CDUnknownBlockType)arg1;
- (void)_loadPresentationContainerViewIfNecessary;
- (id)_notificationShortLookViewIfLoaded;
- (void)_loadExtensionIfNecessary;
- (void)_setAudioAccessoryView:(id)arg1;
- (void)removeAudioAccesoryViewObserver:(id)arg1;
- (void)addAudioAccessoryViewObserver:(id)arg1;
- (void)_expandCoalescedNotificationBundle;
- (_Bool)isCoalescedNotificationBundle;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)_updateWithProvidedStaticContent;
- (_Bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_handleTapOnView:(id)arg1;
- (void)_notificationViewControllerViewDidLoad;
- (id)effectiveGroupName;
- (void)_loadLookView;
- (void)_completeScrollPresentation;
- (void)_updateScrollViewContentSize;
- (_Bool)_shouldPadScrollViewContentSizeHeight;
- (void)_configureScrollViewIfNecessary;
- (_Bool)_isPresentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
- (id)_newPreviewInteractionManager;
- (_Bool)_setNotificationRequest:(id)arg1;
- (_Bool)_setDelegate:(id)arg1;
- (unsigned long long)overlayMaterialOptions;
- (unsigned long long)backgroundMaterialOptions;
- (long long)materialRecipe;
- (void)setInteractionEnabled:(_Bool)arg1;
- (_Bool)shouldRestorePresentingShortLookOnDismiss;
- (void)expandAndPlayAudioMessage;
- (void)presentLongLookAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(_Bool)arg1;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (_Bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (_Bool)isShortLook;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

