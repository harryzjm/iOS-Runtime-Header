//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeChannel : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputChannel;
    NSNumber *inputParam1;
    NSNumber *inputParam2;
    NSNumber *inputParam3;
    NSNumber *inputParam4;
}

- (id)parameterNamesForChannel:(int)arg1;
- (id)filterNameForChannel:(int)arg1;
- (id)outputImage;

@end

