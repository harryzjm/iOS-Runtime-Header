//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSCoverSheetViewControllerObserver-Protocol.h>
#import <SpringBoard/CSExternalLockProviding-Protocol.h>

@class NSString, SBLockScreenManager;
@protocol BSInvalidatable, SBSoftLockoutControllerDelegate;

@interface SBSoftLockoutController : NSObject <CSExternalLockProviding, CSCoverSheetViewControllerObserver>
{
    SBLockScreenManager *_lockScreenManager;
    unsigned long long _desiredBiometricLockoutState;
    id <BSInvalidatable> _passcodeRequiredAssertion;
    id <SBSoftLockoutControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSoftLockoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearPasscodeRequiredAssertion;
- (void)_createPasscodeRequiredAssertion;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (_Bool)unlockFromSource:(int)arg1;
@property(readonly, nonatomic) _Bool showPasscode;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
- (void)reload;
- (void)dealloc;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1 lockScreenManager:(id)arg2;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
