//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>
#import <CloudDocsDaemon/PQLBindable-Protocol.h>

@class BRCServerChangeState, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable>
{
    NSMutableDictionary *_pendingMigrations;
    long long _nextRank;
    NSDate *_lastSyncDownDate;
    BRCServerChangeState *_sharedDatabaseChangeState;
}

+ (_Bool)supportsSecureCoding;
@property(retain) BRCServerChangeState *sharedDatabaseChangeState; // @synthesize sharedDatabaseChangeState=_sharedDatabaseChangeState;
@property(retain, nonatomic) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
@property(nonatomic) long long nextRank; // @synthesize nextRank=_nextRank;
- (void).cxx_destruct;
- (id)dumpMigrationQueriesForContainerID:(id)arg1;
- (void)migrationQueryForContainerID:(id)arg1 key:(id)arg2 didCompleteWithContinuationCursor:(id)arg3;
- (id)migrationQueryKeyForContainerID:(id)arg1 continuationCursor:(id *)arg2;
- (void)initiateMigrationQueryForContainerIDs:(id)arg1 key:(id)arg2;
- (_Bool)containerIDIsPendingMigration:(id)arg1;
- (void)saveToDB:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

