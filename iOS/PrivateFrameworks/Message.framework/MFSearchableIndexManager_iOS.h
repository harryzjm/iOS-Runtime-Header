//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDSearchableIndexManager.h>

#import <Message/EDSearchableIndexReasonProvider-Protocol.h>

@class EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSSet, NSString;

@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager <EDSearchableIndexReasonProvider>
{
    struct os_unfair_lock_s _indexLock;
    EDSearchableIndex *_index;
    EDSearchableIndexPersistence *_persistence;
    EDSearchableIndexScheduler *_scheduler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EDSearchableIndexScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) EDSearchableIndexPersistence *persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) EDSearchableIndex *index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSSet *currentReasons;
@property(readonly, copy, nonatomic) NSSet *exclusionReasons;
@property(readonly, copy, nonatomic) NSSet *purgeReasons;
@property(readonly, copy, nonatomic) NSSet *dataSourceRefreshReasons;
- (void)enableIndexingAndBeginScheduling:(_Bool)arg1 budgetConfiguration:(id)arg2;
- (void)enableIndexingAndBeginScheduling:(_Bool)arg1;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
