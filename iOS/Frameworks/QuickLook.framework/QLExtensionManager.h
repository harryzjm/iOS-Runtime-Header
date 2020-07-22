//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class QLExtensionManagerCache;

@interface QLExtensionManager : NSObject
{
    QLExtensionManagerCache *_thumbnailExtensionCache;
    QLExtensionManagerCache *_previewExtensionCache;
}

+ (id)sharedManager;
@property(retain, nonatomic) QLExtensionManagerCache *previewExtensionCache; // @synthesize previewExtensionCache=_previewExtensionCache;
@property(retain, nonatomic) QLExtensionManagerCache *thumbnailExtensionCache; // @synthesize thumbnailExtensionCache=_thumbnailExtensionCache;
- (void).cxx_destruct;
- (void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)_extensionPointNameForExtensionType:(unsigned long long)arg1;
- (id)extensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (void)extensionContextForContentType:(id)arg1 appBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (_Bool)existsExtensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generationType:(unsigned long long)arg4;
- (id)_cacheForExtensionType:(unsigned long long)arg1;
- (void)_setupCache;
- (void)remoteViewControllerForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generatonType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;

@end

