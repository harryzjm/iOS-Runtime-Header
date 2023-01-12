//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIRemoteViewController.h"

@class NSString, UIViewController;
@protocol _UISharingPublicController;

__attribute__((visibility("hidden")))
@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController
{
    UIViewController<_UISharingPublicController> *_publicController;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController<_UISharingPublicController> *publicController; // @synthesize publicController=_publicController;
- (void)_requestContentSize:(struct CGSize)arg1;
- (void)_updateTraitCollectionForPopoverStatus;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (void)_dismissAndRepresentForActivity:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cloudSharingControllerDidChooseTransport:(id)arg1;
- (void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)_cloudSharingControllerDidActivateShowActivityController;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidUpdateRootFolderURL:(id)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(_Bool)arg1;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)_shareWasMadePrivate;
- (void)_shareDidChange:(id)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_dismissViewController;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

