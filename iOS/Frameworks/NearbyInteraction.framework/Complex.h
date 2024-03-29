//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface Complex : NSObject
{
    NSNumber *_real;
    NSNumber *_imag;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSNumber *imag; // @synthesize imag=_imag;
@property(retain) NSNumber *real; // @synthesize real=_real;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRealPart:(id)arg1 imagPart:(id)arg2;

@end

