//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface _UIDynamicAnimation : NSObject
{
    CDUnknownBlockType _completion;
    int _state;
    unsigned int _began:1;
    unsigned int _running:1;
    unsigned int _completing:1;
    unsigned int _yield:1;
    unsigned int _grouped:1;
    unsigned int _usesNSTimer:1;
}

+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(struct CGPoint)arg5;
+ (void)_updateAnimationsWithTimer:(id)arg1;
+ (void)_updateAnimations:(id)arg1;
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (_Bool)_isRunning;
- (void)_setGrouped:(_Bool)arg1;
- (_Bool)_isGrouped;
- (void)_setUsesNSTimer:(_Bool)arg1;
- (_Bool)_usesNSTimer;
- (void)_setShouldYield:(_Bool)arg1;
- (_Bool)_shouldYield;
@property(readonly, nonatomic) int state;
- (void)_cancelWithAppliers:(CDUnknownBlockType)arg1;
- (void)_completeWithFinished:(_Bool)arg1;
- (void)stop;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithCompletion:(CDUnknownBlockType)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;
- (void)_callAppliers:(CDUnknownBlockType)arg1 additionalEndAppliers:(CDUnknownBlockType)arg2 done:(_Bool)arg3;
- (_Bool)_animateForInterval:(double)arg1;
- (void)_stopAnimation;
- (void)dealloc;
- (id)init;

@end

