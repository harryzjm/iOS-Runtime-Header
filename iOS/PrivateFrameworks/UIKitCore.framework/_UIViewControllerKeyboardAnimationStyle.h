//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIViewControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerKeyboardAnimationStyle
{
    _Bool _disableAlongsideView;
    _Bool _allowCustomTransition;
    _UIViewControllerTransitionContext *_context;
    _UIViewControllerKeyboardAnimationStyleInfo *_info;
}

+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowCustomTransition; // @synthesize allowCustomTransition=_allowCustomTransition;
@property(readonly, nonatomic) _UIViewControllerKeyboardAnimationStyleInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool disableAlongsideView; // @synthesize disableAlongsideView=_disableAlongsideView;
@property(retain, nonatomic) _UIViewControllerTransitionContext *context; // @synthesize context=_context;
- (_Bool)canTakeSnapshot;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDismissWithScrollView;
- (void)_launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (id)initWithContext:(id)arg1;
- (_Bool)isAnimationCompleted;

@end

