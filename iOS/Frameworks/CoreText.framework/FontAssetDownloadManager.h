//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FontAssetDownloadManager : NSObject
{
    struct TCFRef<const __CFArray *> fDescriptors;
    struct TCFRef<const __CFSet *> fMandatoryAttributes;
    CDUnknownBlockType fProgressCallbackBlock;
    NSMutableDictionary *fProgressParams;
    NSMutableDictionary *fDownloadOptions;
    NSMutableDictionary *fAssetToDescriptors;
}

+ (id)availableFontAttributesArrayMatchingRequests:(id)arg1 options:(unsigned long long)arg2;
+ (id)attributesFromFontInfo:(id)arg1 assetDesignLanguages:(id)arg2;
+ (id)enabledKeyboardLanguages;
+ (Class)getASAssetQueryClass;
+ (_Bool)activateFontsFromAssetURL:(id)arg1;
+ (unsigned long long)calculateDownloadSize:(id)arg1;
+ (id)availableMobileAssetsWithOptions:(unsigned int)arg1 manager:(id)arg2 error:(id *)arg3;
+ (unsigned int)defaultQueryOptions;
+ (_Bool)shouldRetryWithServer;
+ (_Bool)shouldTryServer;
+ (_Bool)fontInfo:(id)arg1 andAssetDesignLanguages:(id)arg2 matchesRequest:(id)arg3;
+ (id)availableMobileAssetsWithOptions:(unsigned int)arg1 error:(id *)arg2;
+ (_Bool)shouldIgnoreFontAssetWithAttributes:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)preciousFontLanguages;
- (void)setGarbageCollectionBehaviorForAsset:(id)arg1;
- (id)doFinalMatching;
- (_Bool)executeDownloadingFontAssets:(id)arg1;
- (_Bool)downloadAllowed;
- (_Bool)assetStalled:(id)arg1;
- (id)mobileAssetsForUnmatched:(id)arg1;
- (id)unmatchedDescriptors;
- (void)downloadFontAssets;
- (void)setProgressParam:(id)arg1 forKey:(id)arg2;
- (_Bool)callProgressCallback:(unsigned int)arg1;
- (void)setDownloadOptionsForMobileAsset;
- (void)dealloc;
- (id)initWithDescriptors:(struct __CFArray *)arg1 andMandatoryAttributes:(struct __CFSet *)arg2 withBlock:(CDUnknownBlockType)arg3;

@end

