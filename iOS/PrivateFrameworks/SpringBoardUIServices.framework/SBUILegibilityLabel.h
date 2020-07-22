//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/SBUILegibility-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UILabel, UILayoutGuide, _UILegibilitySettings, _UILegibilityView;

@interface SBUILegibilityLabel : UIView <SBUILegibility>
{
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    _Bool _isDirty;
    double _strength;
    long long _options;
    double _scale;
    NSArray *_legibilityConstraints;
    UILayoutGuide *_firstBaselineLayoutGuide;
    UILayoutGuide *_lastBaselineLayoutGuide;
    NSString *_string;
    UIFont *_font;
    NSAttributedString *_attributedText;
    UIColor *_textColorOverride;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _isWaitingToMoveToWindow;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)_updateLegibilityView;
- (_Bool)_needsColorImage;
- (void)_updateLabelForLegibilitySettings;
- (double)_layoutGuideOffsetFromBottom:(id)arg1;
- (void)_markOurselfDirty;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)didMoveToWindow;
@property(nonatomic) _Bool useColorFilters; // @dynamic useColorFilters;
@property(readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property(readonly, nonatomic) double firstBaselineOffsetFromBottom;
@property(readonly, nonatomic) struct UIEdgeInsets characterOverflowInsets;
- (void)setOptions:(long long)arg1;
@property(readonly, nonatomic) double baselineOffset;
@property(nonatomic) long long lineBreakMode; // @dynamic lineBreakMode;
@property(nonatomic) long long textAlignment; // @dynamic textAlignment;
@property(nonatomic) double minimumScaleFactor; // @dynamic minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @dynamic adjustsFontSizeToFitWidth;
@property(nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property(copy, nonatomic) UIColor *textColor;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

