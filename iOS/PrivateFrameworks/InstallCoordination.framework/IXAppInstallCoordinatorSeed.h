//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IXApplicationIdentity, NSUUID;

__attribute__((visibility("hidden")))
@interface IXAppInstallCoordinatorSeed : NSObject
{
    unsigned int _creatorEUID;
    NSUUID *_uniqueIdentifier;
    unsigned long long _creator;
    unsigned long long _intent;
    IXApplicationIdentity *_identity;
    unsigned long long _installationDomain;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long installationDomain; // @synthesize installationDomain=_installationDomain;
@property(retain, nonatomic) IXApplicationIdentity *identity; // @synthesize identity=_identity;
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(nonatomic) unsigned int creatorEUID; // @synthesize creatorEUID=_creatorEUID;
@property(nonatomic) unsigned long long creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

