//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface BLPerceptualBlendFilter : CIFilter
{
    CIImage *_inputImage;
    CIImage *_inputBackgroundImage;
    CIImage *_inputMaskImage;
}

@property(retain) CIImage *inputMaskImage; // @synthesize inputMaskImage=_inputMaskImage;
@property(retain) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage=_inputBackgroundImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;

@end
