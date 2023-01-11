//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFTriggerConfigurationHeaderCell : UITableViewCell
{
    Class _triggerTypeClass;
    UIImageView *_triggerIconView;
    UILabel *_triggerTitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *triggerTitleLabel; // @synthesize triggerTitleLabel=_triggerTitleLabel;
@property(readonly, nonatomic) UIImageView *triggerIconView; // @synthesize triggerIconView=_triggerIconView;
@property(retain, nonatomic) Class triggerTypeClass; // @synthesize triggerTypeClass=_triggerTypeClass;
- (void)updateUI;
- (void)configureWithImage:(id)arg1 title:(id)arg2 numberOfLines:(long long)arg3;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
