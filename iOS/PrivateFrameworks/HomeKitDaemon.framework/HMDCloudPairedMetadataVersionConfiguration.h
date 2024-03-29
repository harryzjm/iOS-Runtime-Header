//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudPairedMetadataDiagnostics, HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject
{
    HMDCloudPairedMetadataDiagnostics *_diagnostics;
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) HMDCloudPairedMetadataDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 diagnostics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

