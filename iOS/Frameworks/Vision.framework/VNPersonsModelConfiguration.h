//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _maximumIdentities;
    unsigned long long _maximumFaceprintsPerIdentity;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (unsigned long long)maximumAllowableIdentities;
@property(nonatomic) unsigned long long maximumIdentities; // @synthesize maximumIdentities=_maximumIdentities;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long maximumFaceprintsPerIdentity; // @synthesize maximumFaceprintsPerIdentity=_maximumFaceprintsPerIdentity;
- (id)init;
- (int)faceIDModelMaximumElementsPerID;

@end
