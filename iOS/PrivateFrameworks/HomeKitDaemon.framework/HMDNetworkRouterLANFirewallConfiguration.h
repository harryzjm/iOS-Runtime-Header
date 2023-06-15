//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterLANFirewall, HMDNetworkRouterLANFirewallRuleList, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterLANFirewallConfiguration : NSObject
{
    HMDNetworkRouterLANFirewall *_type;
    HMDNetworkRouterLANFirewallRuleList *_ruleList;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;
+ (id)configurationWithFullAccess;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDNetworkRouterLANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterLANFirewall *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 ruleList:(id)arg2;
- (id)init;
- (void)addRulesFromFirewallConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

