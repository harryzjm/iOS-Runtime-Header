//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface SCNJSValue : NSValue
{
}

+ (id)SCNJSExportProtocol;
+ (id)valueWithMatrix4:(struct SCNMatrix4)arg1;
+ (id)valueWithVector4:(struct SCNVector4)arg1;
+ (id)valueWithVector3:(struct SCNVector3)arg1;
- (struct SCNMatrix4)matrix4;
- (struct SCNVector4)vector4;
- (struct SCNVector3)vector3;

@end

