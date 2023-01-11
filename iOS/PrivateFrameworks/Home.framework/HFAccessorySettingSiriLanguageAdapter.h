//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@class HFSiriLanguageOption, NAFuture, NSHashTable, NSSet, NSString;

@interface HFAccessorySettingSiriLanguageAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
    NSSet *_availableLanguageOptions;
    HFSiriLanguageOption *_selectedLanguageOption;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption; // @synthesize selectedLanguageOption=_selectedLanguageOption;
@property(copy, nonatomic) NSSet *availableLanguageOptions; // @synthesize availableLanguageOptions=_availableLanguageOptions;
- (void).cxx_destruct;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (id)_reloadLanguagesFromHomeKitNotifyingObservers:(_Bool)arg1;
@property(readonly, nonatomic) NAFuture *languageSettingFuture;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg1;
- (id)preferredOutputVoiceGenderOptionsForSelectedOption:(id)arg1;
- (id)preferredRecognitionLanguageOptions;
- (void)_dumpAvailableLanguageOptionsWithReason:(id)arg1;
- (id)updateSelectedLanguageOption:(id)arg1;
- (id)updateAvailableLanguageOptions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

