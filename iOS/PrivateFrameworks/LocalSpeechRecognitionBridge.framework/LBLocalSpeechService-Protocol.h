//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalSpeechRecognitionBridge/NSObject-Protocol.h>

@class AFSpeechCorrectionInfo, LBLocalSpeechRecognitionSettings, NSDictionary, NSString;

@protocol LBLocalSpeechService <NSObject>
- (oneway void)updateTCUState:(NSDictionary *)arg1;
- (oneway void)sendSpeechCorrectionInfo:(AFSpeechCorrectionInfo *)arg1 interactionIdentifier:(NSString *)arg2;
- (oneway void)resetCacheAndCompileAllAssets;
- (oneway void)resumeLocalRecognitionWithRequestId:(NSString *)arg1 prefixText:(NSString *)arg2 postfixText:(NSString *)arg3 selectedText:(NSString *)arg4;
- (oneway void)pauseLocalSpeechRecognitionForRequestId:(NSString *)arg1;
- (oneway void)disableLocalSpeechRecognitionForRequestId:(NSString *)arg1;
- (oneway void)stopSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(NSString *)arg2;
- (oneway void)startSpeechRecognitionResultsWithSettings:(LBLocalSpeechRecognitionSettings *)arg1;
- (oneway void)stopDeliverLocalSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(NSString *)arg2;
- (oneway void)startDeliverLocalSpeechRecognitionResultsWithSettings:(LBLocalSpeechRecognitionSettings *)arg1;
- (oneway void)preheatLocalSpeechRecognitionWithLanguage:(NSString *)arg1 source:(unsigned long long)arg2;
@end

