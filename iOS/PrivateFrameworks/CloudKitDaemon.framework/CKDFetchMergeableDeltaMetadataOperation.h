//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks;

@interface CKDFetchMergeableDeltaMetadataOperation
{
    CDUnknownBlockType _metadataFetchedBlock;
    NSArray *_mergeableValueIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *mergeableValueIDs; // @synthesize mergeableValueIDs=_mergeableValueIDs;
@property(copy, nonatomic) CDUnknownBlockType metadataFetchedBlock; // @synthesize metadataFetchedBlock=_metadataFetchedBlock;
- (void)handleFetchedMetadatasForMergeableValueID:(id)arg1 metadatas:(id)arg2 result:(id)arg3;
- (void)fetchMetadataRecursivelyForMergeableValueIDs:(id)arg1 continuationTokens:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchMetadata;
- (void)main;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (int)operationType;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKFetchMergeableDeltaMetadataOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

