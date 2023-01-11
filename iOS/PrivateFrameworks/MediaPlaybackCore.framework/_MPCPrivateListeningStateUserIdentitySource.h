//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICUserIdentity, NSNumber;

@interface _MPCPrivateListeningStateUserIdentitySource
{
    ICUserIdentity *_userIdentity;
    NSNumber *_cachedValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedAccessQueue;
- (void).cxx_destruct;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_loadCurrentValueFromIdentityProperties;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)sourceType;
- (id)currentValue;
- (void)dealloc;
- (id)_initWithUserIdentity:(id)arg1;

@end
