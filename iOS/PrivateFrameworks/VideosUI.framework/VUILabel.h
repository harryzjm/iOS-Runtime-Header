//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/_TVLabel.h>

#import <VideosUI/VUILabelBaselineProtocol-Protocol.h>

@class NSString, UIColor, VUITextLayout;

@interface VUILabel : _TVLabel <VUILabelBaselineProtocol>
{
    _Bool _selected;
    _Bool _lastSelectedOrHighlighted;
    VUITextLayout *_textLayout;
    NSString *_labelName;
    UIColor *_adjustmentModeNormalTintColor;
}

+ (id)labelWithAttributedString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;
+ (id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *adjustmentModeNormalTintColor; // @synthesize adjustmentModeNormalTintColor=_adjustmentModeNormalTintColor;
@property(copy, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void)_updateCompositingFilter;
- (void)_updateTextColor:(_Bool)arg1;
- (void)_updateTextColor;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (double)bottomMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(id)arg2;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(id)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (void)revertTintColor;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)arg1;
- (_Bool)requiresMoreThanOneLineForTextWidth:(double)arg1;
- (double)baselineOffsetFromBottom;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)baselineHeight;
- (_Bool)vui_marqueeOnHighlight;
- (_Bool)vui_showOnHighlight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
