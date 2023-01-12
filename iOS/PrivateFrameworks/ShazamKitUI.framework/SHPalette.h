//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHPalette : NSObject
{
}

+ (struct CGColor *)sh_colorNamed:(id)arg1;
+ (id)default;
+ (double)contentsScale;
- (struct CGColor *)R:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (struct CGColor *)shadowColor;
- (struct CGColor *)alternateTintColor;
- (struct CGColor *)blackColor;
- (struct CGColor *)clearColor;
- (struct CGColor *)appTintColor;
- (struct CGColor *)listeningCircleColor;
- (struct CGColor *)listeningButtonBackgroundTransparentColor;
- (struct CGColor *)listeningButtonShazamShapeColor;
- (struct CGColor *)listeningButtonTopBorderColor;
- (struct CGColor *)listeningButtonBackgroundColor;
- (struct CGColor *)shazamColorNearBlack;

@end

