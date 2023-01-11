//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/_TVLabel.h>

@class VUITextLayout;

@interface VUILabel : _TVLabel
{
    _Bool _selected;
    _Bool _lastSelectedOrHighlighted;
    VUITextLayout *_textLayout;
}

+ (unsigned long long)_numberOfLinesForTraitCollection:(id)arg1 textLayout:(id)arg2;
+ (id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void).cxx_destruct;
- (void)_updateTextColor:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)baselineHeight;

@end

