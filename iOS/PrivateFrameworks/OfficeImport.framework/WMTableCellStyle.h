//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WMTableCellStyle
{
    double mLeftPadding;
    double mRightPadding;
}

+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;
+ (id)dominantColorOf:(id)arg1;
- (double)rightPadding;
- (double)leftPadding;
- (void)addTableCellProperties:(id)arg1;
- (void)addTableCellStyleProperties:(id)arg1;
- (id)initWithTableCellProperties:(id)arg1;

@end
