//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutManager, NSMutableArray, NSMutableSet, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont;

@interface SUICStreamingTextView : UIView
{
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
    _Bool _animatedInternal;
    _Bool _animated;
    UIFont *_font;
    double _hyphenationFactor;
    UIColor *_startTextColor;
    UIColor *_endTextColor;
    double _animationDuration;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIColor *endTextColor; // @synthesize endTextColor=_endTextColor;
@property(retain, nonatomic) UIColor *startTextColor; // @synthesize startTextColor=_startTextColor;
@property(nonatomic) double hyphenationFactor; // @synthesize hyphenationFactor=_hyphenationFactor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (id)_createGlyphImage:(struct CGRect)arg1 glyphRange:(struct _NSRange)arg2 layoutManager:(id)arg3;
- (id)_glyphImageForWord:(id)arg1 frame:(struct CGRect)arg2 glyphRange:(struct _NSRange)arg3 textColor:(id)arg4;
- (void)_resetState;
- (void)_animateWordOut:(id)arg1;
- (void)_animateWordIn:(id)arg1;
- (void)_animateLayers;
- (void)_layoutFrames;
- (void)_updateText:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateAnimatedInternal;
@property(readonly, nonatomic) NSString *text;
@property(copy, nonatomic) NSArray *words;
- (void)_sharedInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

