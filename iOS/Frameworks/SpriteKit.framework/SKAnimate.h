//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKAnimate : SKAction
{
    void *_mycaction;
    NSArray *_textures;
}

+ (id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(_Bool)arg3 restore:(_Bool)arg4;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(_Bool)arg3 restore:(_Bool)arg4;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double timePerFrame;
- (void)setDuration:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

