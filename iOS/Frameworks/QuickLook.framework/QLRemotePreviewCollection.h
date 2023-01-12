//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class QLPreviewCollectionHostContext, UIView;
@protocol QLPreviewControllerStateProtocolHostOnly;

__attribute__((visibility("hidden")))
@interface QLRemotePreviewCollection : _UIRemoteViewController
{
    id <QLPreviewControllerStateProtocolHostOnly> _stateManager;
    double _edgeNavigationGestureWidth;
    UIView *_touchGrabbingView;
    _Bool _isAvailable;
    _Bool _allowInteractiveTransitions;
    id _request;
    QLRemotePreviewCollection *_accessoryViewController;
    QLPreviewCollectionHostContext *_hostContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowInteractiveTransitions; // @synthesize allowInteractiveTransitions=_allowInteractiveTransitions;
@property _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) QLPreviewCollectionHostContext *hostContext; // @synthesize hostContext=_hostContext;
@property(retain) QLRemotePreviewCollection *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain) id request; // @synthesize request=_request;
- (id)navigationScreenEdgePanGestureRecognizer;
- (_Bool)_addGrabbingViewIfNecessaryWithWidth:(double)arg1;
- (_Bool)_isNavigationControllerGrabbingViewForInteractivePopNeeded;
- (void)_updateTouchGrabbingView;
- (void)setScreenEdgePanWidth:(double)arg1;
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;
- (void)setIsContentManaged:(_Bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;
- (void)setLoadingString:(id)arg1;
- (void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyStateRestorationUserInfo:(id)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:(id)arg1 previewItemType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestLockForCurrentItem;
- (void)shouldDisplayLockActivityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)documentMenuActionWillBegin;
- (void)actionSheetDidDismiss;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;
- (void)hostSceneWillDeactivate;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)previewItemDisplayState:(id)arg1 wasAppliedToItemAtIndex:(unsigned long long)arg2;
- (void)_resetRemoteConfiguration;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_presentViewControllerForError:(id)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (id)accessoryView;
- (_Bool)isRemote;

@end

