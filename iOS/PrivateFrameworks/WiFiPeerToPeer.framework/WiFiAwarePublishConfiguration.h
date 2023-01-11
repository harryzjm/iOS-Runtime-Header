//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSString, WiFiAwarePublishDatapathConfiguration, WiFiAwarePublishServiceSpecificInfo;

@interface WiFiAwarePublishConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _furtherServiceDiscoveryRequired;
    _Bool _jumboServiceDiscoveryMessages;
    NSString *_serviceName;
    WiFiAwarePublishServiceSpecificInfo *_serviceSpecificInfo;
    long long _authenticationType;
    WiFiAwarePublishDatapathConfiguration *_datapathConfiguration;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) WiFiAwarePublishDatapathConfiguration *datapathConfiguration; // @synthesize datapathConfiguration=_datapathConfiguration;
@property(nonatomic) long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property(nonatomic) _Bool jumboServiceDiscoveryMessages; // @synthesize jumboServiceDiscoveryMessages=_jumboServiceDiscoveryMessages;
@property(nonatomic) _Bool furtherServiceDiscoveryRequired; // @synthesize furtherServiceDiscoveryRequired=_furtherServiceDiscoveryRequired;
@property(copy, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)datapathConfigurationEqual:(id)arg1;
- (_Bool)serviceSpecificInfoEqual:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
