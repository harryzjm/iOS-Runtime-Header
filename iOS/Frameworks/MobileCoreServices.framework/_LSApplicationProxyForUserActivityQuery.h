//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForUserActivityQuery
{
    NSString *_domainName;
    NSString *_activityType;
}

+ (_Bool)supportsSecureCoding;
+ (id)queryWithActivityType:(id)arg1;
+ (id)queryWithDomainName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

