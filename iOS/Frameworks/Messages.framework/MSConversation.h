//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSMessage, NSArray, NSData, NSString, NSUUID;
@protocol MSConversationDelegate;

@interface MSConversation : NSObject
{
    NSUUID *_identifier;
    NSString *_conversationIdentifier;
    NSData *_engramID;
    MSMessage *_selectedMessage;
    NSUUID *_localParticipantIdentifier;
    NSArray *_remoteParticipantIdentifiers;
    NSString *_senderAddress;
    NSArray *_recipientAddresses;
    id <MSConversationDelegate> _delegate;
}

+ (id)activeConversation;
@property(nonatomic) __weak id <MSConversationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *recipientAddresses; // @synthesize recipientAddresses=_recipientAddresses;
@property(readonly, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(retain, nonatomic) NSArray *remoteParticipantIdentifiers; // @synthesize remoteParticipantIdentifiers=_remoteParticipantIdentifiers;
@property(readonly, nonatomic) NSUUID *localParticipantIdentifier; // @synthesize localParticipantIdentifier=_localParticipantIdentifier;
@property(retain, nonatomic) MSMessage *selectedMessage; // @synthesize selectedMessage=_selectedMessage;
@property(readonly, nonatomic) NSData *engramID; // @synthesize engramID=_engramID;
@property(readonly, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)stageMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)recipientIdentifiers;
- (id)senderIdentifier;
- (void)_insertAttachment:(id)arg1 adamID:(id)arg2 appName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_insertSticker:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_insertRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_insertAttachment:(id)arg1 withAlternateFilename:(id)arg2 skipShelf:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_insertText:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_insertMessage:(id)arg1 localizedChangeDescription:(id)arg2 skipShelf:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_insertMessage:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendRichLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendAttachment:(id)arg1 withAlternateFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertRichLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertAttachment:(id)arg1 withAlternateFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)insertText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)insertMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)context;
- (void)_updateWithState:(id)arg1;
- (id)_initWithState:(id)arg1;
- (id)inputMessagePayload;
- (void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertStickerWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertMediaAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertMediaAtURL:(id)arg1 attributionURL:(id)arg2 attributionIcon:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)unstageAllItems;
- (void)updateMessagePayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

