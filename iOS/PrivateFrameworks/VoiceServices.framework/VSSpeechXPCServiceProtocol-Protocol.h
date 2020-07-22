//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSArray, NSString, VSPresynthesizedAudioRequest, VSSpeechRequest;

@protocol VSSpeechXPCServiceProtocol <NSObject>
- (oneway void)getLogToFile:(void (^)(_Bool))arg1;
- (oneway void)setLogToFile:(_Bool)arg1;
- (oneway void)getVoiceInfoForLanguageCode:(NSString *)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(void (^)(VSVoiceAsset *))arg5;
- (oneway void)getVoiceResourceForLanguage:(NSString *)arg1 reply:(void (^)(VSVoiceResourceAsset *))arg2;
- (oneway void)getAutoDownloadedVoiceAssets:(void (^)(NSArray *))arg1;
- (oneway void)setAutoDownloadedVoiceAssets:(NSArray *)arg1;
- (oneway void)getLocalVoiceResourcesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getLocalVoicesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)cleanUnusedAssets:(void (^)(NSError *))arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(void (^)(_Bool))arg1;
- (oneway void)getSpeechIsActiveReply:(void (^)(_Bool))arg1;
- (oneway void)getFootprintsForVoiceName:(NSString *)arg1 languageCode:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (oneway void)getVoiceNamesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)stopPresynthesizedAudioRequest;
- (oneway void)startPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
- (oneway void)continueSpeechRequest;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)startSynthesisRequest:(VSSpeechRequest *)arg1;
- (oneway void)startSpeechRequest:(VSSpeechRequest *)arg1;
- (oneway void)prewarmIfNeededWithRequest:(VSSpeechRequest *)arg1;
- (oneway void)updateWithConnectionIdentifier:(NSString *)arg1;
@end

