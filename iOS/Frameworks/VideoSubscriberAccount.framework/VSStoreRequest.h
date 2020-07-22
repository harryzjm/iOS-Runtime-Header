//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, VSAuditToken;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_methodName;
    NSString *_bagKey;
    NSDictionary *_parameters;
    VSAuditToken *_auditToken;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

