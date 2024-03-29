//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCell.h"

@class UIPickerTableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewCell : UITableViewCell
{
    UITapGestureRecognizer *_tap;
    UIPickerTableView *pickerTable;
}

+ (id)_nonCenterCellDigitFont;
+ (id)_centerCellDigitFont;
+ (id)_nonCenterCellFont;
+ (id)_centerCellFont;
+ (void)_resetFontCacheForLegitbilityWeight:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) UIPickerTableView *pickerTable; // @synthesize pickerTable;
- (void)_tapAction:(id)arg1;
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

