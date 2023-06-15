//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@protocol QLPreviewItemProvider;

__attribute__((visibility("hidden")))
@interface QLPreviewCollectionServiceContext : NSExtensionContext
{
    id <QLPreviewItemProvider> _itemProvider;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)setScreenEdgePanWidth:(double)arg1;
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;
- (void)setIsContentManaged:(_Bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;
- (void)setLoadingString:(id)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)notifyStateRestorationUserInfo:(id)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)tearDownTransition:(_Bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateTransitionWithProgress:(double)arg1;
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
- (void)setNotificationCenter:(id)arg1;
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (id)_previewCollection;
- (id)_protocolHost;

@end

