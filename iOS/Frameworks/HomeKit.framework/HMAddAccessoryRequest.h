//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMHome, HMSetupAccessoryDescription, NSString, NSUUID;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding>
{
    _Bool _requiresSetupPayloadURL;
    _Bool _requiresOwnershipToken;
    HMHome *_home;
    NSString *_accessoryName;
    HMAccessoryCategory *_accessoryCategory;
    NSUUID *_requestIdentifier;
    HMSetupAccessoryDescription *_accessoryDescription;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription; // @synthesize accessoryDescription=_accessoryDescription;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) _Bool requiresOwnershipToken; // @synthesize requiresOwnershipToken=_requiresOwnershipToken;
@property(readonly, nonatomic) _Bool requiresSetupPayloadURL; // @synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL;
@property(readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)payloadWithOwnershipToken:(id)arg1;

@end
