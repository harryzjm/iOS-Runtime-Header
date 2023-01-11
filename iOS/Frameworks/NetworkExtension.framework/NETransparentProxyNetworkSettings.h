//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NETransparentProxyNetworkSettings
{
    NSArray *_includedNetworkRules;
    NSArray *_excludedNetworkRules;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSArray *excludedNetworkRules; // @synthesize excludedNetworkRules=_excludedNetworkRules;
@property(copy) NSArray *includedNetworkRules; // @synthesize includedNetworkRules=_includedNetworkRules;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (_Bool)validateNetworkRule:(id)arg1 collectErrors:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
