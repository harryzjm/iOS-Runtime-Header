//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewDelegate-Protocol.h>

@class NSString, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentBankAccountInformation, PKPerformActionBackdropView, PKPerformActionLoadingView, RemoteUIController, UIView;
@protocol PKPeerPaymentPerformActionView, PKPeerPaymentPerformActionViewControllerDelegate;

@interface PKPeerPaymentPerformActionViewController : UIViewController <PKPerformActionViewDelegate, PKPaymentSetupViewControllerDelegate>
{
    unsigned long long _peerPaymentAction;
    long long _detailViewStyle;
    PKPerformActionBackdropView *_backdropView;
    PKPerformActionLoadingView *_loadingView;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentBankAccountInformation *_bankInformation;
    RemoteUIController *_termsController;
    _Bool _performingAction;
    _Bool _viewHasAppeared;
    _Bool _fieldsVerified;
    PKPaymentPass *_pass;
    UIView<PKPeerPaymentPerformActionView> *_actionView;
    id <PKPeerPaymentPerformActionViewControllerDelegate> _delegate;
}

+ (id)navigationBarBackgroundColor;
+ (id)alertControllerForPeerPaymentActionUnableReason:(unsigned long long)arg1 displayableError:(id)arg2 addCardActionHandler:(CDUnknownBlockType)arg3;
+ (id)displayableErrorForPeerPaymentAction:(unsigned long long)arg1 andReason:(unsigned long long)arg2;
+ (_Bool)canPerformPeerPaymentAction:(unsigned long long)arg1 account:(id)arg2 unableReason:(unsigned long long *)arg3 displayableError:(id *)arg4;
@property(nonatomic) __weak id <PKPeerPaymentPerformActionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView<PKPeerPaymentPerformActionView> *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_handleError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleError:(id)arg1;
- (void)_presentTermsAndConditionsWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (unsigned long long)_peerPaymentControllerModeForAction;
- (id)_rightBarButtonTitle;
- (id)_navigationBarTitle;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_doneBarButtonPressed:(id)arg1;
- (void)_reloadActionView;
- (void)_showNavigationBarSpinner:(_Bool)arg1;
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;
- (void)performActionView:(id)arg1 requestsPresentViewController:(id)arg2;
- (void)setRightBarButtonEnabled:(_Bool)arg1;
- (void)shakeCard;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (id)spinnerBarButton;
- (id)doneBarButton;
- (id)rightBarButton;
- (void)viewDidLayoutSubviews;
- (void)updateFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_actionViewForPass:(id)arg1 action:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 peerPaymentAction:(unsigned long long)arg3 detailViewStyle:(long long)arg4;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 peerPaymentAction:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

