//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UIAccessibilityLoader : NSObject
{
}

+ (_Bool)_accessibilityServerStarted;
+ (void)_accessibilityStopServer;
+ (_Bool)_accessibilityUIKitBundleLoaded;
+ (void)_accessibilityReenabled;
+ (void)_accessibilityLoadExtendedBundles;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityStartServer;
+ (void)_applicationAccessibilityListener:(id)arg1;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_stringLocalizationStarted:(id)arg1;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (void)__loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (id)_axBundleForBundle:(id)arg1;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (_Bool)_accessibilityShouldSortBundlesBeforeLoading;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)arg1;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(_Bool)arg3 loadSubbundles:(_Bool)arg4 loadAllAccessibilityInfo:(_Bool)arg5;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 force:(_Bool)arg3 loadAllAccessibilityInfo:(_Bool)arg4;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (void)initialize;

@end

