//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>

@class NSString;
@protocol PKNewDevicePasscodeViewControllerDelegate;

@interface PKNewDevicePasscodeViewController : UIViewController <PKPaymentSetupPresentationProtocol>
{
    long long _minimumPasscodeLength;
    unsigned long long _passcodeInputScreenType;
    unsigned long long _passcodeInputState;
    long long _context;
    NSString *_currentPasscode;
    NSString *_newPasscode;
    NSString *_constraintFailedInstructions;
    id <PKNewDevicePasscodeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PKNewDevicePasscodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMinimumPasscodeLength:(long long)arg1 withCurrentPasscode:(id)arg2 paymentSetupContext:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
