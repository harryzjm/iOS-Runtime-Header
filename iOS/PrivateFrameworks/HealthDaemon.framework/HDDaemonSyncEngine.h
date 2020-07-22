//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncEngine-Protocol.h>

@class HDProfile, NSString;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine>
{
    CDUnknownBlockType _unitTest_didCompleteReadTransaction;
    HDProfile *_profile;
}

@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) CDUnknownBlockType unitTest_didCompleteReadTransaction; // @synthesize unitTest_didCompleteReadTransaction=_unitTest_didCompleteReadTransaction;
- (void).cxx_destruct;
- (id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id *)arg3;
- (void)_resetStore:(id)arg1;
- (long long)_receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 error:(id *)arg3;
- (_Bool)_setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 error:(id *)arg4;
- (_Bool)_transactionDidEndForSession:(id)arg1 error:(id *)arg2;
- (long long)_sendChanges:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (_Bool)_performSyncSession:(id)arg1 error:(id *)arg2;
- (long long)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 predicate:(id)arg3 startAnchor:(long long *)arg4 finalAnchor:(long long)arg5 postTransactionBlocks:(id)arg6 error:(id *)arg7;
- (void)resetStore:(id)arg1;
- (_Bool)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(_Bool)arg3 resetInvalid:(_Bool)arg4 error:(id *)arg5;
- (_Bool)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (_Bool)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (long long)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (_Bool)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (_Bool)applySyncObjectCollection:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (_Bool)performSyncSession:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
