//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSViewController.h>

#import <AccessibilityUIUtilities/AXGestureRecorderControlsViewDelegate-Protocol.h>
#import <AccessibilityUIUtilities/AXGestureRecorderViewControllerDelegate-Protocol.h>
#import <AccessibilityUIUtilities/UITextFieldDelegate-Protocol.h>

@class AXAssertion, AXGestureRecorderControlsView, AXGestureRecorderStyleProvider, AXGestureRecorderViewController, NSString, UIBarButtonItem, UILabel;
@protocol AXGestureRecorderMainViewControllerDelegate;

@interface AXGestureRecorderMainViewController : PSViewController <AXGestureRecorderViewControllerDelegate, AXGestureRecorderControlsViewDelegate, UITextFieldDelegate>
{
    _Bool _inReplayMode;
    _Bool _isDisplayLinkInEffect;
    AXGestureRecorderStyleProvider *_styleProvider;
    AXGestureRecorderViewController *_gestureRecorderViewController;
    AXGestureRecorderControlsView *_controlsView;
    UILabel *_instructionsLabel;
    UIBarButtonItem *_saveButton;
    unsigned long long _leftButtonIdentifier;
    unsigned long long _rightButtonIdentifier;
    double _gestureRecordingDidStartTimeInterval;
    id <AXGestureRecorderMainViewControllerDelegate> _delegate;
    AXAssertion *_disableSystemGesturesAssertion;
    id _appDidResignActiveNotificationHandlerToken;
    long long _recorderType;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDisplayLinkInEffect; // @synthesize isDisplayLinkInEffect=_isDisplayLinkInEffect;
@property(nonatomic) long long recorderType; // @synthesize recorderType=_recorderType;
@property(nonatomic) __weak id appDidResignActiveNotificationHandlerToken; // @synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken;
@property(retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // @synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion;
@property(nonatomic) __weak id <AXGestureRecorderMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isInReplayMode) _Bool inReplayMode; // @synthesize inReplayMode=_inReplayMode;
@property(nonatomic) double gestureRecordingDidStartTimeInterval; // @synthesize gestureRecordingDidStartTimeInterval=_gestureRecordingDidStartTimeInterval;
@property(nonatomic) unsigned long long rightButtonIdentifier; // @synthesize rightButtonIdentifier=_rightButtonIdentifier;
@property(nonatomic) unsigned long long leftButtonIdentifier; // @synthesize leftButtonIdentifier=_leftButtonIdentifier;
@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(retain, nonatomic) AXGestureRecorderControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain, nonatomic) AXGestureRecorderViewController *gestureRecorderViewController; // @synthesize gestureRecorderViewController=_gestureRecorderViewController;
@property(retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;
- (void)gestureRecorderViewController:(id)arg1 setChromeVisible:(_Bool)arg2;
- (_Bool)isChromeVisibleForGestureRecorderViewController:(id)arg1;
- (void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1;
- (void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1;
- (void)gestureRecorderViewController:(id)arg1 didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint)arg2;
- (double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1;
- (void)_manageDisplayLinkManager:(_Bool)arg1;
- (_Bool)_isForRealTimeGesture;
- (id)_defaultInstructionalText;
- (void)_savePoint:(struct CGPoint)arg1;
- (void)_saveReplayableGesture;
- (void)_didSaveGestureWithName:(id)arg1;
- (_Bool)_canSaveGestureWithName:(id)arg1;
- (void)_saveWithMessage:(id)arg1;
- (void)_hide;
- (void)_reset;
- (void)_releaseOutlets;
- (void)_enterReplayMode;
- (void)_enterWaitingMode;
- (void)_clearProgressView;
- (void)_updateProgressView:(id)arg1;
- (void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(_Bool)arg2 color:(int *)arg3 title:(id *)arg4;
- (void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(_Bool)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(_Bool)arg4 animate:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_hideChromeButtonTapped:(id)arg1;
- (void)_hideChrome;
- (void)_unhideChrome;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
