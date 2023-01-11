//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class NSString, PKPeerPaymentIdentityVerificationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKIdentityVerificationExplanationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    unsigned long long _identityVerificaionError;
}

- (void).cxx_destruct;
- (struct CGSize)_snapshotSize;
- (id)_bodyText;
- (id)_titleText;
- (void)_terminateFlow;
- (void)_cancel;
- (void)_processNextViewController;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)loadView;
- (id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 identityVerificationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

