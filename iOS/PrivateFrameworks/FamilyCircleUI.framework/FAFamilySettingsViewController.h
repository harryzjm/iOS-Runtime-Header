//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccountsUI/ACUIViewController.h>

#import <FamilyCircleUI/FASharedSubscriptionSpecifierProviderDelegeate-Protocol.h>
#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>
#import <FamilyCircleUI/UINavigationControllerDelegate-Protocol.h>

@class AAGrandSlamSigner, AAUIRemoteUIController, AAUIServerUIHookHandler, ACAccount, ACAccountStore, FACircleRemoteUIDelegate, FAFamilyCircle, FAFamilyCreditCard, FAFamilyMember, FAFamilyNotificationObserver, FAProfilePictureStore, FARequestConfigurator, FASharedSubscriptionSpecifierProvider, NSArray, NSMutableDictionary, NSMutableURLRequest, NSOperationQueue, NSString, NSURL, PSSpecifier, UIActivityIndicatorView, UILabel, UINavigationController, UITableViewCell;
@protocol FAFamilySettingsViewControllerDelegate;

@interface FAFamilySettingsViewController : ACUIViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, FASharedSubscriptionSpecifierProviderDelegeate>
{
    AAGrandSlamSigner *_iCloudGrandSlamSigner;
    AAGrandSlamSigner *_appleIDGrandSlamSigner;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccount *_itunesAccount;
    ACAccountStore *_accountStore;
    FAFamilyCircle *_familyCircle;
    NSOperationQueue *_networkingQueue;
    PSSpecifier *_addFamilyMemberCell;
    FAProfilePictureStore *_familyPictureStore;
    AAUIRemoteUIController *_iCloudRemoteUIController;
    AAUIRemoteUIController *_appleIDRemoteUIController;
    AAUIRemoteUIController *_familyV2RemoteUIController;
    FACircleRemoteUIDelegate *_familyRemoteUIDelegate;
    UITableViewCell *_activeCell;
    NSURL *_activeURL;
    FAFamilyMember *_memberBeingViewed;
    NSMutableDictionary *_objectModelDecorators;
    UINavigationController *_childAccountCreationNavController;
    FAFamilyNotificationObserver *_notificationObserver;
    _Bool _fetchingPaymentInfo;
    FAFamilyCreditCard *_paymentMethod;
    NSArray *_paymentInfoSpecifiers;
    _Bool _fetchingPaymentMethodImage;
    NSMutableURLRequest *_currentRemoteUIRequest;
    FARequestConfigurator *_requestConfigurator;
    AAUIServerUIHookHandler *_serverUIHookHandler;
    FACircleRemoteUIDelegate *_faCircleRemoteUIDelegate;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_navigationBarTitleLabel;
    double _familyHeaderTitleOffset;
    _Bool _isNavigationTitleViewDisplayed;
    id <FAFamilySettingsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FAFamilySettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectSpecifier:(id)arg1;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(_Bool)arg3;
- (void)_updateMemberDetailsPageWithLinkedAppleID:(id)arg1;
- (id)_itunesAccount;
- (void)_showConnectivityAlert;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)_handleFamilySubscriptionChanged;
- (void)_handleMemberUpdate:(id)arg1;
- (void)_handleMemberDeletion:(id)arg1;
- (void)_handleFamilyDeletion;
- (void)_handleFamilyStatusChange:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideActivityIndicatorInNavigationBar;
- (void)showActivityIndicatorInNavigationBar;
- (_Bool)_hasActiveCell;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)arg1;
- (void)_fireFamilyUpdateNotification;
- (void)_fetchFamilyPaymentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchUpdatedFamilyDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_addChildAccount;
- (void)_performEventWithContext:(id)arg1 specifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_addMemberWithEventType:(id)arg1;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (void)_setFresnoRemoteUIDelgate:(id)arg1;
- (void)_loadRemoteUIWithRequest:(id)arg1 url:(id)arg2 specifier:(id)arg3 type:(long long)arg4;
- (void)_loadRemoteUIWithRequest:(id)arg1 specifier:(id)arg2 type:(long long)arg3;
- (void)_paymentMethodCellWasTapped:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (void)_handleServiceSpecifierURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_createSpecifiersForPaymentInfo;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (void)_learnMoreLinkButtonWasTapped:(id)arg1;
- (id)_createSpecifierForFamilyMemberGroup;
- (void)_reloadPaymentInfoSpecifiersAnimated:(_Bool)arg1;
- (id)_imageFromBundle:(id)arg1;
- (id)_sharedSubscriptionSpecifierProvider;
- (id)_sharedSubscriptionSpecifiers;
- (void)traitCollectionDidChange:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)specifiers;
- (void)_layoutTableHeaderView;
- (void)viewWillLayoutSubviews;
- (void)_setupNavigationBarTitleView;
- (void)_setupFamilyHeaderView;
- (void)viewDidLoad;
- (id)_requestConfigurator;
- (id)_appleIDGrandSlamSigner;
- (void)_profilePictureStoreDidReload;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 familyCircle:(id)arg3 familyPictureStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
