//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSLogger, WBSSafariBookmarksSyncAgentProtocol;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject
{
    id <WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Bool _didDetermineReadyToMigrate;
    long long _skipReason;
    _Bool _migrationEnabled;
    id <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> _localDataProvider;
    id <WBSLogger> _keyActionsLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <WBSLogger> keyActionsLogger; // @synthesize keyActionsLogger=_keyActionsLogger;
@property(readonly, nonatomic) __weak id <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider; // @synthesize localDataProvider=_localDataProvider;
- (void)_beginMigrationIfPossible;
- (void)_considerOverridingOtherMigratingDevice;
- (void)_determineCourseOfActionFromRemoteMigrationState;
- (void)_determineCourseOfActionFromSyncAgentMigrationState;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_logKeyAction:(id)arg1;
@property(nonatomic, getter=isMigrationEnabled) _Bool migrationEnabled; // @synthesize migrationEnabled=_migrationEnabled;
- (void)startCoordinatingMigration;
@property(readonly, nonatomic) id <WBSSafariBookmarksSyncAgentProtocol> syncAgent;
- (id)initWithSyncAgent:(id)arg1 localDataProvider:(id)arg2;
- (id)init;

@end
