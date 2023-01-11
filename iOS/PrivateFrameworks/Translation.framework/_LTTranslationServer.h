//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _LTLoggingRequestHandler, _LTServerSpeakSession, _LTServerSpeechSession, _LTTextToSpeechCache;
@protocol OS_dispatch_queue, _LTTranslationEngine;

__attribute__((visibility("hidden")))
@interface _LTTranslationServer : NSObject
{
    id <_LTTranslationEngine> _offlineCachedEngine;
    id <_LTTranslationEngine> _onlineCachedEngine;
    _LTTextToSpeechCache *_ttsCache;
    _LTServerSpeechSession *_speechSession;
    _LTServerSpeakSession *_speakSession;
    _LTLoggingRequestHandler *_logger;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availableLocalePairsForTask:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getAssetSize:(CDUnknownBlockType)arg1;
- (void)startInstallRequest:(id)arg1 delegate:(id)arg2;
- (void)installedLocales:(CDUnknownBlockType)arg1;
- (void)_updateAllAssets:(CDUnknownBlockType)arg1;
- (void)_purgeAllAssets:(CDUnknownBlockType)arg1;
- (void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_offlineLanguageStatus:(CDUnknownBlockType)arg1;
- (void)languagesForText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)languageForText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cleanup;
- (void)cleanupOfflineEngine;
- (void)notifyOfMemoryPressure;
- (void)clearCaches;
- (void)startLoggingRequest:(id)arg1;
- (void)endAudio;
- (void)addSpeechAudioData:(id)arg1;
- (void)_speechSessionCompleted;
- (void)cancelSpeechSessionWithID:(id)arg1;
- (void)cancelSpeechSession;
- (id)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;
- (void)translateParagraphs:(id)arg1 withContext:(id)arg2 paragraphResult:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelExistingSessions;
- (void)preheatWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_engineForContext:(id)arg1 error:(id *)arg2;
- (id)_onlineEngineForContext:(id)arg1 error:(id *)arg2;
- (id)_offlineEngineForContext:(id)arg1 error:(id *)arg2;
- (id)init;

@end
