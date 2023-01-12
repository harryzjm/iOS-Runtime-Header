//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStarShineGenerator : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputRadius;
    NSNumber *inputCrossScale;
    NSNumber *inputCrossAngle;
    NSNumber *inputCrossOpacity;
    NSNumber *inputCrossWidth;
    NSNumber *inputEpsilon;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputCrossOpacity; // @synthesize inputCrossOpacity;
@property(retain, nonatomic) NSNumber *inputCrossWidth; // @synthesize inputCrossWidth;
@property(retain, nonatomic) NSNumber *inputCrossScale; // @synthesize inputCrossScale;
@property(retain, nonatomic) NSNumber *inputCrossAngle; // @synthesize inputCrossAngle;
@property(retain, nonatomic) NSNumber *inputEpsilon; // @synthesize inputEpsilon;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
- (id)outputImage;
- (id)_kernel;

@end

