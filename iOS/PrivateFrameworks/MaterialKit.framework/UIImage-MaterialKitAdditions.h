//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (MaterialKitAdditions)
+ (_Bool)mt_shouldIgnoreContinuousCurveSizeFactorWithMaskCornerRadius:(double)arg1 boundsSize:(struct CGSize)arg2;
+ (id)mt_shadowTemplateImageWithAttributes:(CDStruct_b48b9fb5)arg1 maskCornerRadius:(double)arg2 ignoreContinuousCurveSizeFactor:(_Bool)arg3 resizableCapInsets:(CDStruct_d2b197d1 *)arg4;
+ (struct UIEdgeInsets)mt_edgeOutsetsForShadowProperties:(CDStruct_b48b9fb5)arg1;
+ (id)mt_resizableShadowTemplateImageWithAttributes:(CDStruct_b48b9fb5)arg1 maskCornerRadius:(double)arg2 ignoreContinuousCurveSizeFactor:(_Bool)arg3;
- (id)mt_imageWithDefaultShadowAttributesForUserIntefaceStyle:(long long)arg1;
- (id)_mt_imageWithShadowWithAttributes:(CDStruct_b48b9fb5)arg1 userIntefaceStyle:(long long)arg2;
@end
