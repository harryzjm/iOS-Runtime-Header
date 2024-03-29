//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIColor.h>

@interface UIColor (StocksUI)
+ (double)colorComponentLuminance:(double)arg1;
- (double)relativeLuminance;
@property(nonatomic, readonly) double defaultBrightnessAdjustment;
- (id)stocksAccessibilityAdjustedForIncreaseContrastAgainstWithBackgroundColor:(id)arg1;
- (id)stocksAccessibilityAdjustedForIncreaseContrastAdjustingDarker:(_Bool)arg1;
- (id)stocksAccessibilityAdjustedDarkerForIncreaseContrast;
- (id)stocksAccessibilityAdjustedLighterForIncreaseContrast;
- (id)stocksAccessibilityAdjustedForIncreaseContrast;
@end

