//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPTextViewStyle, UIFont;

__attribute__((visibility("hidden")))
@interface LPQuotedTextViewStyle
{
    _Bool _showQuoteIndicator;
    _Bool _showCharacterLimitIndicator;
    unsigned int _maximumLinesToConsiderShort;
    UIFont *_longPullQuoteFont;
    LPTextViewStyle *_characterLimitIndicatorStyle;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) LPTextViewStyle *characterLimitIndicatorStyle; // @synthesize characterLimitIndicatorStyle=_characterLimitIndicatorStyle;
@property(nonatomic) _Bool showCharacterLimitIndicator; // @synthesize showCharacterLimitIndicator=_showCharacterLimitIndicator;
@property(nonatomic) _Bool showQuoteIndicator; // @synthesize showQuoteIndicator=_showQuoteIndicator;
@property(nonatomic) unsigned int maximumLinesToConsiderShort; // @synthesize maximumLinesToConsiderShort=_maximumLinesToConsiderShort;
@property(retain, nonatomic) UIFont *longPullQuoteFont; // @synthesize longPullQuoteFont=_longPullQuoteFont;
- (id)adjustedForString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlatform:(long long)arg1 fontScalingFactor:(double)arg2;

@end

