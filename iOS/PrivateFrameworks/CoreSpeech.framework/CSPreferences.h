//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSPreferences : NSObject
{
}

+ (unsigned long long)_deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;
+ (_Bool)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
+ (id)sharedPreferences;
- (_Bool)useSiriActivationSPIForHomePod;
- (unsigned long long)maxNumLoggingFiles;
- (double)audioSessionActivationDelay;
- (_Bool)smartSiriVolumeSoftVolumeEnabled;
- (_Bool)speakerIdEnabled;
- (id)audioInjectionFilePath;
- (void)setAudioInjectionFilePath:(id)arg1;
- (_Bool)audioInjectionEnabled;
- (_Bool)enableAudioInjection:(_Bool)arg1;
- (_Bool)myriadFileLoggingEnabled;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (double)remoteVoiceTriggerDelayTime;
- (_Bool)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2;
- (_Bool)_markSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (_Bool)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (void)notifyUserVoiceProfileUpdateReady;
- (id)getUserVoiceProfileUpdateDirectory;
- (_Bool)_isDirectory:(id)arg1;
- (void)notifyUserVoiceProfileUploadComplete;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)arg1;
- (id)getUserVoiceProfileUploadPath;
- (id)getUserVoiceProfileFileList;
- (id)_getEnrolledLanguageList;
- (id)_CSSATUploadPath;
- (id)_CSSATUpdatePath;
- (id)CSSATBasePath;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (id)voiceTriggerAudioLogDirectory;
- (id)baseDir;
- (void)setFileLoggingLevel:(id)arg1;
- (id)fileLoggingLevel;
- (_Bool)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(_Bool)arg1;
- (_Bool)_storeModeEnabled;
- (_Bool)twoShotNotificationEnabled;
- (_Bool)voiceTriggerInCoreSpeech;
- (_Bool)voiceTriggerEnabled;

@end

