//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CKWhatsNewFeatureView : UIView
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (double)titleLabelLeadingConstant;
- (double)iconViewMaxSize;
- (double)iconViewLeadingConstant;
- (void)updateFonts;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithIcon:(id)arg1 title:(id)arg2 description:(id)arg3;

@end

