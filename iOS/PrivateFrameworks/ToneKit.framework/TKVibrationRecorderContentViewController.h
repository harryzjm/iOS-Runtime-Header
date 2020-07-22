//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ToneKit/TKVibrationRecorderViewDelegate-Protocol.h>
#import <ToneKit/UITextFieldDelegate-Protocol.h>

@class NSDictionary, NSString, TKVibrationRecorderView, TKVibrationRecorderViewController, TKVibratorController, TLVibrationPattern, UIAlertAction, UIAlertController, UIBarButtonItem, UITextField;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate>
{
    int _mode;
    TKVibrationRecorderView *_vibrationRecorderView;
    TLVibrationPattern *_recordedVibrationPattern;
    double _currentVibrationComponentDidStartTimeStamp;
    _Bool _isWaitingForEndOfCurrentVibrationComponent;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_saveButton;
    UIAlertController *_vibrationNameAlertController;
    UIAlertAction *_vibrationNameAlertSaveAction;
    UITextField *_vibrationNameAlertTextField;
    TKVibratorController *_vibratorController;
    NSDictionary *_indefiniteVibrationPattern;
    id <TKVibrationRecorderViewControllerDelegate> _delegate;
    TKVibrationRecorderViewController *_parentVibrationRecorderViewController;
}

@property(nonatomic) __weak TKVibrationRecorderViewController *parentVibrationRecorderViewController; // @synthesize parentVibrationRecorderViewController=_parentVibrationRecorderViewController;
@property(nonatomic) __weak id <TKVibrationRecorderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityDidEnterRecordingMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1;
- (void)_finishedWithRecorder;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (_Bool)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_storeVibrationComponentOfTypePause:(_Bool)arg1;
- (void)_stopVibrating;
- (void)_startVibratingWithVibrationPattern:(id)arg1;
- (id)_indefiniteVibrationPattern;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_cleanUpVibrationNameAlertController;
- (void)_vibrationNameTextFieldContentsDidChange:(id)arg1;
- (void)_updateStateSaveButtonInAlert;
- (void)_saveButtonInAlertTapped:(id)arg1;
- (void)_cancelButtonInAlertTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)applicationWillSuspend;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

