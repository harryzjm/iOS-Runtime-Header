//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADPoint3D : NSObject
{
    float mX;
    float mY;
    float mZ;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)z;
- (float)y;
- (float)x;
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;

@end

