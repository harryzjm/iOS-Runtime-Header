//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView;

@interface STStorageTableCell : PSTableCell
{
    NSMutableArray *_normalFontConstraints;
    NSMutableArray *_largeFontConstraints;
    NSMutableArray *_infoConstraints;
    NSLayoutConstraint *_iconSizeConstraint;
    NSLayoutConstraint *_sizeRightConstraint;
    NSLayoutConstraint *_minHeightConstraint;
    NSLayoutConstraint *_noCloudIconConstraint;
    NSLayoutConstraint *_cloudIconConstraint;
    UIImageView *_iconView;
    UIView *_titleInfoView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    UIImageView *_cloudIconView;
    long long _size;
    UIActivityIndicatorView *_spinner;
}

+ (double)defaultCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool cloudIconHidden;
- (void)setEnabled:(_Bool)arg1;
@property(nonatomic) long long size;
@property(retain, nonatomic) NSString *sizeString;
@property(nonatomic) _Bool infoHidden;
@property(retain, nonatomic) NSString *info;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)createLargeFontConstraints;
- (void)createNormalFontConstraints;
- (void)setupTitleAndInfoConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
