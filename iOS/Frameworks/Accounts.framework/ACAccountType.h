//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Accounts/ACProtobufCoding-Protocol.h>
#import <Accounts/NSSecureCoding-Protocol.h>

@class ACAccountStore, NSSet, NSString, NSURL;

@interface ACAccountType : NSObject <NSSecureCoding, ACProtobufCoding>
{
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    NSURL *_objectID;
    int _visibility;
    NSString *_credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    _Bool _supportsMultipleAccounts;
    _Bool _obsolete;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
    _Bool _encryptAccountProperties;
    NSString *_owningBundleID;
}

+ (id)allIdentifiers;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *owningBundleID; // @synthesize owningBundleID=_owningBundleID;
@property(nonatomic, getter=isObsolete) _Bool obsolete; // @synthesize obsolete=_obsolete;
@property(nonatomic) _Bool supportsMultipleAccounts; // @synthesize supportsMultipleAccounts=_supportsMultipleAccounts;
@property(nonatomic) __weak ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool encryptAccountProperties; // @synthesize encryptAccountProperties=_encryptAccountProperties;
@property(readonly, nonatomic) NSSet *accessKeys; // @synthesize accessKeys=_accessKeys;
@property(nonatomic) int supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property(readonly, nonatomic) _Bool accessGranted;
@property(copy, nonatomic) id credentialProtectionPolicy;
@property(nonatomic) int visibility;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
- (void)setAccountTypeDescription:(id)arg1;
@property(readonly, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
- (void)setIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSSet *syncableDataclasses; // @synthesize syncableDataclasses=_syncableDataclasses;
@property(readonly, nonatomic) NSSet *supportedDataclasses; // @synthesize supportedDataclasses=_supportedDataclasses;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *fullDescription;
@property(readonly, copy) NSString *description;
- (id)_encodeProtobufData;
- (id)_encodeProtobuf;
- (id)_initWithProtobufData:(id)arg1;
- (id)_initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

