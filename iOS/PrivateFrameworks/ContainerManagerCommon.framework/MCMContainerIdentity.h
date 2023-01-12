//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMContainerIdentity
{
    _Bool _transient;
}

+ (id)containerIdentityWithMinimalContainerIdentity:(id)arg1 transient:(_Bool)arg2;
+ (id)containerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;
+ (id)containerIdentityWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 platform:(unsigned int)arg3 error:(unsigned long long *)arg4;
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 error:(unsigned long long *)arg5;
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 error:(unsigned long long *)arg6;
@property(readonly, nonatomic) _Bool transient; // @synthesize transient=_transient;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToContainerIdentity:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (id)containerIdentity;
- (id)identityByChangingTransient:(_Bool)arg1;
- (id)nontransientContainerIdentity;
- (id)transientContainerIdentity;
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;
- (id)plist;
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 error:(unsigned long long *)arg6;
- (id)init;

@end

