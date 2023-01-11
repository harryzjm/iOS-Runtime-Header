//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSUUID;

@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSString *_name;
    NSSet *_personLinks;
}

+ (_Bool)supportsSecureCoding;
+ (id)personFromHomePerson:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSSet *personLinks; // @synthesize personLinks=_personLinks;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithUUID:(id)arg1 name:(id)arg2 personLinks:(id)arg3;
- (id)initWithUUID:(id)arg1 name:(id)arg2;

@end
