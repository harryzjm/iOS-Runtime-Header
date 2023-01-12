//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreEmbeddedSpeechRecognition/NSObject-Protocol.h>

@class AFSpeechCorrectionInfo, CESRAssetConfig, CESRSpeechParameters, NSArray, NSData, NSDictionary, NSSet, NSString, NSURL;

@protocol CESRSpeechService <NSObject>
- (oneway void)resumeRecognitionWithPrefixText:(NSString *)arg1 postfixText:(NSString *)arg2 selectedText:(NSString *)arg3;
- (oneway void)pauseRecognition;
- (oneway void)invalidateUaapLm;
- (oneway void)deleteAllDESRecordsForDictationPersonalizationWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)runEvaluationWithDESRecordDatas:(NSDictionary *)arg1 language:(NSString *)arg2 recipe:(NSDictionary *)arg3 attachments:(NSArray *)arg4 fidesPersonalizedLMPath:(NSString *)arg5 fidesPersonalizedLMTrainingAsset:(NSString *)arg6 scrubResult:(_Bool)arg7 completion:(void (^)(NSDictionary *, NSError *))arg8;
- (oneway void)removePersonalizedLMForFidesOnly:(_Bool)arg1 completion:(void (^)(void))arg2;
- (oneway void)invalidatePersonalizedLM;
- (oneway void)sendSpeechCorrectionInfo:(AFSpeechCorrectionInfo *)arg1 interactionIdentifier:(NSString *)arg2;
- (oneway void)startMissingAssetDownload;
- (oneway void)writeDESRecord;
- (oneway void)setAssetsPurgeabilityExceptLanguages:(NSSet *)arg1 assetType:(unsigned long long)arg2;
- (oneway void)purgeInstalledAssetsExceptLanguages:(NSSet *)arg1 assetType:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)purgeInstalledAssetsExceptLanguages:(NSSet *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (oneway void)readProfileAndUserDataWithLanguage:(NSString *)arg1 allowOverride:(_Bool)arg2 completion:(void (^)(NSData *, NSString *))arg3;
- (oneway void)runCorrectedTextEvaluationWithAudioDatas:(NSDictionary *)arg1 recordDatas:(NSDictionary *)arg2 language:(NSString *)arg3 samplingRate:(unsigned long long)arg4 caseSensitive:(_Bool)arg5 skipLME:(_Bool)arg6 wordSenseAccessListSet:(NSSet *)arg7 completion:(void (^)(NSDictionary *, NSError *))arg8;
- (oneway void)runAdaptationRecipeEvaluation:(NSDictionary *)arg1 recordData:(NSData *)arg2 attachments:(NSArray *)arg3 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg4;
- (oneway void)fetchModelPropertiesForAssetConfig:(CESRAssetConfig *)arg1 completion:(void (^)(CESRModelProperties *, NSError *))arg2;
- (oneway void)fetchAssetsForAssetConfig:(CESRAssetConfig *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)fetchAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getOfflineDictationStatusIgnoringCache:(_Bool)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getOfflineAssetStatusIgnoringCache:(_Bool)arg1 assetType:(unsigned long long)arg2 withDetailedStatus:(_Bool)arg3 withCompletion:(void (^)(NSDictionary *, NSError *))arg4;
- (oneway void)getOfflineAssetStatusIgnoringCache:(_Bool)arg1 assetType:(unsigned long long)arg2 withCompletion:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)updateSpeechProfileWithLanguage:(NSString *)arg1 modelOverridePath:(NSString *)arg2 existingProfile:(NSData *)arg3 existingAssetPath:(NSString *)arg4 completion:(void (^)(NSData *, NSString *, NSError *))arg5;
- (oneway void)createSpeechProfileWithLanguage:(NSString *)arg1 modelOverridePath:(NSString *)arg2 JSONData:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (oneway void)finishAudio;
- (oneway void)addAudioPacket:(NSData *)arg1;
- (oneway void)startSpeechRecognitionWithParameters:(CESRSpeechParameters *)arg1 didStartHandler:(void (^)(NSString *, NSString *, NSError *))arg2;
- (oneway void)startSpeechRecognitionWithParameters:(CESRSpeechParameters *)arg1 didStartHandlerWithInfo:(void (^)(CESRModelProperties *, NSError *))arg2;
- (oneway void)startRequestActivityWithCompletion:(void (^)(void))arg1;
- (oneway void)preheatSpeechRecognitionWithAssetConfig:(CESRAssetConfig *)arg1 modelOverrideURL:(NSURL *)arg2;
- (oneway void)preheatSpeechRecognitionWithLanguage:(NSString *)arg1 modelOverrideURL:(NSURL *)arg2;
- (oneway void)resetCacheAndCompileAllAssetsWithCompletion:(void (^)(NSError *))arg1;
@end

