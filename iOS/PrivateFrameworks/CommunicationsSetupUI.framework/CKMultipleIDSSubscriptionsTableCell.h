//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKMultipleIDSSubscriptionsTableCell : PSTableCell
{
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_centeredNameLabel;
}

+ (long long)cellStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *centeredNameLabel; // @synthesize centeredNameLabel=_centeredNameLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canBeChecked;
- (_Bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

