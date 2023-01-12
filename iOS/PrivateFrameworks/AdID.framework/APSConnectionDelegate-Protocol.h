//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdID/NSObject-Protocol.h>

@class APSAppTokenInfo, APSConnection, APSIncomingMessage, APSOutgoingMessage, APSURLToken, APSURLTokenInfo, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol APSConnectionDelegate <NSObject>
- (void)connection:(APSConnection *)arg1 didReceivePublicToken:(NSData *)arg2;

@optional
- (void)connection:(APSConnection *)arg1 channelSubscriptionsFailedWithFailures:(NSArray *)arg2;
- (void)connectionDidReconnect:(APSConnection *)arg1;
- (void)connection:(APSConnection *)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(APSConnection *)arg1 didFailToSendOutgoingMessage:(APSOutgoingMessage *)arg2 error:(NSError *)arg3;
- (void)connection:(APSConnection *)arg1 didSendOutgoingMessage:(APSOutgoingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveMessageForTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveIncomingMessage:(APSIncomingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveURLTokenError:(NSError *)arg2 forInfo:(APSURLTokenInfo *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveURLToken:(APSURLToken *)arg2 forInfo:(APSURLTokenInfo *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveToken:(NSData *)arg2 forInfo:(APSAppTokenInfo *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveToken:(NSData *)arg2 forTopic:(NSString *)arg3 identifier:(NSString *)arg4;
@end

