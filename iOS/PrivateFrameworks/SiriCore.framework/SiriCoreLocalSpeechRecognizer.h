//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/AFSpeechServiceDelegate-Protocol.h>

@class NSData, NSError, NSString, NSXPCConnection, SiriCoreLocalSpeechDESRecord;
@protocol OS_dispatch_queue, SiriCoreLocalSpeechRecognizerDelegate;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate>
{
    SiriCoreLocalSpeechDESRecord *_desRecord;
    _Bool _shouldCreateRecordSPIv1;
    _Bool _shouldCreateRecordSPIv2;
    _Bool _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_esConnection;
    _Bool _hasRecognizedAnything;
    unsigned char _instanceUUID[16];
    NSString *_currentLanguage;
    NSError *_recognitionError;
    NSString *_preheatedProfileAssetPath;
    NSData *_preheatedProfile;
    id <SiriCoreLocalSpeechRecognizerDelegate> _delegate;
}

+ (id)speechProfileDataLastModifiedDataForLanguage:(id)arg1;
@property(readonly, nonatomic) __weak id <SiriCoreLocalSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;
- (void)_writeDESRecord;
- (oneway void)speechServiceDidRecognizePackage:(id)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(id)arg1;
- (void)writeDESRecord;
- (void)invalidate;
- (void)finishAudio;
- (void)addAudioPacket:(id)arg1;
- (void)fetchAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableDESWithCompletion:(CDUnknownBlockType)arg1;
- (void)runAdaptationRecipeEvaluation:(id)arg1 localSpeechDESRecord:(id)arg2 attachments:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)getOfflineDictationStatusIgnoringCache:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSpeechProfileWithLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startSpeechRecognitionWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(_Bool)arg4 detectUtterances:(_Bool)arg5 maximumRecognitionDuration:(double)arg6 farField:(_Bool)arg7 secureOfflineOnly:(_Bool)arg8 censorSpeech:(_Bool)arg9 originalAudioFileURL:(id)arg10 overrides:(id)arg11 modelOverrideURL:(id)arg12 didStartHandler:(CDUnknownBlockType)arg13;
- (void)preheatSpeechRecognitionWithLanguage:(id)arg1;
- (id)_serviceWithFunctionName:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_service;
- (id)_connection;
- (id)_newConnection;
- (id)init;
- (id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char [16])arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
