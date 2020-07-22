//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIViewInProcessAnimationState
{
    _Bool _retargeted;
    CDUnknownBlockType _animationAndComposerGetter;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool retargeted; // @synthesize retargeted=_retargeted;
@property(copy, nonatomic) CDUnknownBlockType animationAndComposerGetter; // @synthesize animationAndComposerGetter=_animationAndComposerGetter;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animatePropertyWithKey:(id)arg1 view:(id)arg2 forceNew:(_Bool)arg3 currentValue:(id)arg4 targetValueGetter:(CDUnknownBlockType)arg5 preTickShouldRemoveCallback:(CDUnknownBlockType)arg6 newValueCallback:(CDUnknownBlockType)arg7 removedCallback:(CDUnknownBlockType)arg8;
- (void)animatePropertyWithCurrentValue:(id)arg1 targetValueGetter:(CDUnknownBlockType)arg2 preTickShouldRemoveCallback:(CDUnknownBlockType)arg3 newValueCallback:(CDUnknownBlockType)arg4 removedCallback:(CDUnknownBlockType)arg5 animatablePropertyState:(id)arg6;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)init;

@end
