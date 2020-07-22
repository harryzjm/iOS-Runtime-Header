//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol HMXPCMessageTransport <NSObject>
- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 responseHandler:(void (^)(NSError *, NSDictionary *))arg5;
- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4;
@end

