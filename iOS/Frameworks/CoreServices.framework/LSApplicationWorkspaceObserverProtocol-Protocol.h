//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@class NSArray;

@protocol LSApplicationWorkspaceObserverProtocol <NSObject>

@optional
- (void)helperPlaceholdersUninstalled:(NSArray *)arg1;
- (void)helperPlaceholdersInstalled:(NSArray *)arg1;
- (void)databaseWasRebuilt;
- (void)applicationsDidChangePersonas:(NSArray *)arg1;
- (void)deviceManagementPolicyDidChange:(NSArray *)arg1;
- (_Bool)observeLaunchProhibitedApps;
- (void)networkUsageChanged:(_Bool)arg1;
- (void)applicationIconDidChange:(NSArray *)arg1;
- (void)applicationStateDidChange:(NSArray *)arg1;
- (void)applicationInstallsDidPrioritize:(NSArray *)arg1;
- (void)applicationInstallsDidCancel:(NSArray *)arg1;
- (void)applicationInstallsDidResume:(NSArray *)arg1;
- (void)applicationInstallsDidPause:(NSArray *)arg1;
- (void)applicationInstallsArePrioritized:(NSArray *)arg1 arePaused:(NSArray *)arg2;
- (void)applicationsDidFailToUninstall:(NSArray *)arg1;
- (void)pluginsDidUninstall:(NSArray *)arg1;
- (void)applicationsDidUninstall:(NSArray *)arg1;
- (void)pluginsWillUninstall:(NSArray *)arg1;
- (void)applicationsWillUninstall:(NSArray *)arg1;
- (void)applicationsDidFailToInstall:(NSArray *)arg1;
- (void)pluginsDidInstall:(NSArray *)arg1;
- (void)applicationsDidInstall:(NSArray *)arg1;
- (void)applicationsWillInstall:(NSArray *)arg1;
- (void)applicationInstallsDidUpdateIcon:(NSArray *)arg1;
- (void)applicationInstallsDidChange:(NSArray *)arg1;
- (void)applicationInstallsDidStart:(NSArray *)arg1;
@end

