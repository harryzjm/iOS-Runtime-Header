//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionViewCollectionViewCell
{
    UIButton *_button;
    double _rightMargin;
    _Bool _rightMarginAdjusted;
    id _tapTarget;
    SEL _tapAction;
}

- (void).cxx_destruct;
@property(readonly) UIButton *button; // @synthesize button=_button;
@property(readonly) UILabel *label;
@property(nonatomic) double rightMargin;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
