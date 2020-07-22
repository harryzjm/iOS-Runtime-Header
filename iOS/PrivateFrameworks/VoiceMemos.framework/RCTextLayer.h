//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSString, UIColor, UIFont;

@interface RCTextLayer : CALayer
{
    struct CGSize _cachedSize;
    unsigned long long _cachedSizeHash;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _preferredAlignment;
    long long _textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long preferredAlignment; // @synthesize preferredAlignment=_preferredAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)textRectWithAlignment:(long long)arg1 inLayoutBounds:(struct CGRect)arg2;
- (struct CGSize)_displaySize;
- (void)sizeToFit;
- (id)_attributes;
- (id)init;

@end

