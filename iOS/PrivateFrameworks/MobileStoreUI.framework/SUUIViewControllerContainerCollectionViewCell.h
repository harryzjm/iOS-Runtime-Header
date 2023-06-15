//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, SUUIViewControllerContainerView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SUUIViewControllerContainerCollectionViewCell : UICollectionViewCell
{
    SUUIViewControllerContainerView *_viewControllerContainerView;
    _Bool _managesViewControllerContainerViewLayout;
    double _maximumContentWidth;
    NSIndexPath *_indexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool managesViewControllerContainerViewLayout; // @synthesize managesViewControllerContainerViewLayout=_managesViewControllerContainerViewLayout;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(readonly, nonatomic) UIView *viewControllerContainerView;
@property(retain, nonatomic) UIViewController *viewController;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

