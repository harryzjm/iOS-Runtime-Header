//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISearchBar, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextDismissSearch
{
    UISearchBar *_transitioningSearchBar;
    UIView *_transitioningScopeBarContainer;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)complete;
- (void)animate;
- (void)prepare;
- (_Bool)_shouldCrossfadeDismissal;
- (int)transition;

@end

