//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;
}

+ (_Bool)supportsSecureCoding;
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToValue:(id)arg1;
- (id)description;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (CDStruct_82206317)CMTimeMappingValue;

@end

