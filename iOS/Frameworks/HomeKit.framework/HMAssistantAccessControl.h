//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSSet;

@interface HMAssistantAccessControl <NSSecureCoding, NSCopying, NSMutableCopying>
{
    _Bool _enabled;
    unsigned long long _options;
    NSSet *_accessories;
}

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (_Bool)isAccessorySupported:(id)arg1;
@property(readonly, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSArray *accessories;
@property(readonly) _Bool allowUnauthenticatedRequests;
- (unsigned long long)options;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUser:(id)arg1;

@end

