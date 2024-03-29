//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface VUISeparatorView
{
    UIColor *_color;
    UIColor *_darkColor;
    double _lineHeight;
    UIView *_line;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)_updateLineColor;
- (void)vui_traitCollectionDidChange:(id)arg1;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (id)lineColor;
- (void)initializeVUISeparatorView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

