//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface DOCVisualEffectLabel : UIVisualEffectView
{
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @dynamic adjustsFontForContentSizeCategory;
@property(nonatomic) long long lineBreakMode; // @dynamic lineBreakMode;
@property(copy, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)initWithEffect:(id)arg1;

@end
