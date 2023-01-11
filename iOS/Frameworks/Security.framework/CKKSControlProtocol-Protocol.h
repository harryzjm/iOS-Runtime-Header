//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol CKKSControlProtocol <NSObject>
- (void)rpcCKMetric:(NSString *)arg1 attributes:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)rpcGetCKDeviceIDWithReply:(void (^)(NSString *))arg1;
- (void)rpcPushOutgoingChanges:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcFetchAndProcessClassAChanges:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcFetchAndProcessChanges:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcFastStatus:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)rpcStatus:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)rpcResyncLocal:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcResync:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcResetCloudKit:(NSString *)arg1 reason:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)rpcResetLocal:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)performanceCounters:(void (^)(NSDictionary *))arg1;
@end
