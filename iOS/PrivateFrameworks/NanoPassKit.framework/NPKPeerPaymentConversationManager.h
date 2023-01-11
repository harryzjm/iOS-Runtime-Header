//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSConversation, NPKPeerPaymentConversationContext, NSString, PKPeerPaymentController, PKPeerPaymentRecipient;
@protocol OS_dispatch_queue;

@interface NPKPeerPaymentConversationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    MSConversation *_activeConversation;
    PKPeerPaymentRecipient *_recipient;
    NPKPeerPaymentConversationContext *_conversationContext;
    NSString *_currentRecipientAddressLookup;
    PKPeerPaymentController *_currentPeerPaymentController;
}

+ (id)sharedInstance;
@property(nonatomic) __weak PKPeerPaymentController *currentPeerPaymentController; // @synthesize currentPeerPaymentController=_currentPeerPaymentController;
@property(retain, nonatomic) NSString *currentRecipientAddressLookup; // @synthesize currentRecipientAddressLookup=_currentRecipientAddressLookup;
@property(retain, nonatomic) NPKPeerPaymentConversationContext *conversationContext; // @synthesize conversationContext=_conversationContext;
- (void).cxx_destruct;
- (id)_newPeerPaymentController;
- (id)_sharedPeerPaymentWebService;
- (void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2;
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3;
- (id)_unknownPaymentErrorWithUnderlyingError:(id)arg1;
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1;
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1;
- (id)_negativeBalanceErrorWithUnderlyingError:(id)arg1;
- (id)_displayableErrorWithError:(id)arg1;
- (void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (void)_internalQueue_performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lookupRecipientInformationIfNecessary;
@property(readonly) PKPeerPaymentRecipient *recipient; // @synthesize recipient=_recipient;
@property(readonly, nonatomic) _Bool recipientFoundInContacts;
@property(readonly, copy, nonatomic) NSString *recipientDisplayName;
@property(readonly, nonatomic) NSString *recipientPhoneOrEmail;
@property(readonly, nonatomic) NSString *senderPhoneOrEmail;
@property(retain) MSConversation *activeConversation; // @synthesize activeConversation=_activeConversation;
- (id)init;

@end

