//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeynoteQuicklook/KNAnimationPluginAlternateArchiving-Protocol.h>
#import <KeynoteQuicklook/KNAnimationPluginArchiving-Protocol.h>
#import <KeynoteQuicklook/KNAnimationPluginObsoleteNames-Protocol.h>

@class NSString;

@interface KNBuildAppearByCharacter <KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames, KNAnimationPluginAlternateArchiving>
{
}

+ (id)localizedAnimationStringForUpgradeWarning:(long long)arg1;
+ (_Bool)shouldWarnOnUpgradeWithOldAnimationName:(id)arg1 version:(unsigned long long)arg2;
+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 oldAnimationName:(id)arg3 warning:(id *)arg4 type:(long long)arg5 isFromClassic:(_Bool)arg6 version:(unsigned long long)arg7;
+ (unsigned long long)p_textDeliveryOptionWithDirection:(unsigned long long)arg1 type:(long long)arg2 isClassic:(_Bool)arg3;
+ (unsigned long long)p_legacyDirectionWithDirection:(unsigned long long)arg1 type:(long long)arg2;
+ (id)obsoleteAnimationNames;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (id)animationFilter;
+ (id)animationName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
