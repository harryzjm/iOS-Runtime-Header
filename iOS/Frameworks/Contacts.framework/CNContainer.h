//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNContainerPermissions, NSString;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_accountIdentifier;
    NSString *_name;
    long long _type;
    CNContainer *_snapshot;
    CNContainerPermissions *_permissions;
    int _iOSLegacyIdentifier;
    _Bool _enabled;
}

+ (_Bool)supportsSecureCoding;
+ (id)makeDefaultContainerPermissions;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)arg1;
+ (id)predicateForContainerOfContactWithIdentifier:(id)arg1;
+ (id)predicateForContainersWithIdentifiers:(id)arg1;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (id)predicateForLocalContainer;
+ (id)predicateForContainersIncludingDisabled:(_Bool)arg1;
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(_Bool)arg2;
@property(readonly, copy, nonatomic) CNContainerPermissions *permissions; // @synthesize permissions=_permissions;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)descriptionForContainerType:(long long)arg1;
@property(readonly, copy, nonatomic) CNContainer *snapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

