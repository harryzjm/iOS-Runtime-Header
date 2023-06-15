//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _EMKGlyphRenderingAttributes : NSObject
{
    UIColor *_color;
    UIColor *_shadowColor;
    double _scale;
}

- (void).cxx_destruct;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithValuesFromRippler:(id)arg1 timeIndex:(unsigned long long)arg2 glyphIndex:(unsigned long long)arg3 numberOfGlyphs:(unsigned long long)arg4;
- (id)initWithColor:(id)arg1 shadowColor:(id)arg2 scale:(double)arg3;
- (id)shadowIfNeededForFontPointSize:(double)arg1;
- (void)_applyInContext:(struct CGContext *)arg1 fontPointSize:(double)arg2;

@end

