//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMFFuture, HMFPromise, NSString;
@protocol HMDHomeMembershipVerifier, HMDRemoteMessageTransportReachabilityDelegate;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageTransport : HMFMessageTransport
{
    int _transportType;
    HMDAccountRegistry *_accountRegistry;
    long long _qualityOfService;
    id <HMDRemoteMessageTransportReachabilityDelegate> _reachabilityDelegate;
    id <HMDHomeMembershipVerifier> _homeMembershipVerifier;
    HMFFuture *_startFuture;
    HMFPromise *_startPromise;
}

+ (id)logCategory;
+ (id)remoteMessageFromMessage:(id)arg1 secure:(_Bool)arg2 accountRegistry:(id)arg3;
+ (unsigned long long)restriction;
+ (id)_createModernTransportForProductInfo:(id)arg1 preferences:(id)arg2;
+ (id)remoteMessageTransportsForProductInfo:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) HMFPromise *startPromise; // @synthesize startPromise=_startPromise;
@property(readonly, nonatomic) HMFFuture *startFuture; // @synthesize startFuture=_startFuture;
@property(readonly, nonatomic) __weak id <HMDHomeMembershipVerifier> homeMembershipVerifier; // @synthesize homeMembershipVerifier=_homeMembershipVerifier;
@property(nonatomic) __weak id <HMDRemoteMessageTransportReachabilityDelegate> reachabilityDelegate; // @synthesize reachabilityDelegate=_reachabilityDelegate;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (id)dumpState;
- (void)configureWithHomeMembershipVerifier:(id)arg1;
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;
- (_Bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;
- (id)remoteMessageFromMessage:(id)arg1;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;
- (_Bool)isValidMessage:(id)arg1;
- (id)start;
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

