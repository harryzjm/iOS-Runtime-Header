//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol _TtP8GroupKit22DaemonServiceProviding_
- (void)sendMessageAndWaitForReplyWith:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)sendMessageWith:(NSData *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
@end

