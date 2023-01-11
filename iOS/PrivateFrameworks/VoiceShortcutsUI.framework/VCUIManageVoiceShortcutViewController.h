//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VoiceShortcutsUI/SUICFlamesViewDelegate-Protocol.h>
#import <VoiceShortcutsUI/UIScrollViewDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUIAlternativeTranscriptionsViewDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUIButtonTrayDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUIManageVoiceShortcutConfirmationViewDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUIManageVoiceShortcutInterstitialViewDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUIPhraseRecognizerDelegate-Protocol.h>
#import <VoiceShortcutsUI/VCUITypeToSiriFieldDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIScrollView, VCUIButtonTray, VCUIManageVoiceShortcutView, VCUIPhraseRecognizer, VCVoiceShortcut, VCVoiceShortcutClient;
@protocol VCActionDonation, VCUIManageVoiceShortcutViewControllerDelegate;

@interface VCUIManageVoiceShortcutViewController : UIViewController <VCUIButtonTrayDelegate, UIScrollViewDelegate, VCUIPhraseRecognizerDelegate, VCUIAlternativeTranscriptionsViewDelegate, VCUIManageVoiceShortcutConfirmationViewDelegate, VCUIManageVoiceShortcutInterstitialViewDelegate, SUICFlamesViewDelegate, VCUITypeToSiriFieldDelegate>
{
    _Bool _dismissOnClientRequestsCompletion;
    _Bool _userIsFinished;
    _Bool _recordButtonTapped;
    id <VCUIManageVoiceShortcutViewControllerDelegate> _delegate;
    id <VCActionDonation> _actionDonation;
    VCVoiceShortcut *_voiceShortcut;
    VCVoiceShortcutClient *_voiceShortcutClient;
    UIScrollView *_scrollView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    NSLayoutConstraint *_scrollViewHeightConstraint;
    NSArray *_pageInAnimationBeginConstraints;
    NSArray *_pageInAnimationCompleteConstraints;
    VCUIManageVoiceShortcutView *_currentView;
    long long _currentViewState;
    VCUIButtonTray *_buttonTray;
    NSString *_originalVoiceShortcutPhrase;
    VCVoiceShortcut *_createdVoiceShortcut;
    unsigned long long _clientRequests;
    VCUIPhraseRecognizer *_phraseRecognizer;
    NSString *_latestTranscription;
    NSArray *_alternativeTranscriptions;
    NSArray *_validationResult;
}

+ (void)setVoiceRecognitionOverrideWithAudioFileAtPath:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool recordButtonTapped; // @synthesize recordButtonTapped=_recordButtonTapped;
@property(nonatomic) _Bool userIsFinished; // @synthesize userIsFinished=_userIsFinished;
@property(retain, nonatomic) NSArray *validationResult; // @synthesize validationResult=_validationResult;
@property(retain, nonatomic) NSArray *alternativeTranscriptions; // @synthesize alternativeTranscriptions=_alternativeTranscriptions;
@property(retain, nonatomic) NSString *latestTranscription; // @synthesize latestTranscription=_latestTranscription;
@property(retain, nonatomic) VCUIPhraseRecognizer *phraseRecognizer; // @synthesize phraseRecognizer=_phraseRecognizer;
@property(nonatomic) _Bool dismissOnClientRequestsCompletion; // @synthesize dismissOnClientRequestsCompletion=_dismissOnClientRequestsCompletion;
@property(nonatomic) unsigned long long clientRequests; // @synthesize clientRequests=_clientRequests;
@property(retain, nonatomic) VCVoiceShortcut *createdVoiceShortcut; // @synthesize createdVoiceShortcut=_createdVoiceShortcut;
@property(retain, nonatomic) NSString *originalVoiceShortcutPhrase; // @synthesize originalVoiceShortcutPhrase=_originalVoiceShortcutPhrase;
@property(retain, nonatomic) VCUIButtonTray *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(nonatomic) long long currentViewState; // @synthesize currentViewState=_currentViewState;
@property(retain, nonatomic) VCUIManageVoiceShortcutView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSArray *pageInAnimationCompleteConstraints; // @synthesize pageInAnimationCompleteConstraints=_pageInAnimationCompleteConstraints;
@property(retain, nonatomic) NSArray *pageInAnimationBeginConstraints; // @synthesize pageInAnimationBeginConstraints=_pageInAnimationBeginConstraints;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint; // @synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;
@property(retain, nonatomic) VCVoiceShortcut *voiceShortcut; // @synthesize voiceShortcut=_voiceShortcut;
@property(readonly, nonatomic) id <VCActionDonation> actionDonation; // @synthesize actionDonation=_actionDonation;
@property(nonatomic) __weak id <VCUIManageVoiceShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialComplete;
- (void)inputComplete:(id)arg1;
- (void)typeToSiriFieldTextDidChange:(id)arg1;
- (void)rerecord;
- (void)alternativeTranscriptionsView:(id)arg1 didSelectTranscription:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)phraseRecognizer:(id)arg1 didReceiveFinalTranscription:(id)arg2 alternativeTranscriptions:(id)arg3;
- (void)phraseRecognizer:(id)arg1 didReceiveHypothesizedTranscription:(id)arg2;
- (void)phraseRecognizer:(id)arg1 availabilityDidChange:(_Bool)arg2;
- (void)phraseRecognizerDidStopRecording:(id)arg1 withError:(id)arg2;
- (void)phraseRecognizerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (id)validationResultForPhrase:(id)arg1 fromResults:(id)arg2;
- (void)validateTranscription:(id)arg1 alternativeTranscriptions:(id)arg2;
- (void)updateForPhraseRecognitionComplete:(id)arg1;
- (id)filterAlternativeTranscriptions:(id)arg1 withValidationResult:(id)arg2 bestTranscription:(id)arg3;
- (void)showEnableAssistantConfirmationView;
- (id)existingIdentifierFromError:(id)arg1;
- (_Bool)dismiss;
- (void)finishedClientRequest;
- (void)startedClientRequest;
- (void)dismissWhenComplete;
- (void)createShortcutAndDismissOnSuccess:(_Bool)arg1;
- (void)createShortcut;
- (void)createOrUpdateCurrentVoiceShortcut;
- (void)updateForPhraseRecognizerAvailability;
- (_Bool)phraseRecognizerInErrorState;
- (void)startRecording;
- (void)didTapTypeToSiri;
- (void)didTapRecord;
- (void)didTapDone;
- (void)didTapDelete:(id)arg1;
- (void)didTapCancel;
- (void)updateDoneButton;
- (void)updateButtonTrayBlurState;
- (void)updateButtonTrayState;
- (void)transitionToViewState:(long long)arg1 options:(id)arg2;
- (void)transitionToViewState:(long long)arg1;
- (void)animatePageIn;
- (id)alertControllerForError:(id)arg1;
- (void)addDoneButton;
- (void)ensureSiriFieldIsVisible;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)updateScrollHeightMetrics;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithVoiceShortcut:(id)arg1 voiceShortcutClient:(id)arg2;
- (id)initWithActionDonation:(id)arg1 voiceShortcutClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

