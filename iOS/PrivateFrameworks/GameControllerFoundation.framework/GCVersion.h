//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GCVersion : NSObject
{
    unsigned long long _major;
    unsigned long long _minor;
    unsigned long long _patch;
}

+ (_Bool)supportsSecureCoding;
+ (id)currentSourceVersion;
@property(readonly) unsigned long long patch; // @synthesize patch=_patch;
@property(readonly) unsigned long long minor; // @synthesize minor=_minor;
@property(readonly) unsigned long long major; // @synthesize major=_major;
- (id)debugDescription;
- (id)redactedDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isLessThanOrEqualTo:(id)arg1;
- (_Bool)isLessThan:(id)arg1;
- (_Bool)isGreaterThanOrEqualTo:(id)arg1;
- (_Bool)isGreaterThan:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isLessThanOrEqualToSourceVersion:(id)arg1;
- (_Bool)isLessThanSourceVersion:(id)arg1;
- (_Bool)isGreaterThanOrEqualToSourceVersion:(id)arg1;
- (_Bool)isGreaterThanSourceVersion:(id)arg1;
- (_Bool)isEqualToSourceVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 patch:(unsigned long long)arg3;

@end

