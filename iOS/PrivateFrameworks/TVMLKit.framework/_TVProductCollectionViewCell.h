//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _TVProductCollectionViewCell : UICollectionViewCell
{
    UIView *_titleView;
    struct UIEdgeInsets _activeMargins;
    _Bool _marginActive;
    UIViewController *_viewController;
    struct UIEdgeInsets _partialMargins;
    struct UIEdgeInsets _margins;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) struct UIEdgeInsets partialMargins; // @synthesize partialMargins=_partialMargins;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)disableMargins;
- (void)enableWithMargins:(struct UIEdgeInsets)arg1;
- (_Bool)isShowingTitleView;
- (void)showTitleView:(_Bool)arg1;
- (void)setTitleView:(id)arg1 margins:(struct UIEdgeInsets)arg2 show:(_Bool)arg3;
- (id)titleView;

@end

