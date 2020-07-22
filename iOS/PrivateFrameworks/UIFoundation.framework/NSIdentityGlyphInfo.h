//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSFont;

@interface NSIdentityGlyphInfo <NSSecureCoding>
{
    NSFont *_font;
    unsigned int _glyph;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyph;
- (unsigned int)_glyph;
- (id)_font;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (void)dealloc;
- (id)initWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;

@end

