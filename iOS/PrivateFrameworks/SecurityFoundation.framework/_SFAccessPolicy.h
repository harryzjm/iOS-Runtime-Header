//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding>
{
    id _accessPolicyInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) const struct __CFDictionary *secAccessibilityAttributes;
@property(copy, nonatomic) NSArray *accessControlList;
@property(copy, nonatomic) NSString *accessGroup;
@property(nonatomic) long long sharingPolicy;
@property(nonatomic) CDStruct_9d0d652d accessibility;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessibility:(CDStruct_9d0d652d)arg1 sharingPolicy:(long long)arg2;
- (id)init;

@end
