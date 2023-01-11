//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface RBSDomainAttribute
{
    NSString *_domain;
    NSString *_name;
    NSString *_sourceEnvironment;
}

+ (id)attributeWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3;
+ (id)attributeWithDomain:(id)arg1 name:(id)arg2;
@property(copy, nonatomic) NSString *sourceEnvironment; // @synthesize sourceEnvironment=_sourceEnvironment;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *fullyQualifiedName;

@end
