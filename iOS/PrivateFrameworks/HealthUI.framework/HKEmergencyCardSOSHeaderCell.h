//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKEmergencyCardSOSHeaderCell : UITableViewCell
{
    UILabel *_headerLabel;
}

@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;
- (void)_updateTextColor;
- (void)tintColorDidChange;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

