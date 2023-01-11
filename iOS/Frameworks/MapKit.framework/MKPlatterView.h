//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKVibrantView, NSString, UIColor, UIFont, UIImageView;

@interface MKPlatterView : UIView
{
    UIImageView *_glyphImageView;
    MKVibrantView *_platterView;
    _Bool _highlighted;
    NSString *_glyph;
    UIFont *_glyphFont;
    UIColor *_glyphColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(retain, nonatomic) UIFont *glyphFont; // @synthesize glyphFont=_glyphFont;
@property(retain, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)infoCardThemeChanged;
- (void)updateGlyph;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
