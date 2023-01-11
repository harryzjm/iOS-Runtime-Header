//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseJournalManager, NSString;

@interface EDPersistenceDatabaseJournal : NSObject
{
    struct os_unfair_lock_s _referenceCountLock;
    unsigned long long _referenceCount;
    unsigned long long _number;
    EDPersistenceDatabaseJournalManager *_journalManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager; // @synthesize journalManager=_journalManager;
@property(readonly, nonatomic) unsigned long long number; // @synthesize number=_number;
@property(readonly) unsigned long long referenceCount;
- (void)checkIn;
- (void)checkOut;
@property(readonly, copy, nonatomic) NSString *path;
- (id)description;
- (id)initWithJournalManager:(id)arg1 number:(unsigned long long)arg2;

@end
