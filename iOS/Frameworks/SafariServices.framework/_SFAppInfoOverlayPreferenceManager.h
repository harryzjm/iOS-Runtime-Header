//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSPerSitePreferenceManager.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

__attribute__((visibility("hidden")))
@interface _SFAppInfoOverlayPreferenceManager : WBSPerSitePreferenceManager
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSPerSitePreference *_appInfoOverlayPreference;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WBSPerSitePreference *appInfoOverlayPreference; // @synthesize appInfoOverlayPreference=_appInfoOverlayPreference;
- (id)offValueForPreference:(id)arg1;
- (id)onValueForPreference:(id)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)preferenceNameForPreference:(id)arg1;
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;
- (long long)_defaultPreferenceValue;
- (void)setAppInfoOverlayPreferenceForDomain:(id)arg1 settings:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAppInfoOverlayPreferenceForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

