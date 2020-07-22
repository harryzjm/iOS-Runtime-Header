//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarSignalStrengthItemView
{
    int _signalStrengthRaw;
    int _signalStrengthBars;
    _Bool _enableRSSI;
    _Bool _showRSSI;
}

- (id)accessibilityHUDRepresentation;
- (id)_stringForRSSI;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)contentsImage;
- (id)_signalStrengthBarsImageName;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

