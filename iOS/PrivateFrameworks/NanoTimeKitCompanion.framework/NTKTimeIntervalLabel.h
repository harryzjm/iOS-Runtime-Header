//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKDevice, CLKFont, NSMutableArray, NSMutableDictionary, NSString, UIColor, UILabel;

@interface NTKTimeIntervalLabel : UIView
{
    CLKDevice *_device;
    double _time;
    double _currentTextTime;
    _Bool _showSubSeconds;
    long long _style;
    UILabel *_label;
    UILabel *_suffix;
    UILabel *_prefix;
    NSString *_text;
    NSMutableArray *_digits;
    NSMutableDictionary *_images;
    double _staticLabelWidth;
    double _digitWidth;
    struct CGSize _textSize;
    _Bool _isShowingDigits;
    _Bool _labelWasSized;
    _Bool _isSigned;
    _Bool _suffixSmallCaps;
    _Bool _frozen;
    CLKFont *_font;
    CDUnknownBlockType _didResizeHandler;
}

@property(copy, nonatomic) CDUnknownBlockType didResizeHandler; // @synthesize didResizeHandler=_didResizeHandler;
@property(readonly, nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(readonly, nonatomic) _Bool showSubSeconds; // @synthesize showSubSeconds=_showSubSeconds;
@property(retain, nonatomic) CLKFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool suffixSmallCaps; // @synthesize suffixSmallCaps=_suffixSmallCaps;
@property(nonatomic) double time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)_cachedImageForDigit:(unsigned long long)arg1;
- (void)_invalidateDigitImages;
@property(retain, nonatomic) UIColor *textColor;
- (void)setLabelText:(id)arg1;
- (void)recalculateSize;
- (void)sizeToFitLabelIfNeeded;
- (void)forceTime:(double)arg1;
@property(copy, nonatomic) NSString *prefix;
@property(copy, nonatomic) NSString *suffix;
- (_Bool)shouldShowDigits;
- (id)formatTimeInterval;
- (id)getTimeText;
- (void)_localeChanged;
- (void)layoutSubviews;
- (double)_labelWidth;
- (void)createDigitViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double actualWidth;
- (void)calculateMetrics;
- (id)_localImageForDigit:(unsigned long long)arg1;
- (id)initWithMonospacedFontOfSize:(double)arg1 forDevice:(id)arg2;
- (id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3 forDevice:(id)arg4;
- (void)dealloc;
- (id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 style:(long long)arg3 signed:(_Bool)arg4 forDevice:(id)arg5;

@end

