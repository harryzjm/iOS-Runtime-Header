//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIKMeans
{
    CIImage *inputMeans;
    NSNumber *inputCount;
    NSNumber *inputPasses;
    NSNumber *inputPerceptual;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputPerceptual; // @synthesize inputPerceptual;
@property(retain, nonatomic) CIImage *inputMeans; // @synthesize inputMeans;
@property(copy, nonatomic) NSNumber *inputPasses; // @synthesize inputPasses;
@property(copy, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
- (id)outputImage;
- (id)_kernelKmeans;
- (id)_combine:(id)arg1;

@end
