//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MCProfileDetailsCell : UITableViewCell
{
    UIImageView *_detailImageView;
    UIView *_detailView;
    UILabel *_detailTitleLabel;
    UILabel *_detailSubtitle1Label;
    UILabel *_detailSubtitle2Label;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *detailSubtitle2Label; // @synthesize detailSubtitle2Label=_detailSubtitle2Label;
@property(retain, nonatomic) UILabel *detailSubtitle1Label; // @synthesize detailSubtitle1Label=_detailSubtitle1Label;
@property(retain, nonatomic) UILabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
- (void).cxx_destruct;
- (id)_textForLabel:(id)arg1 value:(id)arg2;
- (id)_imageForApplicationIdentifier:(id)arg1;
- (void)setCertificate:(struct __SecCertificate *)arg1;
- (void)setPayloadInfo:(id)arg1;
- (void)_setPayloadInfo:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setManagedBook:(id)arg1;
- (void)setManagedApp:(id)arg1;
- (void)setUnmanagedEnterpriseApp:(id)arg1;
- (void)setTitle:(id)arg1 subtitle1:(id)arg2 subtitle2:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_detailImage;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_setupCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

