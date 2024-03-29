//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDictionary, NSMutableDictionary, NSString, UIColor, UILabel, _UIBadgeVisualStyle;

__attribute__((visibility("hidden")))
@interface _UIBadgeView : UIView
{
    UILabel *_label;
    NSMutableDictionary *_mergedTextAttributes;
    NSString *_text;
    NSDictionary *_textAttributes;
    UIColor *_badgeColor;
    _UIBadgeVisualStyle *_style;
    struct UIOffset _textOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIBadgeVisualStyle *style; // @synthesize style=_style;
@property(nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;
@property(copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (void)_applyTextToLabel;
- (void)_setUpLabelIfNecessary;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithText:(id)arg1;

@end

