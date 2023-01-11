//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantUI/AFUIBugReportPresenting-Protocol.h>
#import <AssistantUI/AFUIDebugControllerDelegate-Protocol.h>
#import <AssistantUI/AFUIInternalDebugControllerDelegate-Protocol.h>

@class UIAlertController, UIViewController;
@protocol AFUIBugReportPresentingDelegate, AFUIDebugControlling, AFUIInternalDebugControlling;

@interface AFUIBugReportPresenter : NSObject <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, AFUIBugReportPresenting>
{
    UIViewController<AFUIInternalDebugControlling> *_internalDebugController;
    id <AFUIDebugControlling> _debugController;
    id <AFUIBugReportPresentingDelegate> _delegate;
    UIAlertController *_presentedAlertController;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setPresentedAlertController:) UIAlertController *presentedAlertController; // @synthesize presentedAlertController=_presentedAlertController;
@property __weak id <AFUIBugReportPresentingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)internalDebugControllerWantsDismissViewController;
- (id)debugControllerRequestsBugReportKeywordIdentifiers:(id)arg1;
- (id)debugControllerRequestsBugReportPrefixForTitle:(id)arg1;
- (void)debugController:(id)arg1 requestsScreenShotWithCompletion:(CDUnknownBlockType)arg2;
- (void)debugController:(id)arg1 requestsPermissionToScreenshot:(CDUnknownBlockType)arg2;
- (void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;
- (void)debugController:(id)arg1 openURL:(id)arg2;
- (void)_debugControllerPresentationDidEnd;
- (void)_debugControllerPresentationWillStart;
- (id)_confirmationAlertControllerWithTitle:(id)arg1 onConfirmation:(CDUnknownBlockType)arg2;
- (void)_actionClickedForAction:(id)arg1 withActionType:(long long)arg2;
- (long long)_actionStyleForAlertAction:(long long)arg1;
- (id)_actionTitleForAlertAction:(long long)arg1;
- (id)_actionForAlertAction:(long long)arg1;
- (id)_alertControllerWithActionTypes:(id)arg1;
- (double)_logTime;
- (id)_conversationDataFromConversation:(id)arg1;
- (id)_lastUserTextFromConversation:(id)arg1;
- (void)_captureViewHierarchyDescriptionForController:(id)arg1;
- (void)_dismissAlertControllerAnimated:(_Bool)arg1;
- (void)_dismissInternalDebugController;
- (void)_requestDeviceUnlockWithSuccessCompletion:(CDUnknownBlockType)arg1 withErrorCompletion:(CDUnknownBlockType)arg2;
- (void)_requestToPresentInternalDebugController:(id)arg1;
- (void)_requestToOpenURL:(id)arg1;
- (void)_requestToPresentAlertController:(id)arg1;
- (void)_requestToPresentDebugController:(id)arg1;
- (void)dismiss;
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (id)initWithDelegate:(id)arg1;

@end
