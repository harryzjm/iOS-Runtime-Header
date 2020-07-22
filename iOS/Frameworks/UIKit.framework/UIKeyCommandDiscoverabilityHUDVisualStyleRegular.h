//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular
{
    UIColor *_titleColor;
    UIColor *_inputColor;
    UIColor *_dividerColor;
}

@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) UIColor *inputColor; // @synthesize inputColor=_inputColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;
- (double)minimumFontScaleBeforeTruncation;
- (double)summaryLineSpacing;
- (double)summaryLineHeight;
- (id)summaryFont;
- (double)summaryModifiersSpacing;
- (double)summaryDescriptionToModifiersSpacing;
- (double)summaryYPadding;
- (double)summaryXPadding;
- (double)columnDividerHeightForHUDHeight:(double)arg1;
- (double)columnDividerWidth;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)maxHUDWidthForWidth:(double)arg1;
- (double)HUDPageControlBottomMargin;
- (struct UIEdgeInsets)HUDViewInsets;
- (id)init;

@end
