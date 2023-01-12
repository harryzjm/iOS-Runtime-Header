//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class CAFilter, CLKDevice, NSArray, UIColor, UIView;

@protocol CLKMonochromeFilterProvider <NSObject>
- (UIColor *)colorForView:(UIView *)arg1 accented:(_Bool)arg2;
- (CAFilter *)filterForView:(UIView *)arg1 style:(long long)arg2 fraction:(double)arg3;
- (CAFilter *)filterForView:(UIView *)arg1 style:(long long)arg2;
- (NSArray *)filtersForView:(UIView *)arg1 style:(long long)arg2 fraction:(double)arg3;
- (NSArray *)filtersForView:(UIView *)arg1 style:(long long)arg2;

@optional
- (CLKDevice *)device;
- (_Bool)viewShouldIgnoreTwoPieceImage:(UIView *)arg1;
- (UIColor *)interpolatedColorForView:(UIView *)arg1;
@end

