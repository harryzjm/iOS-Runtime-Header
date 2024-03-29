//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSObject-Protocol.h>

@class CKRecordZoneID, CKSyncEngine, CKSyncEngineEvent, CKSyncEngineRecordZoneChangeBatch, CKSyncEngineSendChangesContext;

@protocol CKSyncEngineDelegate <NSObject>
- (CKSyncEngineRecordZoneChangeBatch *)syncEngine:(CKSyncEngine *)arg1 nextRecordZoneChangeBatchForContext:(CKSyncEngineSendChangesContext *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 handleEvent:(CKSyncEngineEvent *)arg2;

@optional
- (_Bool)syncEngine:(CKSyncEngine *)arg1 shouldFetchChangesForZoneID:(CKRecordZoneID *)arg2;
@end

