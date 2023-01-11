//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UIColor, UIFont, UILabel;

@interface GKDashboardSectionHeaderView : UICollectionReusableView
{
    _Bool _onDarkBackground;
    UILabel *_titleLabel;
    UIColor *_titleColor;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
}

+ (struct CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2;
+ (double)widthForTitle:(id)arg1 withFont:(id)arg2;
+ (double)defaultHeight;
@property(nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)dealloc;
- (void)awakeFromNib;

@end

