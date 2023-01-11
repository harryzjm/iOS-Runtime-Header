//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NEDNSOverTLSSettings
{
    NSString *_serverName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *serverName; // @synthesize serverName=_serverName;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dnsProtocol;

@end
