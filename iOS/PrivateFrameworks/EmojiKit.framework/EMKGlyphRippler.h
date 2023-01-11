//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EMKGlyphRippler : NSObject
{
    NSArray *_colors;
    NSArray *_darkModeColors;
    NSArray *_shadowColors;
    NSArray *_darkModeShadowColors;
    NSArray *_scales;
    NSArray *_offsets;
    double _startTime;
    unsigned long long _preFrames;
    unsigned long long _animateFrames;
    unsigned long long _postFrames;
    unsigned long long _delayFrames;
    _Bool _reduceMotion;
    _Bool _darkMode;
}

- (void).cxx_destruct;
- (void)setDelayFrames:(unsigned long long)arg1;
- (void)setPostFrames:(unsigned long long)arg1;
- (void)setPreFrames:(unsigned long long)arg1;
- (_Bool)finishedForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (struct CGSize)currentOffsetForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (unsigned long long)currentIndexForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 isFinished:(_Bool *)arg4;
- (unsigned long long)currentTimeIndex;
- (id)init;
- (void)start;
- (void)startWithDarkMode:(_Bool)arg1;
- (void)generateValues;

@end
