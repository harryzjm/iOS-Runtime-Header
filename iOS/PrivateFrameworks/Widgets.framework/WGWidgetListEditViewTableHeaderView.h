//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView
{
    UILabel *_headlineLabel;
    UILabel *_explanationLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_explanationLabelFrameForBoundsWidth:(double)arg1 withHeadlineLabelFrame:(struct CGRect)arg2;
- (struct CGRect)_headlineLabelFrameForBoundsWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double contentMinY;
- (id)initWithReuseIdentifier:(id)arg1;

@end

