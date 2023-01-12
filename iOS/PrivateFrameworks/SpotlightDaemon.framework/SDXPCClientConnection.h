//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface SDXPCClientConnection : CSXPCConnection
{
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (id)initWithServiceName:(id)arg1 clientType:(long long)arg2;
- (void)handleError:(id)arg1;
- (void)invalidationHandler;

@end
