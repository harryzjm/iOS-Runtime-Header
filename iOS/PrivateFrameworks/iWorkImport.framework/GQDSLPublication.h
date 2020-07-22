//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSLPageMargins, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDSLPublication
{
    struct CGSize mPageSize;
    GQDSLPageMargins *mPageMargins;
    GQDSStylesheet *mStylesheet;
    _Bool mHasBody;
    _Bool mIsOldTemplateNameMapInitialized;
    struct __CFDictionary *mOldTemplateNameMap;
    _Bool mShowOutliner;
    _Bool mHasHeaders;
    _Bool mHasFooters;
}

+ (struct _xmlNs *)appNamespace;
- (_Bool)hasFooters;
- (_Bool)hasHeaders;
- (_Bool)showOutliner;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileUrl:(struct __CFURL *)arg3;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg1;
- (_Bool)hasBody;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)setPageMargins:(id)arg1;
- (id)pageMargins;
- (struct CGSize)pageSize;
- (void)dealloc;
- (id)init;
- (struct __CFString *)createUpgradedPathForOldAssetPath:(struct __CFString *)arg1;
- (struct __CFArray *)createUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray *)arg1;
- (struct __CFString *)createFixedPathForOldAppBundleResourcePath:(struct __CFString *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

