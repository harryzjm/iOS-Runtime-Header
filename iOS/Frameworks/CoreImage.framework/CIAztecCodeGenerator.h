//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CIAztecCodeGenerator
{
    NSNumber *inputCorrectionLevel;
    NSNumber *inputLayers;
    NSNumber *inputCompactStyle;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputCompactStyle; // @synthesize inputCompactStyle;
@property(copy, nonatomic) NSNumber *inputLayers; // @synthesize inputLayers;
@property(copy, nonatomic) NSNumber *inputCorrectionLevel; // @synthesize inputCorrectionLevel;
- (struct CGImage *)outputCGImage;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
