//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class UIView;

@interface GKCenteringScrollView : UIScrollView
{
    UIView *_contentView;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)centerContentViewIfDesirable;
- (void)layoutSubviews;
- (void)dealloc;

@end
