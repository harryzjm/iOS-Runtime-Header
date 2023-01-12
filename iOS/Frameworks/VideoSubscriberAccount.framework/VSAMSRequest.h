//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, VSAuditToken;

@interface VSAMSRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_methodName;
    unsigned long long _requestType;
    NSString *_providerIdentifier;
    NSDictionary *_parameters;
    VSAuditToken *_auditToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
