//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSSystemPolicyManager : NSObject
{
}

+ (_Bool)_languageSettingNeededForBundleID:(id)arg1;
+ (_Bool)_defaultAppSettingsNeededForBundleID:(id)arg1;
+ (_Bool)_documentSettingsNeededForBundleID:(id)arg1;
+ (_Bool)_notificationSettingsNeededForBundleID:(id)arg1;
+ (void)_populateBBSectionIDs;
+ (id)specifiersForThirdPartyApps:(id)arg1;
+ (_Bool)_cellularDataSettingsNeededForBundleID:(id)arg1;
+ (id)_dataUsageWorkspaceInfo;
+ (_Bool)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1;
+ (_Bool)_privacySettingsNeededForProxy:(id)arg1;
+ (_Bool)_systemSettingsNeededForProxy:(id)arg1;
+ (_Bool)_shouldIncludeProxy:(id)arg1;
+ (id)_thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)_thirdPartyApplicationProxies;
+ (_Bool)hasAnyAppClip;
+ (id)thirdPartyApplicationProxies;
+ (id)thirdPartyApplicationForBundleID:(id)arg1;
+ (id)thirdPartyApplicationsIncludingAppClips:(_Bool)arg1;
+ (id)thirdPartyApplications;

@end
