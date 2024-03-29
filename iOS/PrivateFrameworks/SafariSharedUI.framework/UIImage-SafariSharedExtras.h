//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (SafariSharedExtras)
+ (id)safari_imageWithSVGData:(id)arg1;
+ (id)safari_imageWithSize:(struct CGSize)arg1 flipped:(_Bool)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)safari_imageWithSize:(struct CGSize)arg1 actions:(CDUnknownBlockType)arg2;
- (double)safari_computeAverageLuminance;
- (id)safari_makeGrayscale;
- (_Bool)safari_isGrayscale;
@property(readonly, nonatomic) _Bool safari_transparencyAnalysisResultIsNotOpaque;
@property(nonatomic, setter=safari_setTransparencyAnalysisResult:) long long safari_transparencyAnalysisResult;
@property(readonly, nonatomic, getter=safari_isSVGImage) _Bool safari_svgImage;
@end

