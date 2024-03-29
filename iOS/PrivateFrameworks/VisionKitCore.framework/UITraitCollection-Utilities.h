//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITraitCollection.h>

@interface UITraitCollection (Utilities)
+ (id)appearanceClassForType:(long long)arg1;
- (void)vk_performAsCurrent:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool vk_shouldUseLargeButtons;
@property(readonly, nonatomic) double vk_contentSizeScaleFactor;
- (id)vk_traitCollectionWithContentSize:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *vk_traitCollectionClampedToNonaccessibilityContentSize;
- (_Bool)vk_hasEqualSizeToTraitCollection:(id)arg1;
@property(readonly, nonatomic) _Bool vk_isRTL;
@property(readonly, nonatomic) _Bool vk_isDark;
@property(readonly, nonatomic) _Bool vk_isOptimizedForMac;
@property(readonly, nonatomic) _Bool vk_hasCompactWidth;
@property(readonly, nonatomic) _Bool vk_hasCompactHeight;
@property(readonly, nonatomic) _Bool vk_hasCompactSize;
@end

