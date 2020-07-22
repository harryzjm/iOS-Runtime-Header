//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface HKTableViewHeaderFooterView : UIView
{
    UILabel *_label;
    double _preferredMaxLayoutWidth;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateFont;
- (void)layoutSubviews;
- (id)init;

@end
