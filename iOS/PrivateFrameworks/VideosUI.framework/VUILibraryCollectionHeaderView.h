//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryCollectionHeaderView : UICollectionReusableView
{
    long long _headerViewStyle;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    UIButton *_seeAllButton;
    double _titleTopMargin;
    double _subtitleTitleMargin;
    double _bottomTextMargin;
    double _buttonHorizontalPadding;
}

+ (void)configureCollectionHeaderView:(id)arg1 title:(id)arg2 subtitle:(id)arg3 buttonString:(id)arg4 style:(long long)arg5;
@property(nonatomic) double buttonHorizontalPadding; // @synthesize buttonHorizontalPadding=_buttonHorizontalPadding;
@property(nonatomic) double bottomTextMargin; // @synthesize bottomTextMargin=_bottomTextMargin;
@property(nonatomic) double subtitleTitleMargin; // @synthesize subtitleTitleMargin=_subtitleTitleMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(retain, nonatomic) UIButton *seeAllButton; // @synthesize seeAllButton=_seeAllButton;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) long long headerViewStyle; // @synthesize headerViewStyle=_headerViewStyle;
- (void).cxx_destruct;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

