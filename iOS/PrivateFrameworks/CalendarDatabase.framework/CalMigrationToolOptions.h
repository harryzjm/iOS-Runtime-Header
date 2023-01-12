//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CalMigrationToolOptions : NSObject
{
    _Bool _migrateUsingCalendarDaemon;
    NSURL *_homeDirectory;
    NSURL *_sourceCalendarDirectory;
    NSURL *_destinationDirectory;
    long long _performCalendarMigration;
    long long _performReminderMigration;
    long long _performCleanup;
    long long _deleteMigratedData;
    long long _backupBeforeCalendarMigration;
    long long _backupBeforeReminderMigration;
    NSURL *_accountsChangesFile;
}

+ (id)_stringForTriStateOption:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *accountsChangesFile; // @synthesize accountsChangesFile=_accountsChangesFile;
@property(readonly, nonatomic) long long backupBeforeReminderMigration; // @synthesize backupBeforeReminderMigration=_backupBeforeReminderMigration;
@property(readonly, nonatomic) long long backupBeforeCalendarMigration; // @synthesize backupBeforeCalendarMigration=_backupBeforeCalendarMigration;
@property(readonly, nonatomic) long long deleteMigratedData; // @synthesize deleteMigratedData=_deleteMigratedData;
@property(readonly, nonatomic) long long performCleanup; // @synthesize performCleanup=_performCleanup;
@property(readonly, nonatomic) long long performReminderMigration; // @synthesize performReminderMigration=_performReminderMigration;
@property(readonly, nonatomic) long long performCalendarMigration; // @synthesize performCalendarMigration=_performCalendarMigration;
@property(readonly, nonatomic) NSURL *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
@property(readonly, nonatomic) NSURL *sourceCalendarDirectory; // @synthesize sourceCalendarDirectory=_sourceCalendarDirectory;
@property(readonly, nonatomic) NSURL *homeDirectory; // @synthesize homeDirectory=_homeDirectory;
@property(readonly, nonatomic) _Bool migrateUsingCalendarDaemon; // @synthesize migrateUsingCalendarDaemon=_migrateUsingCalendarDaemon;
- (id)description;
- (id)_initWithHomeDirectory:(id)arg1 sourceCalendarDirectory:(id)arg2 destinationDirectory:(id)arg3 migrateUsingCalendarDaemon:(_Bool)arg4 performCalendarMigration:(long long)arg5 performReminderMigration:(long long)arg6 performCleanup:(long long)arg7 deleteMigratedData:(long long)arg8 backupBeforeCalendarMigration:(long long)arg9 backupBeforeReminderMigration:(long long)arg10 saveAccountsChangesToFile:(id)arg11;
- (id)initWithSourceCalendarDirectory:(id)arg1 destinationDirectory:(id)arg2 performCalendarMigration:(long long)arg3 performReminderMigration:(long long)arg4 performCleanup:(long long)arg5 deleteMigratedData:(long long)arg6 backupBeforeCalendarMigration:(long long)arg7 backupBeforeReminderMigration:(long long)arg8 saveAccountsChangesToFile:(id)arg9;
- (id)initWithHomeDirectory:(id)arg1 destinationDirectory:(id)arg2 performCalendarMigration:(long long)arg3 performReminderMigration:(long long)arg4 performCleanup:(long long)arg5 deleteMigratedData:(long long)arg6 backupBeforeCalendarMigration:(long long)arg7 backupBeforeReminderMigration:(long long)arg8 saveAccountsChangesToFile:(id)arg9;
- (id)initWithHomeDirectory:(id)arg1;
- (id)initUsingCalendarDaemon;

@end
