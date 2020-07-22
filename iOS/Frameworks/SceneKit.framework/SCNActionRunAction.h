//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SCNAction;

@interface SCNActionRunAction
{
    SCNAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    _Bool _waitForKeyedAction;
    _Bool _runOnSubSprite;
    _Bool _fired;
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (_Bool)isCustom;
- (void)dealloc;
- (id)init;

@end

