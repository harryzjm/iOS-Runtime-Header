//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _LTHotfixManager;

__attribute__((visibility("hidden")))
@interface _LTOfflineAssetManager : NSObject
{
    _LTHotfixManager *_hotfixMgr;
}

+ (id)fallBackAssetResourcePath;
+ (void)initialize;
- (void).cxx_destruct;
- (void)assetSize:(CDUnknownBlockType)arg1;
- (id)configurationPropertyListWithName:(id)arg1;
- (id)configurationPropertyListWithURL:(id)arg1;
- (id)languageDetectorAssetWithError:(id *)arg1;
- (id)endpointAssetInfoWithContext:(id)arg1 error:(id *)arg2;
- (id)getEndpointerAssetWithType:(long long)arg1 error:(id *)arg2;
- (id)_speechTranslationAssetInfoForLocalePair:(id)arg1 installedAssets:(id)arg2 catalogAssets:(id)arg3 config:(id)arg4 error:(id *)arg5;
- (id)_speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id *)arg2;
- (id)speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id *)arg2;
- (id)modelURLsForLanguagePair:(id)arg1;
- (void)downloadAssetsForLanguagePair:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadPassthroughAssetForLocale:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSpeechTranslationAssetSymLinks:(id)arg1;
- (void)updateAllAssets:(CDUnknownBlockType)arg1;
- (void)_updateAsset:(id)arg1 catalogAssets:(id)arg2 downloadGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)debugDumpAssets:(id)arg1;
- (void)purgeAllAssetsExcludingConfig:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeAssetForLanguagePair:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)assetIdentifierReferenceCountDictionary;
- (id)_assetIdentifiersForLanguagePairDirectory:(id)arg1;
- (id)assetDirectory;
- (void)_removeOldAssetDirectory;
- (void)downloadVoiceAssetsForLanguagePair:(id)arg1;
- (id)_voiceAssetForLocaleIdentifier:(id)arg1;
- (void)_downloadVoiceAsset:(id)arg1;
- (void)offlineLanguageStatus:(CDUnknownBlockType)arg1;
- (void)downloadAsset:(id)arg1 downloadOptions:(id)arg2 progressCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadAsset:(id)arg1 userInitiated:(_Bool)arg2 useCellular:(_Bool)arg3 progressCallback:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)downloadAsset:(id)arg1 userInitiated:(_Bool)arg2 progressCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryLanguagePairStatus:(CDUnknownBlockType)arg1;
- (id)_configPlistWithFileName:(id)arg1;
- (id)matchingASRAssetForLocale:(id)arg1 inAssets:(id)arg2;
- (id)configAsset;
- (id)configAssetInAssets:(id)arg1;
- (id)installedAssets;
- (id)catalogAssets;
- (void)removeObsoleteAssets;
- (void)refreshAllIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshAllAssets:(CDUnknownBlockType)arg1;
- (id)assetsSortedByVersion:(id)arg1;
- (void)_refreshCatalogIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)configAssetURL;
- (void)_clearCaches;
- (id)init;

@end

