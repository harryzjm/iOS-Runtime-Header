//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UILabel;

@interface HKHeaderFooterView : UITableViewHeaderFooterView
{
    UILabel *_titleLabel;
    NSString *_titleText;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_titleLabelFont;
- (void)setupView;
- (id)initWithReuseIdentifier:(id)arg1;

@end
