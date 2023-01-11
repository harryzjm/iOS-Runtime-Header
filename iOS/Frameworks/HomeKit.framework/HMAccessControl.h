//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFUnfairLock, HMUser;

@interface HMAccessControl : NSObject <NSSecureCoding>
{
    HMFUnfairLock *_lock;
    HMUser *_user;
    unsigned long long _cachedHash;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property __weak HMUser *user; // @synthesize user=_user;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUser:(id)arg1;
- (id)init;

@end

