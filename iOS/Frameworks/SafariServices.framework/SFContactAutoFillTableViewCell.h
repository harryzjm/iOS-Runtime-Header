//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class SFContactAutoFillValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillTableViewCell : UITableViewCell
{
    SFContactAutoFillValue *_value;
    UIButton *_checkmarkButton;
    UILabel *_categoryLabel;
    UILabel *_optionLabel;
    _Bool _usesDetailAppearance;
    _Bool _checked;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) _Bool usesDetailAppearance; // @synthesize usesDetailAppearance=_usesDetailAppearance;
- (void)checkmarkButtonTapped:(id)arg1;
- (void)setValue:(id)arg1 property:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

