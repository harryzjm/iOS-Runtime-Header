//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKFillStyle, NSAttributedString, NSNumber, NSString, UIBezierPath, UIColor, UIFont, UIImage;
@protocol HKGraphRenderDelegate, HKGraphRendererExclusion;

@protocol HKGraphRenderer <NSObject>
@property(nonatomic) __weak id <HKGraphRenderDelegate> renderDelegate;
@property(nonatomic) struct CGRect axisRect;
- (void)setNeedsRender;
- (struct CGSize)drawAttributedText:(NSAttributedString *)arg1 atPoint:(struct CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 exclusion:(id <HKGraphRendererExclusion>)arg5;
- (struct CGSize)drawText:(NSString *)arg1 atPoint:(struct CGPoint)arg2 spaceAvailable:(NSNumber *)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 hyphenationFactor:(NSNumber *)arg6 textColor:(UIColor *)arg7 font:(UIFont *)arg8 clipToAxis:(_Bool)arg9 exclusion:(id <HKGraphRendererExclusion>)arg10;
- (void)fillRect:(struct CGRect)arg1 withFillStyle:(HKFillStyle *)arg2 axisRect:(struct CGRect)arg3 alpha:(double)arg4;
- (void)drawPath:(UIBezierPath *)arg1 strokeColor:(UIColor *)arg2 fillColor:(UIColor *)arg3 markerImage:(UIImage *)arg4 useGradientFill:(_Bool)arg5 blendMode:(int)arg6 clipToAxes:(_Bool)arg7;
@end

