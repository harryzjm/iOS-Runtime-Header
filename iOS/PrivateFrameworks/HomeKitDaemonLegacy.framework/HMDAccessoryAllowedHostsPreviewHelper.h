//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDNetworkRouterFirewallRuleManager, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryAllowedHostsPreviewHelper : HMFObject
{
    HMDHome *_home;
    HMDNetworkRouterFirewallRuleManager *_firewallRuleManager;
    struct os_unfair_lock_s _lock;
    NSDate *_expires;
}

+ (id)helperForHome:(id)arg1;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;
- (void)fetchAllowedHostsForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

