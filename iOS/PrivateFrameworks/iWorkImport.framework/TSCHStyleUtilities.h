//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHStyleUtilities : NSObject
{
}

+ (void)breakUpFontName:(id)arg1 isBold:(_Bool *)arg2 isItalic:(_Bool *)arg3;
+ (id)stylesheetOfStyles:(id)arg1 nilAllowed:(_Bool)arg2;
+ (id)trendlineColorFromCGColor:(struct CGColor *)arg1;
+ (void)p_adjustTrendlineSaturation:(double *)arg1 brightness:(double *)arg2;
+ (void)convertToSimpleTSDFillsInProperties:(id)arg1 inMap:(id)arg2 context:(id)arg3;
+ (void)upgradeAlignmentInParagraphStyles:(id)arg1 willModifyBlock:(CDUnknownBlockType)arg2;
+ (void)updateStyleState:(id)arg1 forPropertyMutationTuples:(id)arg2;
+ (void)updateStyleState:(id)arg1 forMutationsPerStyleOwner:(id)arg2;
+ (id)chartsNullShadowToDefaultDisabledShadow:(id)arg1;
+ (id)shadowToChartsNullShadow:(id)arg1;
+ (id)nullShadow;
+ (_Bool)hasShadow:(id)arg1;
+ (id)upgradedShadowPropertyForParagraphStyle:(id)arg1;
+ (_Bool)upgradeShadowProperties:(id)arg1 inMap:(id)arg2;
+ (_Bool)upgradedShadowPropertyFromShadow:(id)arg1 outUpgraded:(id *)arg2;
+ (_Bool)p_hasShadow:(id)arg1;
+ (id)nullFill;
+ (_Bool)isNullFill:(id)arg1;
+ (_Bool)hasNoFill:(id)arg1;
+ (id)fullyPopulatedStylesFromArray:(id)arg1 context:(id)arg2 styleClass:(Class)arg3;
+ (id)fullyPopulatedStyleFromStyle:(id)arg1 context:(id)arg2;

@end
