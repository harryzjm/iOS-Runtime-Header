//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheatBlur
{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CICross4;
- (id)_CIBox6;
- (id)_CIBox4;

@end
