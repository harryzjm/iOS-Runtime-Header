//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPaymentDocumentSubmissionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>

@class NSString, NSTimer, PKCameraCaptureInstructionView, PKPaymentDocumentSubmissionController, UIBarButtonItem, UIView;

@interface PKPaymentDocumentSubmissionIDCaptureViewController : UIViewController <PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupPresentationProtocol>
{
    PKPaymentDocumentSubmissionController *_captureController;
    UIView *_cameraView;
    UIView *_cameraInstructionContainerView;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    _Bool _reachedTimeout;
    NSTimer *_timerTryAgain;
    UIBarButtonItem *_buttonCancel;
    long long _context;
    unsigned long long _featureIdentifier;
}

- (void).cxx_destruct;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)captureController:(id)arg1 showLoading:(_Bool)arg2;
- (void)updateUIWithState:(long long)arg1;
- (void)cancel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithController:(id)arg1 context:(long long)arg2 featureIdentifier:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
