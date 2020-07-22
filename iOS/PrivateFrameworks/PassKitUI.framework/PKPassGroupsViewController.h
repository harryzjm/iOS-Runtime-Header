//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, PKGroupsController, PKPassGroupStackView, PKPaymentService, PKPeerPaymentAccountResolutionController, PKPeerPaymentService, _UIBackdropView;
@protocol NSObject, PKPassLibraryDataProvider;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPassPersonalizationViewControllerDelegate>
{
    long long _backdropStyle;
    PKPassGroupStackView *_groupStackView;
    _UIBackdropView *_headerBackground;
    _UIBackdropView *_footerBackground;
    PKPaymentService *_paymentService;
    unsigned long long _modalCardIndex;
    long long _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    NSArray *_passUniqueIDsToExcludeFromFiltering;
    _Bool _persistentCardEmulationQueued;
    _Bool _viewAppeared;
    _Bool _viewAppearedBefore;
    _Bool _passesAreOutdated;
    _Bool _reloadingPasses;
    _Bool _backgroundMode;
    _Bool _updatingBackdropSettings;
    CDStruct_6c46ada8 _headerBackgroundVisibility;
    CDStruct_6c46ada8 _footerBackgroundVisibility;
    unsigned long long _instanceFooterSuppressionCounter;
    id <NSObject> _expressTransactionNotificationObserver;
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKPeerPaymentService *_peerPaymentService;
    _Bool _handleFieldDetection;
    _Bool _welcomeStateEnabled;
    long long _style;
    PKGroupsController *_groupsController;
    unsigned long long _suppressedContent;
}

+ (void)endSuppressingFooter;
+ (void)beginSuppressingFooter;
+ (void)endTrackingAction;
+ (void)beginTrackingAction;
+ (_Bool)isPerformingAction;
@property(nonatomic, getter=isWelcomeStateEnabled) _Bool welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property _Bool handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property _Bool passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)_updateBackdropSettings;
- (void)updateRegionSupportIfNecessary;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;
- (void)_handleExpressNotification:(id)arg1;
- (void)_registerForExpressTransactionNotifications:(_Bool)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_updatePeerPaymentAccount;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;
- (void)_updateFooterSuppressionWithContext:(id)arg1;
- (void)_updateFooterSuppressionAnimated:(_Bool)arg1;
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;
- (void)_beginSuppressingInstanceFooter;
- (void)_dismissPresentedVCsWithRequirements:(unsigned long long)arg1 performAction:(CDUnknownBlockType)arg2;
- (void)_applyPresentationState;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)presentPaymentSetupController;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (id)_passPendingActivationToPresent;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3;
- (void)terminateFieldDetect;
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2;
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1;
- (void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTableModalPresentationEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentGroupTableAnimated:(_Bool)arg1;
- (void)presentGroupTable;
- (void)presentPileOffscreen;
- (void)presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2;
- (void)presentInitialState;
- (void)queuePersistentCardEmulation;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentDefaultPaymentPassAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool presentingPass;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(_Bool)arg3;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (_Bool)groupStackViewShouldAllowReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (id)footerForGroupStackView:(id)arg1;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
- (_Bool)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
- (_Bool)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (_Bool)groupStackViewShouldShowHeaderViews:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_accessBackgroundStateForType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_updateBackgroundType:(long long)arg1 toVisibility:(double)arg2 animated:(_Bool)arg3;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroupsController:(id)arg1 style:(long long)arg2;
- (id)initWithGroupsController:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

