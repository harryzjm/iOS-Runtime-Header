//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIEditMenuContainerView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuInProcessPresentation
{
    _UIEditMenuContainerView *_menuContainerView;
    _UIEditMenuContainerView *_touchPassthroughView;
}

- (void).cxx_destruct;
- (void)teardownContainerView;
- (id)configureContainerViewWithConfiguration:(id)arg1;
- (_Bool)canPresentEditMenu;
- (id)containerView;

@end

