//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSLayoutManager.h>

@class EMKGlyphRippler, EMKTextEnumerator, NSArray, NSMutableAttributedString, NSMutableData, UIColor;

@interface EMKLayoutManager : NSLayoutManager
{
    NSMutableAttributedString *_attributes;
    EMKGlyphRippler *_rippler;
    UIColor *_currentColor;
    double _currentScale;
    struct CGSize _currentOffset;
    UIColor *_currentShadowColor;
    NSArray *_emojiConversionLanguages;
    EMKTextEnumerator *_enumerator;
    NSMutableData *_glyphIndexTable;
    _Bool _emojiConversionEnabled;
    _Bool _emojiConversionActive;
}

- (void).cxx_destruct;
- (void)setDelayFrames:(unsigned long long)arg1;
- (void)setPostFrames:(unsigned long long)arg1;
- (void)setPreFrames:(unsigned long long)arg1;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawAttributedGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (id)attributes;
- (void)setEmojiConversionLanguages:(id)arg1;
- (id)emojiConversionLanguages;
- (void)setEmojiConversionActive:(_Bool)arg1;
- (_Bool)isEmojiConversionActive;
@property(getter=isEmojiConversionEnabled) _Bool emojiConversionEnabled;
- (_Bool)isEmojiAnimationActive;
- (void)startOrStopTimer;
- (_Bool)convertGlyphIndex:(unsigned long long)arg1 toAttributeRelativeGlyphIndex:(unsigned long long *)arg2 numberOfAttributedGlyphs:(unsigned long long *)arg3;
- (void)flushGlyphIndexTable;
- (id)init;

@end

