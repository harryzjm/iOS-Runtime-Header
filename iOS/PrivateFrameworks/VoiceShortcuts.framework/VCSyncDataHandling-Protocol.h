//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSOrderedSet, NSString;
@protocol VCVoiceShortcutSyncService;

@protocol VCSyncDataHandling
- (_Bool)deleteSyncedData:(id *)arg1;
- (void)removeSyncStateForSyncServiceWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deregisterSyncServiceWithIdentifier:(NSString *)arg1;
- (void)registerSyncService:(id <VCVoiceShortcutSyncService>)arg1 asMaster:(_Bool)arg2;
- (id)createMessageFromData:(NSData *)arg1;
- (void)getUnsyncedChangesForSyncServiceWithIdentifier:(NSString *)arg1 completion:(void (^)(NSOrderedSet *, NSError *))arg2;
- (void)markChangesAsSynced:(NSOrderedSet *)arg1 withSyncServiceWithIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)applyChangeSet:(NSOrderedSet *)arg1 fromSyncServiceWithIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (int)handledMessageType;
@end

