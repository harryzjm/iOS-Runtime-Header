//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>

@class NSString;

@interface PKPeerPaymentRegistrationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>
{
}

+ (_Bool)_isSecureForRemoteViewService;
- (void)_dismiss;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)handleHomeButtonPressed;
- (_Bool)shouldAutorotate;
- (id)_peerPaymentAccountFromData:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

