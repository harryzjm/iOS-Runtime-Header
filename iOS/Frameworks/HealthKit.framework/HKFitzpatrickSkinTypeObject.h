//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKFitzpatrickSkinTypeObject : NSObject <NSCopying, NSSecureCoding>
{
    long long _skinType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long skinType; // @synthesize skinType=_skinType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithSkinType:(long long)arg1;

@end
