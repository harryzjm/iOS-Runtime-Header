//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HMDNetworkRouterFirewallRuleManagerClient;

@interface HMDNetworkRouterFirewallRuleManagerClientState : NSObject
{
    id <HMDNetworkRouterFirewallRuleManagerClient> _client;
    CDUnknownBlockType _startupCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType startupCompletion; // @synthesize startupCompletion=_startupCompletion;
@property(nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerClient> client; // @synthesize client=_client;

@end
