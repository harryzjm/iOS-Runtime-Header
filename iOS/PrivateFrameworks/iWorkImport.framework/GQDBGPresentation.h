//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GQDBGPresentation
{
    struct __CFArray *mThemes;
    struct CGSize mSlideSize;
}

+ (id)parseNumberOutOfBasename:(id)arg1 returningNumber:(int *)arg2;
+ (struct _xmlNs *)appNamespace;
+ (void)initialize;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg1;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileUrl:(struct __CFURL *)arg3;
- (id)colorForMissingAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (void)loadAppBundleResourceToColorMap;
- (struct CGSize)slideSize;
- (void)addTheme:(id)arg1;
- (struct __CFArray *)themes;
- (void)dealloc;
- (id)init;
- (struct __CFString *)createUpgradedAppBundleResourcePath:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;

@end

