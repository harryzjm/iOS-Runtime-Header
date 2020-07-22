//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIBilateralFilter : CIFilter
{
    CIImage *_inputImage;
    NSNumber *_inputRadius;
    NSNumber *_inputEdgeDetail;
}

+ (id)customAttributes;
@property(retain) NSNumber *inputEdgeDetail; // @synthesize inputEdgeDetail=_inputEdgeDetail;
@property(retain) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;

@end
