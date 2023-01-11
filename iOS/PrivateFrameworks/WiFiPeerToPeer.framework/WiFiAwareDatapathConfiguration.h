//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSData, NSString, WiFiAwareDiscoveryResult, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding>
{
    WiFiAwareDiscoveryResult *_discoveryResult;
    long long _serviceType;
    NSString *_passphrase;
    NSData *_pmk;
    WiFiAwarePublishDatapathServiceSpecificInfo *_serviceSpecificInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) NSData *pmk; // @synthesize pmk=_pmk;
@property(readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult; // @synthesize discoveryResult=_discoveryResult;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)pmkEqual:(id)arg1;
- (_Bool)passphraseEqual:(id)arg1;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 passphrase:(id)arg3 pmk:(id)arg4 serviceSpecificInfo:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
