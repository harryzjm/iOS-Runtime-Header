//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, PSStorageProgressView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PSStorageTipCell
{
    NSMutableArray *_constraints;
    UIImageView *_appIconView;
    UILabel *_titleLabel;
    UIImageView *_checkIconView;
    UIButton *_enableButton;
    UIActivityIndicatorView *_spinner;
    UILabel *_progressLabel;
    PSStorageProgressView *_progressView;
    _Bool _isOption;
    float _percent;
    NSString *_hformat;
    double _titleWidth;
    double _enableWidth;
    double _progressWidth;
    float _prevPercent;
}

- (void).cxx_destruct;
- (void)_activateOption;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

