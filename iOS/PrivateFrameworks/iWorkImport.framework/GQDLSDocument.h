//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStylesheet;

@interface GQDLSDocument
{
    GQDSStylesheet *mStylesheet;
}

+ (struct _xmlNs *)appNamespace;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg1;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileUrl:(struct __CFURL *)arg3;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)dealloc;
- (struct __CFString *)createUpgradedAppBundleResourcePath:(struct __CFString *)arg1;

@end

