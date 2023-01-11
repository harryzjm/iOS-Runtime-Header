//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, UNSNotificationSourceSettingsDescription;

@interface UNSNotificationSourceDescription : NSObject
{
    _Bool _allowCriticalAlerts;
    _Bool _allowPrivateProperties;
    _Bool _allowUnlimitedPendingNotifications;
    _Bool _allowUnlimitedContentBody;
    _Bool _hideSettings;
    _Bool _automaticallyShowSettings;
    _Bool _suppressDismissalSync;
    _Bool _suppressUserAuthorizationPrompt;
    _Bool _useDefaultDataProvider;
    _Bool _usesCloudKit;
    _Bool _supportsContentAvailableRemoteNotifications;
    _Bool _restricted;
    _Bool _daemonShouldReceiveBackgroundResponses;
    NSString *_bundleIdentifier;
    NSString *_universalApplicationIdentifier;
    NSString *_displayName;
    NSString *_pushEnvironment;
    NSString *_defaultIconFile;
    NSString *_settingsIconFile;
    NSString *_settingsSheetIconFile;
    NSString *_carPlayIconFile;
    NSString *_watchQuickLookSmallIconFile;
    NSString *_watchQuickLookLargeIconFile;
    NSString *_watchListSmallIconFile;
    NSString *_watchListLargeIconFile;
    NSString *_watchQuickLook394hIconFile;
    NSString *_watchQuickLook448hIconFile;
    NSString *_watchList394hIconFile;
    NSString *_watchList448hIconFile;
    NSURL *_bundleURL;
    NSURL *_dataContainerURL;
    NSArray *_defaultCategories;
    UNSNotificationSourceSettingsDescription *_defaultSettings;
    NSArray *_defaultTopics;
}

+ (id)_validEnvironmentFromEnvironment:(id)arg1;
+ (id)systemSourceDescriptionWithBundleURL:(id)arg1;
+ (id)applicationSourceDescriptionWithApplication:(id)arg1;
+ (id)descriptionWithBundleIdentifier:(id)arg1 path:(id)arg2;
@property(nonatomic) _Bool daemonShouldReceiveBackgroundResponses; // @synthesize daemonShouldReceiveBackgroundResponses=_daemonShouldReceiveBackgroundResponses;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) _Bool supportsContentAvailableRemoteNotifications; // @synthesize supportsContentAvailableRemoteNotifications=_supportsContentAvailableRemoteNotifications;
@property(nonatomic) _Bool usesCloudKit; // @synthesize usesCloudKit=_usesCloudKit;
@property(nonatomic) _Bool useDefaultDataProvider; // @synthesize useDefaultDataProvider=_useDefaultDataProvider;
@property(nonatomic) _Bool suppressUserAuthorizationPrompt; // @synthesize suppressUserAuthorizationPrompt=_suppressUserAuthorizationPrompt;
@property(nonatomic) _Bool suppressDismissalSync; // @synthesize suppressDismissalSync=_suppressDismissalSync;
@property(nonatomic) _Bool automaticallyShowSettings; // @synthesize automaticallyShowSettings=_automaticallyShowSettings;
@property(nonatomic) _Bool hideSettings; // @synthesize hideSettings=_hideSettings;
@property(nonatomic) _Bool allowUnlimitedContentBody; // @synthesize allowUnlimitedContentBody=_allowUnlimitedContentBody;
@property(nonatomic) _Bool allowUnlimitedPendingNotifications; // @synthesize allowUnlimitedPendingNotifications=_allowUnlimitedPendingNotifications;
@property(nonatomic) _Bool allowPrivateProperties; // @synthesize allowPrivateProperties=_allowPrivateProperties;
@property(nonatomic) _Bool allowCriticalAlerts; // @synthesize allowCriticalAlerts=_allowCriticalAlerts;
@property(retain, nonatomic) NSArray *defaultTopics; // @synthesize defaultTopics=_defaultTopics;
@property(retain, nonatomic) UNSNotificationSourceSettingsDescription *defaultSettings; // @synthesize defaultSettings=_defaultSettings;
@property(retain, nonatomic) NSArray *defaultCategories; // @synthesize defaultCategories=_defaultCategories;
@property(copy, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSString *watchList448hIconFile; // @synthesize watchList448hIconFile=_watchList448hIconFile;
@property(copy, nonatomic) NSString *watchList394hIconFile; // @synthesize watchList394hIconFile=_watchList394hIconFile;
@property(copy, nonatomic) NSString *watchQuickLook448hIconFile; // @synthesize watchQuickLook448hIconFile=_watchQuickLook448hIconFile;
@property(copy, nonatomic) NSString *watchQuickLook394hIconFile; // @synthesize watchQuickLook394hIconFile=_watchQuickLook394hIconFile;
@property(copy, nonatomic) NSString *watchListLargeIconFile; // @synthesize watchListLargeIconFile=_watchListLargeIconFile;
@property(copy, nonatomic) NSString *watchListSmallIconFile; // @synthesize watchListSmallIconFile=_watchListSmallIconFile;
@property(copy, nonatomic) NSString *watchQuickLookLargeIconFile; // @synthesize watchQuickLookLargeIconFile=_watchQuickLookLargeIconFile;
@property(copy, nonatomic) NSString *watchQuickLookSmallIconFile; // @synthesize watchQuickLookSmallIconFile=_watchQuickLookSmallIconFile;
@property(copy, nonatomic) NSString *carPlayIconFile; // @synthesize carPlayIconFile=_carPlayIconFile;
@property(copy, nonatomic) NSString *settingsSheetIconFile; // @synthesize settingsSheetIconFile=_settingsSheetIconFile;
@property(copy, nonatomic) NSString *settingsIconFile; // @synthesize settingsIconFile=_settingsIconFile;
@property(copy, nonatomic) NSString *defaultIconFile; // @synthesize defaultIconFile=_defaultIconFile;
@property(copy, nonatomic) NSString *pushEnvironment; // @synthesize pushEnvironment=_pushEnvironment;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *universalApplicationIdentifier; // @synthesize universalApplicationIdentifier=_universalApplicationIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (void)setDefaultTopicsFromArray:(id)arg1 bundle:(id)arg2;
- (void)setDefaultCategoriesFromArray:(id)arg1 bundle:(id)arg2;
- (void)setIconFilesFromDictionary:(id)arg1;
- (void)setSystemPropertiesFromDictionary:(id)arg1 bundle:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

