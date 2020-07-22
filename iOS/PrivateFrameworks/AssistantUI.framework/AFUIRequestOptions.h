//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantUI/NSCopying-Protocol.h>
#import <AssistantUI/NSSecureCoding-Protocol.h>

@class AFBulletin, AFRequestInfo, AFSpeechRequestOptions, NSDictionary, NSNumber, NSString, NSURL, SAGuidanceCheckForGuideUpdateContext, SASPronunciationContext;

@interface AFUIRequestOptions : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestSource;
    _Bool _pronunciationRequest;
    _Bool _initialBringUp;
    _Bool _useAutomaticEndpointing;
    _Bool _useStreamingDictation;
    _Bool _acousticIdEnabled;
    _Bool _releaseAudioSessionOnRecordingCompletion;
    NSString *_activationDeviceIdentifier;
    AFBulletin *_bulletin;
    NSString *_appBundleIdentifier;
    NSDictionary *_messagesDirectActionContext;
    SAGuidanceCheckForGuideUpdateContext *_checkForGuideUpdateContext;
    long long _directActionEvent;
    NSString *_serverCommandId;
    SASPronunciationContext *_pronunciationContext;
    NSString *_text;
    NSURL *_speechFileURL;
    double _expectedTimestamp;
    double _timestamp;
    double _buttonDownTimestamp;
    NSNumber *_homeButtonUpFromBeep;
    NSDictionary *_continuityInfo;
    AFRequestInfo *_requestInfo;
    AFSpeechRequestOptions *_speechRequestOptions;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool releaseAudioSessionOnRecordingCompletion; // @synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion;
@property(nonatomic) _Bool acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(retain, nonatomic) AFRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(copy, nonatomic) NSDictionary *continuityInfo; // @synthesize continuityInfo=_continuityInfo;
@property(retain, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) _Bool useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(nonatomic, getter=isInitialBringUp) _Bool initialBringUp; // @synthesize initialBringUp=_initialBringUp;
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
@property(copy, nonatomic) NSDictionary *messagesDirectActionContext; // @synthesize messagesDirectActionContext=_messagesDirectActionContext;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) AFBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(copy, nonatomic) NSString *activationDeviceIdentifier; // @synthesize activationDeviceIdentifier=_activationDeviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isForStark) _Bool forStark;
@property(readonly, nonatomic, getter=isForSpeechRequest) _Bool forSpeechRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_configureStreamingDictationForSource:(long long)arg1;
@property(nonatomic) long long requestSource;
- (id)init;
- (id)initWithRequestSource:(long long)arg1;

@end

