//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKMergeableValueID, NSArray, NSError;

@protocol CKFetchMergeableDeltasOperationCallbacks <CKOperationCallbacks>
- (void)handleFetchForMergeableValueID:(CKMergeableValueID *)arg1 fetchedDeltas:(NSArray *)arg2 error:(NSError *)arg3;
@end

