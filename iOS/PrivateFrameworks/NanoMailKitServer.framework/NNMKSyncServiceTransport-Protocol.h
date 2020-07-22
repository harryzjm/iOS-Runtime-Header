//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NSData, NSObject, NSString;
@protocol NNMKSyncServiceTransportDelegate, OS_dispatch_queue;

@protocol NNMKSyncServiceTransport <NSObject>
@property(readonly, nonatomic) unsigned long long connectivityState;
- (NSString *)sendProtobufData:(NSData *)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(_Bool)arg5;
- (NSString *)sendProtobufData:(NSData *)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(_Bool)arg4 allowCloudDelivery:(_Bool)arg5;
- (id)initWithServiceName:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 delegate:(id <NNMKSyncServiceTransportDelegate>)arg3;

@optional
@property(nonatomic) _Bool simulateCloudConnectedOnly;
@property(nonatomic) _Bool forceFailureForAllRequests;
- (void)forceFailureForNextRequest;
@end
