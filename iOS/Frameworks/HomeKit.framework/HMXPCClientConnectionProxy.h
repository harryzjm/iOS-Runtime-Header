//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKit/HMXPCMessageTransport-Protocol.h>

@class HMXPCClient, NSString;

__attribute__((visibility("hidden")))
@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCMessageTransport>
{
    HMXPCClient *_client;
    CDUnknownBlockType _refreshHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType refreshHandler; // @synthesize refreshHandler=_refreshHandler;
@property __weak HMXPCClient *client; // @synthesize client=_client;
- (void)fetchUserInfo:(CDUnknownBlockType)arg1;
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRefreshHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
