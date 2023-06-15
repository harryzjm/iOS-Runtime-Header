//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, CKSyncEngine, CKSyncEngineEvent, CKSyncEngineSendChangesContext, MISSING_TYPE, NSArray;

@interface _TtC8CloudKit25BoxedCKSyncEngineDelegate : NSObject
{
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)syncEngine:(CKSyncEngine *)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(NSArray *)arg2 recordIDs:(NSArray *)arg3 completionHandler:(void (^)(NSArray *))arg4;
- (void)syncEngine:(CKSyncEngine *)arg1 shouldFetchAssetContentsForZoneID:(CKRecordZoneID *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 shouldFetchChangesForZoneID:(CKRecordZoneID *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 nextRecordZoneChangeBatchForContext:(CKSyncEngineSendChangesContext *)arg2 completionHandler:(void (^)(CKSyncEngineRecordZoneChangeBatch *))arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 handleEvent:(CKSyncEngineEvent *)arg2 completionHandler:(void (^)(void))arg3;

@end

