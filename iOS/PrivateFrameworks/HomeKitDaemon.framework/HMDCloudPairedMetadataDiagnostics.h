//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface HMDCloudPairedMetadataDiagnostics : HMFObject
{
    NSURL *_privacyPolicyURL;
    NSURL *_uploadDestination;
    unsigned long long _consentVersion;
    unsigned long long _uploadType;
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) unsigned long long uploadType; // @synthesize uploadType=_uploadType;
@property(readonly, nonatomic) unsigned long long consentVersion; // @synthesize consentVersion=_consentVersion;
@property(readonly, nonatomic) NSURL *uploadDestination; // @synthesize uploadDestination=_uploadDestination;
@property(readonly, nonatomic) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)arg1 privacyPolicyURL:(id)arg2 uploadDestination:(id)arg3 consentVersion:(unsigned long long)arg4 uploadType:(unsigned long long)arg5;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;

@end

