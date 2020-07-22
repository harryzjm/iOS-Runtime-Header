//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSString, NSUUID;
@protocol HDSyncSessionDelegate, HDSyncStore;

@interface HDSyncSession : NSObject
{
    _Bool _attemptWhileLocking;
    id <HDSyncSessionDelegate> _delegate;
    id <HDSyncStore> _syncStore;
    NSUUID *_sessionUUID;
    NSDate *_startDate;
    NSCalendar *_calendar;
    NSString *_reason;
}

@property(readonly, nonatomic) _Bool attemptWhileLocking; // @synthesize attemptWhileLocking=_attemptWhileLocking;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) id <HDSyncStore> syncStore; // @synthesize syncStore=_syncStore;
@property(readonly, nonatomic) __weak id <HDSyncSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)excludedSyncStores;
- (void)syncDidFinishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)transactionDidEndWithError:(id *)arg1;
- (void)sendChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)syncDidBeginWithProfile:(id)arg1 error:(id *)arg2;
- (void)syncWillBegin;
- (id)init;
- (id)initWithSyncStore:(id)arg1 attemptWhileLocking:(_Bool)arg2 reason:(id)arg3 delegate:(id)arg4;

@end

