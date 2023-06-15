//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextToSpeech/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSObject, NSSet, NSString, TTSSpeechRequest, TTSSpeechVoice;
@protocol OS_dispatch_queue;

@protocol TTSSpeechService <NSObject>
- (_Bool)isVoiceValid:(TTSSpeechVoice *)arg1;
- (NSString *)speechMarkupStringForType:(long long)arg1 voice:(TTSSpeechVoice *)arg2 string:(NSString *)arg3;
- (NSSet *)supportedIPAPhonemeLanguages;
- (oneway void)getSpeechIsActiveForRequest:(TTSSpeechRequest *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)stopSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (oneway void)continueSpeechRequest:(TTSSpeechRequest *)arg1;
- (oneway void)pauseSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (oneway void)startSpeechRequest:(TTSSpeechRequest *)arg1;
- (void)setServiceQueue:(NSObject<OS_dispatch_queue> *)arg1 forSynthesizerInstanceID:(unsigned long long)arg2;
- (void)synthesizerInstanceDestroyed:(unsigned long long)arg1;
- (void)initializeSpeechServerInstance:(unsigned long long)arg1;

@optional
- (_Bool)isSiriNeuralVoice:(TTSSpeechVoice *)arg1;
- (_Bool)isNashvilleService;
- (_Bool)isSiriService;
- (NSString *)serviceIdentifier;
- (NSDictionary *)audioFileSettingsForVoice:(TTSSpeechVoice *)arg1;
- (NSString *)genericMarkerMarkupForVoice:(TTSSpeechVoice *)arg1 name:(NSString *)arg2;
- (NSString *)combinedProsodyMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 rate:(NSNumber *)arg3 pitch:(NSNumber *)arg4 volume:(NSNumber *)arg5;
- (NSString *)embeddedVolumeMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 volume:(double)arg3;
- (NSString *)embeddedPitchMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 pitch:(double)arg3;
- (NSString *)embeddedRateMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 rate:(double)arg3;
- (NSString *)enclosedStringWithPhonemes:(NSString *)arg1 originalString:(NSString *)arg2;
- (NSString *)phonemesFromLHPhonemes:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)phonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)lhPhonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
- (_Bool)employSpeechMarkupForType:(long long)arg1 language:(NSString *)arg2;
@end

