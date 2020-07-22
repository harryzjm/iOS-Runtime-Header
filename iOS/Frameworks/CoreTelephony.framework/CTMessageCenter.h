//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CTMessageCenter : NSObject
{
}

+ (id)sharedMessageCenter;
- (_Bool)simulateDeferredMessage;
- (_Bool)simulateSmsReceived:(id)arg1;
- (_Bool)getCharacterCount:(long long *)arg1 andMessageSplitThreshold:(long long *)arg2 forSmsText:(id)arg3;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(_Bool)arg4 withID:(unsigned int)arg5;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(_Bool)arg4;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned int)arg4;
- (_Bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3;
- (_Bool)isMmsConfigured;
- (_Bool)isMmsEnabled;
- (void)setDeliveryReportsEnabled:(_Bool)arg1;
- (CDStruct_1ef3fb1f)isDeliveryReportsEnabled:(_Bool *)arg1;
- (id)decodeMessage:(id)arg1;
- (id)encodeMessage:(id)arg1;
- (id)statusOfOutgoingMessages;
- (id)deferredMessageWithId:(unsigned int)arg1;
- (id)incomingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)arg1;
- (id)allIncomingMessages;
- (void)addMessageOfType:(int)arg1 toArray:(id)arg2 withIdsFromArray:(id)arg3;
- (int)incomingMessageCount;
- (id)incomingMessageWithId:(unsigned int)arg1 isDeferred:(_Bool)arg2;
- (CDStruct_1ef3fb1f)send:(id)arg1 withMoreToFollow:(_Bool)arg2;
- (CDStruct_1ef3fb1f)send:(id)arg1;
- (CDStruct_1ef3fb1f)sendMMS:(id)arg1;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id *)arg2;
- (CDStruct_1ef3fb1f)sendMMSFromData:(id)arg1 messageId:(unsigned int)arg2;
- (CDStruct_1ef3fb1f)sendSMS:(id)arg1 withMoreToFollow:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

