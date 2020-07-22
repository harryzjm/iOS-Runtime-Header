//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface TPNumberPadKey : UIView
{
    UILabel *_digit;
    UILabel *_letters;
    UILabel *_secondaryLetters;
    NSLayoutConstraint *_digitBaseline;
    NSLayoutConstraint *_letterBaseline;
    NSLayoutConstraint *_secondaryLetterBaseline;
}

+ (float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3;
+ (void)initialize;
@property(retain, nonatomic) NSLayoutConstraint *secondaryLetterBaseline; // @synthesize secondaryLetterBaseline=_secondaryLetterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *letterBaseline; // @synthesize letterBaseline=_letterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *digitBaseline; // @synthesize digitBaseline=_digitBaseline;
@property(retain, nonatomic) UILabel *secondaryLetters; // @synthesize secondaryLetters=_secondaryLetters;
@property(retain, nonatomic) UILabel *letters; // @synthesize letters=_letters;
@property(retain, nonatomic) UILabel *digit; // @synthesize digit=_digit;
- (void).cxx_destruct;
- (void)doLayoutNow;
- (void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3;
- (void)setFontStylesForHighlightState:(_Bool)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(_Bool)arg3 shouldCenterDigit:(_Bool)arg4 fontColor:(_Bool)arg5 circleDiameter:(double)arg6;
@property(readonly, nonatomic, getter=isPound) _Bool pound;
@property(readonly, nonatomic, getter=isAsterisk) _Bool asterisk;
- (id)initWithFrame:(struct CGRect)arg1;

@end
