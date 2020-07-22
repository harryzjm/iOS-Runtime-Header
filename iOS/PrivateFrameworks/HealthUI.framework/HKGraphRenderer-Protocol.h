//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class NSNumber, NSString, UIBezierPath, UIColor, UIFont, UIImage;
@protocol HKGraphRenderDelegate, HKGraphRendererExclusion;

@protocol HKGraphRenderer <NSObject>
@property(nonatomic) __weak id <HKGraphRenderDelegate> renderDelegate;
@property(nonatomic) struct CGRect axisRect;
- (void)setNeedsRender;
- (struct CGSize)drawText:(NSString *)arg1 atPoint:(struct CGPoint)arg2 spaceAvailable:(NSNumber *)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 textColor:(UIColor *)arg6 font:(UIFont *)arg7 clipToAxis:(_Bool)arg8 exclusion:(id <HKGraphRendererExclusion>)arg9;
- (void)fillRect:(struct CGRect)arg1 withTexture:(UIImage *)arg2;
- (void)drawPath:(UIBezierPath *)arg1 strokeColor:(UIColor *)arg2 fillColor:(UIColor *)arg3 markerImage:(UIImage *)arg4 useGradientFill:(_Bool)arg5 blendMode:(int)arg6 clipToAxes:(_Bool)arg7;
@end
