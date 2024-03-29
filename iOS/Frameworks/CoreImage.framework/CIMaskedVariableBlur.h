//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMaskedVariableBlur : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMask;
    NSNumber *inputRadius;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputMask; // @synthesize inputMask;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)upCubic:(id)arg1 scale:(float)arg2;
- (id)downTwo:(id)arg1;
- (id)_kernelCombine;
- (id)_kernelD2;
- (_Bool)_isIdentity;

@end

