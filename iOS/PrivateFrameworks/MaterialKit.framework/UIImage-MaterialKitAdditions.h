//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (MaterialKitAdditions)
+ (id)mt_shadowTemplateImageWithAttributes:(CDStruct_437ca384)arg1 scale:(double)arg2 maskCornerRadius:(double)arg3 continuousCorners:(_Bool)arg4 maskSize:(struct CGSize)arg5 resizableCapInsets:(CDStruct_d2b197d1 *)arg6;
+ (struct UIEdgeInsets)mt_edgeOutsetsForShadowProperties:(CDStruct_437ca384)arg1 scale:(double)arg2;
+ (id)mt_resizableShadowTemplateImageWithAttributes:(CDStruct_437ca384)arg1 scale:(double)arg2 maskCornerRadius:(double)arg3 continuousCorners:(_Bool)arg4 maskSize:(struct CGSize)arg5;
- (id)mt_imageWithDefaultShadowAttributesForUserIntefaceStyle:(long long)arg1;
- (id)mt_imageWithDefaultShadowAttributesForUserInterfaceStyle:(long long)arg1;
- (id)_mt_imageWithShadowWithAttributes:(CDStruct_437ca384)arg1 userInterfaceStyle:(long long)arg2;
@end

