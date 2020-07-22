//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class LPGlyphStyle, LPPadding, LPPointUnit, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface LPTextViewStyle : NSObject <NSCopying>
{
    unsigned int _maximumLines;
    UIColor *_color;
    UIFont *_font;
    long long _textAlignment;
    LPPointUnit *_firstLineLeading;
    LPGlyphStyle *_leadingGlyph;
    LPPadding *_padding;
}

@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) LPGlyphStyle *leadingGlyph; // @synthesize leadingGlyph=_leadingGlyph;
@property(retain, nonatomic) LPPointUnit *firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) unsigned int maximumLines; // @synthesize maximumLines=_maximumLines;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

