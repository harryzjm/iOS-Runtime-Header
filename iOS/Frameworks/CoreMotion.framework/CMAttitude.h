//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
- (void)multiplyByInverseOfAttitude:(id)arg1;
@property(readonly, nonatomic) CDStruct_bf7dff04 quaternion;
@property(readonly, nonatomic) CDStruct_afa449f9 rotationMatrix;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double roll;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setQuaternion:(CDStruct_bf7dff04)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuaternion:(CDStruct_bf7dff04)arg1;

@end

