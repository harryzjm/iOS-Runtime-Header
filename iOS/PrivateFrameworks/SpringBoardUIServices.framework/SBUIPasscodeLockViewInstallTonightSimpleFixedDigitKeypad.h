//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightSimpleFixedDigitKeypad
{
    SBUIButton *_actionButton;
}

- (void).cxx_destruct;
- (void)_actionButtonHit;
- (void)_layoutActionButton;
- (void)_sizeLabel:(id)arg1;
- (void)_configureActionButton;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (void)_setShowsCancelButton:(_Bool)arg1 fromEmergencyCallButton:(_Bool)arg2;
- (void)setShowsCancelButton:(_Bool)arg1;
- (void)_setShowsEmergencyCallButton:(_Bool)arg1 fromCancelButton:(_Bool)arg2;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (void)_layoutStatusView;
- (id)initWithLightStyle:(_Bool)arg1 numberOfDigits:(unsigned long long)arg2;

@end

