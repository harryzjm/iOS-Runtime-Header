//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MTColor : NSObject
{
    struct CGColor *_cachedColor;
}

+ (id)colorWithDescription:(id)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)pinkColor;
+ (id)blackColor;
+ (id)whiteColor;
- (id)_rgbColor;
- (struct CAColorMatrix)sourceOverColorMatrix;
- (id)colorBlendedWithColor:(id)arg1;
- (id)colorWithAdditionalAlphaComponent:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)colorDescription;
- (struct CGColor *)CGColor;
- (void)dealloc;
- (id)_initWithDescription:(id)arg1;
- (id)_initWithCGColor:(struct CGColor *)arg1;

@end
