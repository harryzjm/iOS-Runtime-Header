//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class AFBulletin, AFRequestInfo, AFSpeechRequestOptions, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL, NSUUID, SAGuidanceCheckForGuideUpdateContext, SASPronunciationContext;

@interface SASRequestOptions : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestSource;
    _Bool _pronunciationRequest;
    _Bool _isForCarDND;
    _Bool _isConnectedToCarPlay;
    _Bool _rightHandDrive;
    _Bool _initialBringUp;
    _Bool _useAutomaticEndpointing;
    _Bool _useStreamingDictation;
    _Bool _acousticIdEnabled;
    _Bool _releaseAudioSessionOnRecordingCompletion;
    _Bool _predictedRecordRouteIsZLL;
    _Bool _shortButtonPressAction;
    NSString *_activationDeviceIdentifier;
    AFBulletin *_bulletin;
    NSString *_appBundleIdentifier;
    NSDictionary *_directActionContextPayload;
    SAGuidanceCheckForGuideUpdateContext *_checkForGuideUpdateContext;
    long long _directActionEvent;
    NSString *_serverCommandId;
    SASPronunciationContext *_pronunciationContext;
    NSString *_text;
    NSURL *_speechFileURL;
    double _expectedTimestamp;
    double _timestamp;
    double _buttonDownTimestamp;
    NSArray *_currentCarPlaySupportedOEMAppIdList;
    unsigned long long _carDNDStatus;
    NSNumber *_homeButtonUpFromBeep;
    NSDictionary *_continuityInfo;
    AFRequestInfo *_requestInfo;
    AFSpeechRequestOptions *_speechRequestOptions;
    NSString *_uiPresentationIdentifier;
    NSMutableArray *_instrumentationEvents;
    NSUUID *_previousTurnIdentifier;
    NSArray *_contextAppInfosForSiriViewController;
    NSDictionary *_testingContext;
    unsigned long long _currentLockState;
    NSString *_startRecordingSoundId;
    SASRequestOptions *_originalRequestOptions;
    long long _presentationMode;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(copy, nonatomic) SASRequestOptions *originalRequestOptions; // @synthesize originalRequestOptions=_originalRequestOptions;
@property(nonatomic, getter=isShortButtonPressAction) _Bool shortButtonPressAction; // @synthesize shortButtonPressAction=_shortButtonPressAction;
@property(copy, nonatomic) NSString *startRecordingSoundId; // @synthesize startRecordingSoundId=_startRecordingSoundId;
@property(nonatomic) unsigned long long currentLockState; // @synthesize currentLockState=_currentLockState;
@property(retain, nonatomic) NSDictionary *testingContext; // @synthesize testingContext=_testingContext;
@property(retain, nonatomic) NSArray *contextAppInfosForSiriViewController; // @synthesize contextAppInfosForSiriViewController=_contextAppInfosForSiriViewController;
@property(retain, nonatomic) NSUUID *previousTurnIdentifier; // @synthesize previousTurnIdentifier=_previousTurnIdentifier;
@property(retain, nonatomic) NSMutableArray *instrumentationEvents; // @synthesize instrumentationEvents=_instrumentationEvents;
@property(retain, nonatomic) NSString *uiPresentationIdentifier; // @synthesize uiPresentationIdentifier=_uiPresentationIdentifier;
@property(nonatomic) _Bool predictedRecordRouteIsZLL; // @synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL;
@property(nonatomic) _Bool releaseAudioSessionOnRecordingCompletion; // @synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion;
@property(nonatomic) _Bool acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(retain, nonatomic) AFRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(copy, nonatomic) NSDictionary *continuityInfo; // @synthesize continuityInfo=_continuityInfo;
@property(retain, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) _Bool useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(nonatomic, getter=isInitialBringUp) _Bool initialBringUp; // @synthesize initialBringUp=_initialBringUp;
@property(nonatomic, getter=isRightHandDrive) _Bool rightHandDrive; // @synthesize rightHandDrive=_rightHandDrive;
@property(nonatomic) unsigned long long carDNDStatus; // @synthesize carDNDStatus=_carDNDStatus;
@property(nonatomic) _Bool isConnectedToCarPlay; // @synthesize isConnectedToCarPlay=_isConnectedToCarPlay;
@property(nonatomic) _Bool isForCarDND; // @synthesize isForCarDND=_isForCarDND;
@property(retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList; // @synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList;
@property(nonatomic) double buttonDownTimestamp; // @synthesize buttonDownTimestamp=_buttonDownTimestamp;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double expectedTimestamp; // @synthesize expectedTimestamp=_expectedTimestamp;
@property(copy, nonatomic) NSURL *speechFileURL; // @synthesize speechFileURL=_speechFileURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) SASPronunciationContext *pronunciationContext; // @synthesize pronunciationContext=_pronunciationContext;
@property(nonatomic, getter=isPronunciationRequest) _Bool pronunciationRequest; // @synthesize pronunciationRequest=_pronunciationRequest;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
@property(nonatomic) long long directActionEvent; // @synthesize directActionEvent=_directActionEvent;
@property(copy, nonatomic) SAGuidanceCheckForGuideUpdateContext *checkForGuideUpdateContext; // @synthesize checkForGuideUpdateContext=_checkForGuideUpdateContext;
@property(copy, nonatomic) NSDictionary *directActionContextPayload; // @synthesize directActionContextPayload=_directActionContextPayload;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) AFBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(copy, nonatomic) NSString *activationDeviceIdentifier; // @synthesize activationDeviceIdentifier=_activationDeviceIdentifier;
- (_Bool)_isTypeToSiriPermittedAndEnabledForRequestOptions;
- (long long)_presentationIdentifierFromUIPresentationIdentifier:(id)arg1;
- (void)_updateWithSystemState:(id)arg1 forcefully:(_Bool)arg2;
- (void)updateIfNeededWithSystemState:(id)arg1;
- (_Bool)isHTTRequestSource;
- (_Bool)isB288Activation;
@property(readonly, nonatomic) _Bool isForEyesFree;
@property(readonly, nonatomic, getter=isForStark) _Bool forStark;
@property(readonly, nonatomic) _Bool isForAppleTV;
@property(readonly, nonatomic, getter=isForSpeechRequest) _Bool forSpeechRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_configureStreamingDictationForSource:(long long)arg1;
@property(nonatomic) long long requestSource;
- (id)init;
- (id)initWithRequestSource:(long long)arg1 uiPresentationIdentifier:(id)arg2 systemState:(id)arg3;
- (id)initWithRequestSource:(long long)arg1 uiPresentationIdentifier:(id)arg2;
- (id)initWithRequestSource:(long long)arg1;

@end
