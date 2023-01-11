//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge
{
    _Bool _selected;
    UILabel *_badgeTextLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) UIFont *font;
- (void)layoutSubviews;
- (void)_sizeToFit;
- (double)minHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
