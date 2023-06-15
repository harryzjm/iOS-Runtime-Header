//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface ASCEditorsChoiceView : UIView
{
    UIColor *_color;
    UILabel *_titleLabel;
}

+ (id)editorsChoiceFont;
+ (double)laurelPadding;
+ (id)editorsChoiceText;
+ (id)rightLaurel;
+ (id)leftLaurel;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

