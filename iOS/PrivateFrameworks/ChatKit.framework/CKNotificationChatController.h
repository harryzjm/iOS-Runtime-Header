//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKMessageEntryViewDelegate-Protocol.h>
#import <ChatKit/CKMessageEntryViewInputDelegate-Protocol.h>
#import <ChatKit/UIPreviewInteractionDelegate-Protocol.h>
#import <ChatKit/UITextInputPayloadDelegate-Protocol.h>

@class CKMessageEntryView, CKRaiseGesture, CKScheduledUpdater, NSExtensionContext, NSString;
@protocol CKNotificationChatControllerDelegate;

@interface CKNotificationChatController <UITextInputPayloadDelegate, CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate, UIPreviewInteractionDelegate>
{
    _Bool _shouldAllowReplyFromLockScreen;
    CKMessageEntryView *_entryView;
    NSExtensionContext *_urlOpenContext;
    CKScheduledUpdater *_typingUpdater;
    CKRaiseGesture *_raiseGesture;
}

@property(nonatomic) _Bool shouldAllowReplyFromLockScreen; // @synthesize shouldAllowReplyFromLockScreen=_shouldAllowReplyFromLockScreen;
@property(retain, nonatomic) CKRaiseGesture *raiseGesture; // @synthesize raiseGesture=_raiseGesture;
@property(retain, nonatomic) CKScheduledUpdater *typingUpdater; // @synthesize typingUpdater=_typingUpdater;
@property(nonatomic) __weak NSExtensionContext *urlOpenContext; // @synthesize urlOpenContext=_urlOpenContext;
@property(retain, nonatomic) CKMessageEntryView *entryView; // @synthesize entryView=_entryView;
- (void).cxx_destruct;
- (void)updateRaiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)updateTyping;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (_Bool)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (void)sendCurrentLocationMessage:(id)arg1;
- (struct CGSize)messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint)arg2;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (_Bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (_Bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (id)progressBar;
- (void)_messageReceivedInCurrentTranscript:(id)arg1;
- (_Bool)_deviceIsPasscodeLocked;
- (void)_setupShouldShowReplyFromLockScreen;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)sendComposition:(id)arg1;
- (void)setLocalUserIsComposing:(_Bool)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)pluginButtonsEnabled;
- (void)setConversation:(id)arg1;
- (void)_setEntryViewFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_updateEntryViewFrameIfNeeded:(_Bool)arg1;
- (double)_maxEntryViewHeight;
- (void)setSendingMessage:(_Bool)arg1;
- (id)inputAccessoryView;
- (_Bool)_shouldDisplayTextEntry;
- (void)_setConversationDeferredSetup;
- (id)launchURLForInputMode:(id)arg1;
- (double)balloonMaxWidth;
- (void)dealloc;
- (id)initWithConversation:(id)arg1;
- (void)handlePayload:(id)arg1 withPayloadId:(id)arg2;
- (void)unregisterForTextInputPayloadHandling;
- (void)registerForTextInputPayloadHandling;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKNotificationChatControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

