//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COClusterMember, NSData, NSSet, NSString;

@protocol COMessageChannelServiceInterface <NSObject>
- (void)sessionEndedForSubTopic:(NSString *)arg1;
- (void)sessionStartedForSubTopic:(NSString *)arg1 withMember:(COClusterMember *)arg2 produced:(_Bool)arg3;
- (void)sendRequestWithPayload:(NSData *)arg1 payloadType:(NSString *)arg2 requestType:(long long)arg3 requestID:(unsigned int)arg4 members:(NSSet *)arg5;
- (void)activateMessageChannelForTopic:(NSString *)arg1 cluster:(NSString *)arg2 handlers:(NSSet *)arg3 withCompletion:(void (^)(NSError *, unsigned long long, unsigned long long))arg4;
@end

