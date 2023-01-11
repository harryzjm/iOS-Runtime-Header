//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@interface ICSColor : NSObject <NSSecureCoding>
{
    unsigned char _red;
    unsigned char _green;
    unsigned char _blue;
}

+ (_Bool)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4;
+ (id)symbolicColorForLegacyRGB:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)blue;
- (unsigned char)green;
- (unsigned char)red;
- (id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;

@end
