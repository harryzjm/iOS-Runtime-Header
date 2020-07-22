//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class KNAnimatedBuild, KNAnimationContext, KNAnimationPluginMenu, NSArray, NSDictionary, NSString, TSDCapabilities;

@protocol KNAnimationPlugin <NSObject>
+ (NSString *)thumbnailImageNameForType:(long long)arg1;
+ (NSDictionary *)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(KNAnimationPluginMenu *)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (NSString *)localizedMenuString:(long long)arg1;
+ (NSArray *)supportedTypes;
+ (NSString *)animationFilter;
+ (long long)animationCategory;
+ (NSString *)animationName;
- (id)initWithAnimationContext:(KNAnimationContext *)arg1;

@optional
+ (long long)rendererTypeForCapabilities:(TSDCapabilities *)arg1;
+ (NSDictionary *)customEffectTimingCurveDisplayParametersForAttributes:(NSDictionary *)arg1 layoutStyleOnly:(_Bool)arg2;
+ (NSArray *)customAttributes;
- (NSDictionary *)animationInfoForAnimatedBuild:(KNAnimatedBuild *)arg1;
@end

