//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterLANFirewallRuleList : NSObject
{
    NSMutableArray *_multicastBridgingRules;
    NSMutableArray *_staticPortRules;
    NSMutableArray *_dynamicPortRules;
    NSMutableArray *_staticICMPRules;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *staticICMPRules; // @synthesize staticICMPRules=_staticICMPRules;
@property(retain, nonatomic) NSMutableArray *dynamicPortRules; // @synthesize dynamicPortRules=_dynamicPortRules;
@property(retain, nonatomic) NSMutableArray *staticPortRules; // @synthesize staticPortRules=_staticPortRules;
@property(retain, nonatomic) NSMutableArray *multicastBridgingRules; // @synthesize multicastBridgingRules=_multicastBridgingRules;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithMulticastBridgingRules:(id)arg1 staticPortRules:(id)arg2 dynamicPortRules:(id)arg3 staticICMPRules:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

