//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFont.h>

@interface UIFont (FocusUIAdditions)
+ (double)fcui_exuberatedValueForValue:(double)arg1;
+ (id)fcui_excessiveLineHeightChars;
- (double)fcui_drawingHeightForText:(id)arg1 withNumberOfLines:(unsigned long long)arg2 additionalPadding:(double)arg3;
- (double)fcui_measuringHeightForText:(id)arg1 withNumberOfLines:(unsigned long long)arg2;
- (unsigned long long)fcui_numberOfLinesForText:(id)arg1 inFrame:(struct CGRect)arg2 maximum:(unsigned long long)arg3 drawingContext:(inout id)arg4;
- (double)fcui_effectiveLineHeightForText:(id)arg1;
- (double)fcui_effectiveScaledValueForValue:(double)arg1 hasExuberatedLineHeight:(_Bool)arg2;
- (_Bool)fcui_hasExuberatedLineHeightForText:(id)arg1;
@property(readonly, nonatomic) _Bool fcui_hasExuberatedLineHeight;
@end

