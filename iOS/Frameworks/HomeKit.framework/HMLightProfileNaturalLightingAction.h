//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMLightProfile, NSArray, NSString, NSUUID;

@interface HMLightProfileNaturalLightingAction <NSSecureCoding, HMObjectMerge, HMFLogging, HMFObject>
{
    _Bool _naturalLightingEnabled;
    HMLightProfile *_lightProfile;
    NSUUID *_lightProfileUUID;
}

+ (id)shortDescription;
+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)new;
- (void).cxx_destruct;
@property(readonly) NSUUID *lightProfileUUID; // @synthesize lightProfileUUID=_lightProfileUUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)logIdentifier;
@property(retain) HMLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
@property(getter=isNaturalLightingEnabled) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
- (void)updateNaturalLightingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)initWithPBNaturalLightingAction:(id)arg1 home:(id)arg2;
- (id)encodeAsProtoBuf;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (_Bool)isValid;
- (unsigned long long)type;
- (_Bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(_Bool)arg3;
- (id)initWithLightProfile:(id)arg1 naturalLightingEnabled:(_Bool)arg2;
- (id)initWithUUID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end
