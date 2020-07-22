//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIPerspectiveTransformWithExtent
{
    CIImage *inputImage;
    CIVector *inputExtent;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property(retain, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property(retain, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;
@property(retain, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

