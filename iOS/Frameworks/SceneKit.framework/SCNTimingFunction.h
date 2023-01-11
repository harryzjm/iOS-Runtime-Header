//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNTimingFunction : NSObject <NSSecureCoding>
{
    struct __C3DTimingFunction *_timingFunction;
}

+ (_Bool)supportsSecureCoding;
+ (id)functionWithCAMediaTimingFunction:(id)arg1;
+ (id)functionWithTimingMode:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DTimingFunction *)c3dTimingFunction;
- (void)dealloc;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction *)arg1;

@end

