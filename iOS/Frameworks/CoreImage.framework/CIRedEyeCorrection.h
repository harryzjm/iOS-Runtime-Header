//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIRedEyeCorrection : CIFilter
{
    CIImage *inputImage;
    NSString *inputCameraModel;
    NSDictionary *inputCorrectionInfo;
}

@property(copy, nonatomic) NSDictionary *inputCorrectionInfo; // @synthesize inputCorrectionInfo;
@property(copy, nonatomic) NSString *inputCameraModel; // @synthesize inputCameraModel;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;
- (void)setDefaults;

@end

