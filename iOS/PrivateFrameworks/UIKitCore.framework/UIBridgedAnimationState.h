//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewAnimationState.h"

@protocol UIBridgedAnimationContext;

__attribute__((visibility("hidden")))
@interface UIBridgedAnimationState : UIViewAnimationState
{
    id <UIBridgedAnimationContext> _bridgingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UIBridgedAnimationContext> bridgingContext; // @synthesize bridgingContext=_bridgingContext;
- (void)_runActionForLayer:(id)arg1 key:(id)arg2 view:(id)arg3 currentValue:(id)arg4 targetValue:(id)arg5;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;
- (id)init;

@end

