//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSViewController.h>

#import <PreferencesUI/TKTonePickerViewControllerDelegate-Protocol.h>
#import <PreferencesUI/TKVibrationPickerViewControllerDelegate-Protocol.h>

@class NSString, TKTonePickerViewController, TKVibrationPickerViewController;

@interface PSUIToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate>
{
    TKTonePickerViewController *_tonePickerViewController;
    TKVibrationPickerViewController *_vibrationPickerViewController;
}

@property(retain, nonatomic) TKVibrationPickerViewController *vibrationPickerViewController; // @synthesize vibrationPickerViewController=_vibrationPickerViewController;
@property(retain, nonatomic) TKTonePickerViewController *tonePickerViewController; // @synthesize tonePickerViewController=_tonePickerViewController;
- (void).cxx_destruct;
- (id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(long long)arg1 topic:(id)arg2;
- (id)_defaultToneIdentifierForTonePickerWithAlertType:(long long)arg1 topic:(id)arg2;
- (void)_handleAlertOverridePolicyDidChangeNotification:(id)arg1;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)_updateReloadSpecifierInParentController;
- (void)_insertTonePickerView;
- (void)viewDidLoad;
- (void)setSpecifier:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

