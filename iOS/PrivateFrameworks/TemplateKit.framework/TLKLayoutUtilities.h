//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TLKLayoutUtilities : NSObject
{
}

+ (id)controlsInView:(id)arg1;
+ (void)applyMinimumSizeTouchInsetsForControlsInView:(id)arg1;
+ (double)contentHeightOfTableView:(id)arg1 forWidth:(double)arg2 maxHeight:(double)arg3;
+ (_Bool)isSuperLargeAccessibilitySize;
+ (struct CGSize)minimumButtonSize;
+ (struct CGSize)maxThumbnailSizeIsCompactWidth:(_Bool)arg1;
+ (struct CGSize)maxThumbnailSize;
+ (void)applyRowBoundedSizingToImageView:(id)arg1 isCompactWidth:(_Bool)arg2;
+ (_Bool)isWideScreen;
+ (_Bool)widthIsCompact:(double)arg1;
+ (struct CGSize)idealImageSizeWithSize:(struct CGSize)arg1 fittingSize:(struct CGSize)arg2;
+ (void)setDynamicBaselineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (double)deviceScaledFlooredValue:(double)arg1;
+ (struct UIEdgeInsets)deviceScaledRoundedInsets:(struct UIEdgeInsets)arg1;
+ (struct CGRect)deviceScaledRoundedRect:(struct CGRect)arg1;
+ (double)deviceScaledRoundedValue:(double)arg1;
+ (double)roundedValue:(double)arg1 inView:(id)arg2;
+ (double)flooredValue:(double)arg1 inView:(id)arg2;
+ (double)ceilingValue:(double)arg1 inView:(id)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1;

@end
