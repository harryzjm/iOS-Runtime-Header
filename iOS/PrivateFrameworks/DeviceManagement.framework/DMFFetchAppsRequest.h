//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest
{
    _Bool _deleteFeedback;
    _Bool _managedAppsOnly;
    _Bool _advanceTransientStates;
    unsigned long long _type;
    NSArray *_bundleIdentifiers;
    NSNumber *_storeItemIdentifier;
    NSURL *_manifestURL;
    NSArray *_propertyKeys;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
@property(nonatomic) _Bool advanceTransientStates; // @synthesize advanceTransientStates=_advanceTransientStates;
@property(nonatomic) _Bool managedAppsOnly; // @synthesize managedAppsOnly=_managedAppsOnly;
@property(copy, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(nonatomic) _Bool deleteFeedback; // @synthesize deleteFeedback=_deleteFeedback;
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

