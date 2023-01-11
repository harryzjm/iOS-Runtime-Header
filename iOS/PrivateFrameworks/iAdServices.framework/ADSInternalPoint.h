//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iAdServices/NSCopying-Protocol.h>
#import <iAdServices/NSSecureCoding-Protocol.h>

@interface ADSInternalPoint : NSObject <NSSecureCoding, NSCopying>
{
    float _x;
    float _y;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
