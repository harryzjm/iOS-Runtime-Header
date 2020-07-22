//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIColor, CIVector;

__attribute__((visibility("hidden")))
@interface CISmoothLinearGradient
{
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(retain, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
- (id)outputImage;
- (id)_kernel;

@end

