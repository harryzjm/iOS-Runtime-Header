//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface MCInstallationWarningCell : UITableViewCell
{
    UILabel *_warningLabel;
    NSArray *_constraints;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

