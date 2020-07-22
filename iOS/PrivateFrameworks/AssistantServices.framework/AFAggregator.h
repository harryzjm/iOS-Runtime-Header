//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AFAggregator : NSObject
{
    unsigned long long _type;
    double _startTime;
    _Bool _hasActiveRequest;
    _Bool _sessionIsRetrying;
    _Bool _retryPrefersWWAN;
}

+ (void)logPeriodicUsageIfNeeded;
+ (_Bool)_timestamp:(id)arg1 isAfter:(id)arg2;
+ (_Bool)_hadUserEventSinceIntervalAgo:(double)arg1;
+ (void)noteSuccessOfRequest:(id)arg1 inCar:(_Bool)arg2;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)logCDMAssetEvictedForAssetType:(id)arg1 language:(id)arg2;
+ (void)logDESEvaluationForLanguage:(id)arg1 error:(id)arg2;
+ (void)logDESRecordingForLanguage:(id)arg1 error:(id)arg2;
+ (void)logLocalRecognitionLostForLanguage:(id)arg1;
+ (void)logLocalRecognitionWonForLanguage:(id)arg1;
+ (void)logLocalRecognitionLoadedForLanguage:(id)arg1 duration:(double)arg2;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)arg1;
+ (void)logLocalSpeechStartedWithDuration:(double)arg1;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)arg1;
+ (void)logDictationEnabledSetTo:(_Bool)arg1 by:(id)arg2;
+ (void)logAssistantEnabledSetTo:(_Bool)arg1 by:(id)arg2;
+ (void)_logFeature:(id)arg1 setTo:(_Bool)arg2 by:(id)arg3;
+ (void)logEnabledState:(unsigned long long)arg1;
+ (void)logPingTimeout;
+ (void)logLoadAssistant;
+ (void)logCreateAssistant;
+ (void)logUILockCanceledVTActivation;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg1;
+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)arg1;
+ (void)logDictationCancelled;
+ (void)logDictationSucceeded;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriSpeechRequestStarted;
+ (void)logRequestLaunchedApp;
+ (id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (id)_stringForGatekeeperType:(unsigned long long)arg1;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)arg1;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)arg1;
+ (void)logHomeButtonPressToActivationDuration:(double)arg1;
+ (void)logTimeToBeepWithDuration:(double)arg1;
@property(nonatomic) _Bool hasActiveRequest; // @synthesize hasActiveRequest=_hasActiveRequest;
@property(nonatomic) unsigned long long connectionType; // @synthesize connectionType=_type;
- (void)speechResponseFailure;
- (void)speechResponseReceived;
- (void)startWaitingForSpeechResponse;
- (void)beginSessionRetryPreferringWWAN:(_Bool)arg1;
- (void)connectionDidDrop;
- (void)connectionDidFail;
- (void)recordSessionRetrySuccess;
- (void)recordFailure:(int)arg1 forConnectionType:(unsigned long long)arg2;
- (void)recordSuccessForConnectionType:(unsigned long long)arg1 isWarm:(_Bool)arg2 forTimeInterval:(double)arg3;

@end

