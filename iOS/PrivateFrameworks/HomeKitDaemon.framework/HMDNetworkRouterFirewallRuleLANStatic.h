//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFNetAddress, NSArray;

@interface HMDNetworkRouterFirewallRuleLANStatic
{
    unsigned char _transportProtocol;
    unsigned short _portStart;
    unsigned short _portEnd;
    HMFNetAddress *_ipAddress;
    NSArray *_icmpTypes;
}

+ (id)createWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 ruleDictionary:(id)arg8 error:(id *)arg9;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *icmpTypes; // @synthesize icmpTypes=_icmpTypes;
@property(readonly, nonatomic) unsigned short portEnd; // @synthesize portEnd=_portEnd;
@property(readonly, nonatomic) unsigned short portStart; // @synthesize portStart=_portStart;
@property(readonly, nonatomic) HMFNetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(readonly, nonatomic) unsigned char transportProtocol; // @synthesize transportProtocol=_transportProtocol;
- (id)prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(_Bool)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(_Bool)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(_Bool)arg7 transportProtocol:(unsigned char)arg8 ipAddress:(id)arg9 portStart:(unsigned short)arg10 portEnd:(unsigned short)arg11 icmpTypes:(id)arg12;

@end
