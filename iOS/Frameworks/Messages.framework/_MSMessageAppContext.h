//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Messages/_MSMessageComposeExtensionImplProtocol-Protocol.h>

@class MSConversation, NSMapTable, NSString, UIViewController;
@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@interface _MSMessageAppContext : NSObject <_MSMessageComposeExtensionImplProtocol>
{
    id <_MSMessageComposeExtensionImplProtocol> _context;
    id <_MSMessageComposeExtensionImplProtocol> _keepAliveContext;
    NSMapTable *_conversationsByIdentifier;
    id <_MSMessageComposeExtensionImplProtocol> _containingContext;
    MSConversation *_activeConversation;
    id <_MSMessageComposeHostImplProtocol> _hostContext;
}

+ (id)activeExtensionContext;
@property(retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext; // @synthesize hostContext=_hostContext;
@property(readonly, nonatomic) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
@property(retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext; // @synthesize containingContext=_containingContext;
- (void).cxx_destruct;
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)_hostDidBeginDeferredTeardown;
- (void)_requestSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_resignActive;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)requestResize;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)dismiss;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) __weak UIViewController *stickerViewController;
@property(readonly, nonatomic) __weak UIViewController *viewController;
- (id)updatedConversationForConversationState:(id)arg1;
@property(nonatomic) unsigned long long presentationStyle;
- (void)_releaseKeepAliveContext;
- (void)_keepContextAlive;
- (id)initWithAppContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
