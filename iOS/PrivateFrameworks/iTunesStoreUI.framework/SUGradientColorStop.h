//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSSecureCoding-Protocol.h>

@interface SUGradientColorStop : NSObject <NSSecureCoding>
{
    double _r;
    double _g;
    double _b;
    double _a;
    double _offset;
    struct CGColor *_rawColor;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) double offset;
- (struct CGColor *)copyCGColor;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(struct CGColor *)arg1 offset:(double)arg2;
- (id)init;

@end

