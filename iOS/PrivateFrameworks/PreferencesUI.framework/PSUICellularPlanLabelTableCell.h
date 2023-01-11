//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class PSUIBadgeView, UILabel;

@interface PSUICellularPlanLabelTableCell : PSTableCell
{
    PSUIBadgeView *_badgeView;
    UILabel *_nameLabel;
}

+ (id)spacerIcon;
+ (id)checkIcon;
+ (long long)cellStyle;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) PSUIBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canBeChecked;
- (_Bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

