//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface SFAccountDetailHeaderViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
    UIStackView *_labelStackView;
    UILabel *_domainLabel;
    UILabel *_lastModifiedDateLabel;
    NSString *_highLevelDomain;
}

- (void).cxx_destruct;
- (void)_hideMonogramIcon;
- (void)_showMonogramIconWithBackgroundColor:(id)arg1;
- (void)setLastModifiedDateString:(id)arg1;
- (void)setHighLevelDomain:(id)arg1;
- (void)setMonogramBackgroundColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

