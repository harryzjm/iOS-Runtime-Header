//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface SUTableHeaderView : UIView
{
    UIColor *_bottomBorderColor;
    struct UIEdgeInsets _edgeInsets;
    long long _index;
    long long _style;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *subtitleFont;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) UIColor *shadowColor;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

