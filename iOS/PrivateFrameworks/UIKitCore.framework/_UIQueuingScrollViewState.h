//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollViewState
{
    UIView *_view;
    UIViewController *_viewController;
    _Bool _manual;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isManual) _Bool manual; // @synthesize manual=_manual;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)description;
- (_Bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

