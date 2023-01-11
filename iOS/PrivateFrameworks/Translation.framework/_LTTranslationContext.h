//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL, _LTLocalePair;

@interface _LTTranslationContext : NSObject <NSSecureCoding>
{
    _Bool _autodetectLanguage;
    _Bool _censorSpeech;
    _Bool _autoEndpoint;
    unsigned int _audioSessionID;
    NSString *_uniqueID;
    NSString *_sessionID;
    long long _taskHint;
    _LTLocalePair *_localePair;
    NSURL *_outputFileURL;
    NSArray *_asrModelURLs;
    NSURL *_mtModelURL;
    NSURL *_sourceURL;
    long long _lidThreshold;
    long long _route;
    long long _asrConfidenceThreshold;
    NSString *_clientIdentifier;
    long long _dataSharingOptInStatus;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long dataSharingOptInStatus; // @synthesize dataSharingOptInStatus=_dataSharingOptInStatus;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) long long asrConfidenceThreshold; // @synthesize asrConfidenceThreshold=_asrConfidenceThreshold;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) long long route; // @synthesize route=_route;
@property(nonatomic) long long lidThreshold; // @synthesize lidThreshold=_lidThreshold;
@property(nonatomic) _Bool autoEndpoint; // @synthesize autoEndpoint=_autoEndpoint;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSURL *mtModelURL; // @synthesize mtModelURL=_mtModelURL;
@property(copy, nonatomic) NSArray *asrModelURLs; // @synthesize asrModelURLs=_asrModelURLs;
@property(copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(nonatomic) _Bool censorSpeech; // @synthesize censorSpeech=_censorSpeech;
@property(nonatomic) _Bool autodetectLanguage; // @synthesize autodetectLanguage=_autodetectLanguage;
@property(copy, nonatomic) _LTLocalePair *localePair; // @synthesize localePair=_localePair;
@property(nonatomic) long long taskHint; // @synthesize taskHint=_taskHint;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_ospreyTTSRequestWithText:(id)arg1;
- (id)_ospreyTextToSpeechTranslationRequestWithText:(id)arg1;
- (id)_ospreySpeechTranslationRequestWithHybridEndpointer:(_Bool)arg1;
- (id)_ttsVoiceStringWithLocale:(id)arg1;
- (long long)_ospreyDataSharingStatus;

@end
