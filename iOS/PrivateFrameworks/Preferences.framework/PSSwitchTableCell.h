//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView;

@interface PSSwitchTableCell
{
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setValue:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1 animated:(_Bool)arg2;
- (id)controlValue;
@property(nonatomic) _Bool loading;
- (void)setCellEnabled:(_Bool)arg1;
- (_Bool)canReload;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
