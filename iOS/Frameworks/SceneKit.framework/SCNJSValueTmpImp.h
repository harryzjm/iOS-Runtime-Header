//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNJSValueTmpImp : NSObject
{
}

+ (id)valueWithTransform3D:(struct SCNMatrix4)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;
+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;
- (struct SCNMatrix4)toTransform3D;
- (struct SCNVector3)toVector3;
- (struct SCNVector4)toVector4;

@end

