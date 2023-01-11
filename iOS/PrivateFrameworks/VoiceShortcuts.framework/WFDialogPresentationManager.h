//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/NSXPCListenerDelegate-Protocol.h>
#import <VoiceShortcuts/WFDialogAlertPresenterDelegate-Protocol.h>
#import <VoiceShortcuts/WFDialogXPCHostProtocol-Protocol.h>
#import <VoiceShortcuts/WFScreenOnObserverDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListener, WFDialogAttribution, WFDialogNotificationManager, WFPresentedDialog, WFScreenOnObserver, WFUserNotificationManager, WFWorkflowRunningContext;
@protocol WFDialogAlertPresenter, WFDialogPresentationManagerDelegate;

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate>
{
    id <WFDialogPresentationManagerDelegate> _delegate;
    id <WFDialogAlertPresenter> _remoteAlertPresenter;
    NSXPCListener *_listener;
    NSXPCConnection *_activeConnection;
    WFPresentedDialog *_presentedDialog;
    CDUnknownBlockType _contentDismissalCompletionHandler;
    WFWorkflowRunningContext *_persistentRunningContext;
    WFDialogAttribution *_persistentRunningAttribution;
    NSMutableArray *_persistentPresentationQueue;
    NSMutableArray *_otherPresentationQueue;
    WFDialogNotificationManager *_notificationManager;
    WFScreenOnObserver *_screenOnObserver;
    NSString *_dismissalReason;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(readonly, nonatomic) WFScreenOnObserver *screenOnObserver; // @synthesize screenOnObserver=_screenOnObserver;
@property(readonly, nonatomic) WFDialogNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) NSMutableArray *otherPresentationQueue; // @synthesize otherPresentationQueue=_otherPresentationQueue;
@property(readonly, nonatomic) NSMutableArray *persistentPresentationQueue; // @synthesize persistentPresentationQueue=_persistentPresentationQueue;
@property(retain, nonatomic) WFDialogAttribution *persistentRunningAttribution; // @synthesize persistentRunningAttribution=_persistentRunningAttribution;
@property(retain, nonatomic) WFWorkflowRunningContext *persistentRunningContext; // @synthesize persistentRunningContext=_persistentRunningContext;
@property(copy, nonatomic) CDUnknownBlockType contentDismissalCompletionHandler; // @synthesize contentDismissalCompletionHandler=_contentDismissalCompletionHandler;
@property(retain, nonatomic) WFPresentedDialog *presentedDialog; // @synthesize presentedDialog=_presentedDialog;
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) id <WFDialogAlertPresenter> remoteAlertPresenter; // @synthesize remoteAlertPresenter=_remoteAlertPresenter;
@property(nonatomic) __weak id <WFDialogPresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)trackDialogEventWithKey:(id)arg1 request:(id)arg2 presentationMode:(unsigned long long)arg3 automationType:(id)arg4;
- (void)logFinishDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 automationType:(id)arg3;
- (void)logFinishDialogPresentationWithPresentedDialog:(id)arg1;
- (void)logStartDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2;
- (void)trackSuspendShortcutWithPresentedDialog:(id)arg1;
@property(readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
- (void)screenOnStateDidChange:(id)arg1;
- (void)completePersistentModeWithSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginPersistentModeWithRunningContext:(id)arg1 attribution:(id)arg2;
- (void)dialogAlertPresenterDidInvalidateAlert:(id)arg1;
- (void)dialogAlertPresenterDidDeactivateAlert:(id)arg1;
- (id)xpcListenerEndpointForDialogAlertPresenter:(id)arg1;
- (void)requestDismissalWithReason:(id)arg1;
- (void)beginConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 context:(id)arg3;
- (void)deactivateRemoteAlertAndInvalidateConnection;
- (void)presentNextDialog;
- (void)dismissPresentedContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showDialogRequest:(id)arg1 fromWorkflowWithPresentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)hasMoreDialogsToPresent;
- (void)connectedDialogDidDisconnect;
- (id)connectedDialog;
- (void)removeStaleNotifications;
- (void)dealloc;
- (id)initWithNotificationManager:(id)arg1 dialogAlertPresenter:(id)arg2 screenOnObserver:(id)arg3;
- (id)initWithUserNotificationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
