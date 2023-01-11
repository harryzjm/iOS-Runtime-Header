//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIAssistantBarRoundedButtonViewButton
{
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_normalTitleColor;
    UIColor *_highlightedTitleColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *highlightedTitleColor; // @synthesize highlightedTitleColor=_highlightedTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
- (void)_updateBackgroundAndTitleColor;
- (id)_titleColorForState:(unsigned long long)arg1;
- (id)_currentTitleColor;
- (void)setHighlighted:(_Bool)arg1;

@end
