//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface _HKBodyMarginsLayout : UIView
{
    UIView *_leftMarginView;
    UIView *_bodyView;
    UIView *_rightMarginView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightMarginView; // @synthesize rightMarginView=_rightMarginView;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UIView *leftMarginView; // @synthesize leftMarginView=_leftMarginView;
- (double)_totalViewWidth;
- (double)_maximumViewHeight;
- (void)_invalidateLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end
