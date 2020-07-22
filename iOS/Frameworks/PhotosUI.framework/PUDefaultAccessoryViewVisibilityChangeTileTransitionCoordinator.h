//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUDefaultAccessoryViewVisibilityChangeTileTransitionCoordinator
{
    _Bool _shouldAnimateContent;
    _Bool _shouldAnimateAccessory;
    _Bool _shouldSlideAccessory;
    PUBrowsingViewModel *_viewModel;
}

@property(nonatomic) _Bool shouldSlideAccessory; // @synthesize shouldSlideAccessory=_shouldSlideAccessory;
@property(nonatomic) _Bool shouldAnimateAccessory; // @synthesize shouldAnimateAccessory=_shouldAnimateAccessory;
@property(nonatomic) _Bool shouldAnimateContent; // @synthesize shouldAnimateContent=_shouldAnimateContent;
@property(retain, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;

@end
