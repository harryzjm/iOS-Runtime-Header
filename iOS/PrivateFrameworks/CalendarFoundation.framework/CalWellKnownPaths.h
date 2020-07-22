//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CalWellKnownPaths : NSObject
{
}

+ (id)calendarClientIdConflictsPath;
+ (id)calendarSyncChangesPath;
+ (id)eventsPendingChangesPath;
+ (id)temporaryFilesPath;
+ (id)calendarCachePath;
+ (id)calendarsFolderPath;
+ (id)mailInvitationDropPath;
+ (id)calendarFileHandlerPath;
+ (_Bool)checkOrCreatePath:(id)arg1;
+ (void)resetPaths;
+ (id)realHomeDirectoryPath;
+ (void)initialize;

@end
