//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, SMHandle, SMMessage, SMSessionStartMessage;

@protocol SMMessagingServiceMessengerDelegate
- (void)receivedMessage:(SMMessage *)arg1 fromHandle:(SMHandle *)arg2 fromMe:(_Bool)arg3;
- (void)receivedSessionStartMessageSendResultWithMessage:(SMSessionStartMessage *)arg1 guid:(NSString *)arg2 successful:(_Bool)arg3 withError:(NSError *)arg4;
@end

