//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccountRegistry, NSString;

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging>
{
    HMDAccountRegistry *_accountRegistry;
    long long _qualityOfService;
}

+ (id)logCategory;
+ (id)remoteMessageFromMessage:(id)arg1 secure:(_Bool)arg2 accountRegistry:(id)arg3;
+ (unsigned long long)restriction;
+ (id)remoteMessageTransportsForProductInfo:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;
- (_Bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;
- (id)remoteMessageFromMessage:(id)arg1;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;
- (void)start;
@property(readonly, nonatomic, getter=isSecure) _Bool secure;
- (id)initWithAccountRegistry:(id)arg1;
- (_Bool)canSendMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
