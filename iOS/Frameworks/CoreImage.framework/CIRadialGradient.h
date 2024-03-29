//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRadialGradient : CIFilter
{
    CIVector *inputCenter;
    NSNumber *inputRadius0;
    NSNumber *inputRadius1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) NSNumber *inputRadius1; // @synthesize inputRadius1;
@property(retain, nonatomic) NSNumber *inputRadius0; // @synthesize inputRadius0;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
- (id)outputImage;
- (id)_kernel;

@end

