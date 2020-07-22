//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString, UILabel;

@interface SXUpNextButton : UIControl
{
    NSString *_title;
    NSString *_subtitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 animated:(_Bool)arg2;
- (void)updateConstraints;
- (void)updateFontScale;
- (void)preferredContentSizeCategoryDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

