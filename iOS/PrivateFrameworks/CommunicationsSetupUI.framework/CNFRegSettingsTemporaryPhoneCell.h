//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell
{
    UILabel *_phoneNumberLabel;
    UILabel *_expirationLabel;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *expirationLabel; // @synthesize expirationLabel=_expirationLabel;
@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
- (unsigned long long)daysUntilExpiration:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

