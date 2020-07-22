//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEIPv4Settings, NEIPv6Settings;

@interface NEVPNProtocolPPP
{
    _Bool _verboseLoggingEnabled;
    long long _authenticationMethod;
    NEIPv4Settings *_IPv4Settings;
    NEIPv6Settings *_IPv6Settings;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NEIPv6Settings *IPv6Settings; // @synthesize IPv6Settings=_IPv6Settings;
@property(copy) NEIPv4Settings *IPv4Settings; // @synthesize IPv4Settings=_IPv4Settings;
@property _Bool verboseLoggingEnabled; // @synthesize verboseLoggingEnabled=_verboseLoggingEnabled;
@property long long authenticationMethod; // @synthesize authenticationMethod=_authenticationMethod;
- (void).cxx_destruct;
- (_Bool)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;
- (_Bool)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

