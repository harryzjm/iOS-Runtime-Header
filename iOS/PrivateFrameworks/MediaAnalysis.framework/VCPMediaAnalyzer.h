//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSXPCConnection;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMediaAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_analysisQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    NSObject<OS_dispatch_group> *_storageGroup;
    NSNumber *_standalone;
    NSNumber *_minHighlightDuration;
    NSNumber *_noResultStrip;
    NSXPCConnection *_connection;
    NSXPCConnection *_mediaAnalysisServiceConnection;
    NSObject<OS_dispatch_queue> *_sandboxQueue;
    NSMutableDictionary *_sandboxHandles;
}

+ (Class)_getDistanceDescriptorClass;
+ (id)sharedMediaAnalyzer;
- (void).cxx_destruct;
- (void)completeStorage;
- (id)requestLivePhotoEffectsForAssets:(id)arg1 allowOnDemand:(_Bool)arg2 flags:(unsigned long long)arg3;
- (CDStruct_e83c9415)postProcessMovieHighlightDuration:(id)arg1 withOptions:(id)arg2;
- (id)requestMovieHighlightsForAssets:(id)arg1 withOptions:(id)arg2;
- (id)curateMovieAssetsForCollection:(id)arg1 withAlreadyCuratedAssets:(id)arg2 andDesiredCount:(unsigned long long)arg3 allowOnDemand:(_Bool)arg4;
- (id)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andError:(id *)arg5;
- (id)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (int)requestAnalysis:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;
- (int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 andProgressHandler:(CDUnknownBlockType)arg4 analyses:(id)arg5;
- (void)distanceFromAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 toAsset:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 duplicate:(long long *)arg5 distance:(float *)arg6;
- (void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long *)arg3 distance:(float *)arg4;
- (id)_queryDistanceDescriptor:(Class)arg1 ofAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 timeRange:(CDStruct_e83c9415)arg5 lastFeature:(_Bool)arg6 isDegraded:(_Bool *)arg7;
- (void)_getSceneDescriptors:(id)arg1 asDescriptorClass:(Class)arg2 withSceneRange:(CDStruct_e83c9415)arg3 andAnalysisResults:(id)arg4;
- (void)_checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long *)arg3;
- (void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)assetsFromPhotoLibrary:(id)arg1 analyzedSinceDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)cancelAnalysisWithRequestID:(int)arg1;
- (int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestAnalysis:(unsigned long long)arg1 forAsset:(id)arg2 withExistingAnalysis:(id)arg3 andDatabase:(id)arg4 andOptions:(id)arg5;
- (id)analyzeOndemand:(id)arg1 pairedURL:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 error:(id *)arg4;
- (id)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)_analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 withExistingAnalysis:(id)arg3 andOptions:(id)arg4 storeAnalysis:(_Bool)arg5;
- (id)_postProcessMovieHighlights:(id)arg1 analysis:(id)arg2 withOptions:(id)arg3;
- (unsigned long long)_typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2;
- (unsigned long long)_metaAnalysisTypesForAsset:(id)arg1;
- (id)_addClassificationResults:(id)arg1 analysis:(id)arg2;
- (id)_databaseForPhotoLibrary:(id)arg1;
- (long long)_getDatabaseSandboxExtensionForPhotoLibraryURL:(id)arg1;
- (id)connection;
- (long long)_getSandboxExtensionForMediaAnalysisDatabaseWithPhotoLibraryURL:(id)arg1;
- (void)_setupMediaAnalysisServiceConnection;
- (void)dealloc;
- (id)init;

@end
