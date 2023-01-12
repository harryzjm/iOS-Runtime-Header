//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class NSAttributedString, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAttributedTextImageGenerator : CIFilter
{
    NSAttributedString *inputText;
    NSNumber *inputScaleFactor;
    NSNumber *inputPadding;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputPadding; // @synthesize inputPadding;
@property(retain, nonatomic) NSNumber *inputScaleFactor; // @synthesize inputScaleFactor;
@property(retain, nonatomic) NSAttributedString *inputText; // @synthesize inputText;
- (id)outputImage;

@end

