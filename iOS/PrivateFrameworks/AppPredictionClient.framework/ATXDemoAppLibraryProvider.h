//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATXDemoAppLibraryProvider : NSObject
{
}

+ (id)demoAppCategoriesForRealAppCategories:(id)arg1;
+ (id)_categoryForIndex:(long long)arg1 inDefaults:(id)arg2 realCategories:(id)arg3;
+ (void)_registerDefaultsForAppCategories:(id)arg1;
+ (_Bool)isAppCategoryDemoModeEnabled;
+ (id)demoSuggestionsAndRecents;
+ (void)_registerDefaultsForSuggestionsAndRecents:(id)arg1;
+ (id)_getBundleIdsForPrefix:(id)arg1 inDefaults:(id)arg2;
+ (_Bool)isSuggestionsAndRecentsDemoModeEnabled;
+ (id)_defaults;

@end
