//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIImageView, UILabel;

@interface PSStorageItemCell
{
    NSMutableArray *_constraints;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    long long _size;
}

+ (id)specifierForItemURL:(id)arg1;
- (void).cxx_destruct;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

