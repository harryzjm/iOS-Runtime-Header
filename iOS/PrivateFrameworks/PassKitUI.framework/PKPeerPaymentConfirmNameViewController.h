//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class NSString, PKFamilyMember, UIBarButtonItem;
@protocol PKPeerPaymentConfirmNameViewControllerDelegate;

@interface PKPeerPaymentConfirmNameViewController <PKPaymentSetupViewControllerDelegate>
{
    PKFamilyMember *_familyMember;
    long long _context;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_spinnerButton;
    _Bool _showSpinner;
    id <PKPeerPaymentConfirmNameViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPeerPaymentConfirmNameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelPressed;
- (void)_continue;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)_donePressed;
- (void)showSpinner:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFamilyMember:(id)arg1 delegate:(id)arg2 context:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
