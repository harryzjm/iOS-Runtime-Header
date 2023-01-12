//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/NSObject-Protocol.h>

@class NSArray, NSError, NSLocale, NSString, _LTLanguageDetectionResult, _LTServerEndpointerFeatures, _LTSpeechRecognitionResult, _LTTranslationResult, _LTWordTimingInfo;

@protocol _LTSpeechTranslationDelegate <NSObject>

@optional
- (void)ttsProgressed:(_LTWordTimingInfo *)arg1;
- (void)languageInstallProgressed:(NSArray *)arg1 error:(NSError *)arg2;
- (void)paragraphTranslation:(NSString *)arg1 result:(_LTTranslationResult *)arg2 error:(NSError *)arg3;
- (void)cancel;
- (void)translationDidFinishWithError:(NSError *)arg1;
- (void)translatorDidTranslate:(_LTTranslationResult *)arg1;
- (void)speechRecognitionResult:(_LTSpeechRecognitionResult *)arg1;
- (void)serverEndpointerFeatures:(_LTServerEndpointerFeatures *)arg1 locale:(NSLocale *)arg2;
- (void)hybridEndpointerFoundEndpoint;
- (void)languageDetectionCompleted;
- (void)languageDetectionResult:(_LTLanguageDetectionResult *)arg1;
- (void)speechActivityDetected;
@end

