//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentDocumentSubmissionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentDocumentSubmissionViewControllerResponder-Protocol.h>

@class NSString, NSTimer, PKPeerPaymentDocumentSubmissionController;

@interface PKPeerPaymentDocumentSubmissionInfoViewController <PKPeerPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentDocumentSubmissionViewControllerResponder>
{
    PKPeerPaymentDocumentSubmissionController *_controller;
    long long _context;
    long long _currentState;
    long long _currentSide;
    NSTimer *_timerDismissAfterSuccess;
}

- (void).cxx_destruct;
- (void)captureController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)captureController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)didSelectSetupLater;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)updateUIWithState:(long long)arg1;
- (id)secondaryButton;
- (void)_cancelPressed;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

