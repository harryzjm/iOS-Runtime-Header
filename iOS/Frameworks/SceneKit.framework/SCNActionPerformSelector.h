//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNActionPerformSelector
{
    SEL _selector;
    id _target;
}

+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isCustom;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
