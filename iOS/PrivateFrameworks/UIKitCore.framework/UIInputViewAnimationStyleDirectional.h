//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyleDirectional
{
    int _outDirection;
}

+ (id)animationStyleAnimated:(_Bool)arg1 duration:(double)arg2 outDirection:(int)arg3;
@property(nonatomic) int outDirection; // @synthesize outDirection=_outDirection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canDismissWithScrollView;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2;
- (id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 windowScene:(id)arg3;

@end

