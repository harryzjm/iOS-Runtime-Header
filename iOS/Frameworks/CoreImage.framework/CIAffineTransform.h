//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSValue;

__attribute__((visibility("hidden")))
@interface CIAffineTransform : CIFilter
{
    CIImage *inputImage;
    NSValue *inputTransform;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSValue *inputTransform; // @synthesize inputTransform;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;

@end

