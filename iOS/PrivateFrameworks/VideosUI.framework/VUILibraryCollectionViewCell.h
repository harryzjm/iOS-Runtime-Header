//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryCollectionViewCell : UICollectionViewCell
{
    UIViewController *_viewController;
    VUISeparatorView *_topSeparatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

