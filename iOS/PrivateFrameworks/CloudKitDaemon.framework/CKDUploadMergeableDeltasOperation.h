//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;
@protocol CKUploadMergeableDeltasOperationCallbacks;

@interface CKDUploadMergeableDeltasOperation
{
    CDUnknownBlockType _uploadDeltaCompletionBlock;
    CDUnknownBlockType _replaceDeltasRequestCompletionBlock;
    NSArray *_deltas;
    NSArray *_replacementRequests;
    NSMutableArray *_pendingReplacementRequests;
    NSMutableArray *_pendingDeltaUploads;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingDeltaUploads; // @synthesize pendingDeltaUploads=_pendingDeltaUploads;
@property(retain, nonatomic) NSMutableArray *pendingReplacementRequests; // @synthesize pendingReplacementRequests=_pendingReplacementRequests;
@property(copy, nonatomic) NSArray *replacementRequests; // @synthesize replacementRequests=_replacementRequests;
@property(copy, nonatomic) NSArray *deltas; // @synthesize deltas=_deltas;
@property(copy, nonatomic) CDUnknownBlockType replaceDeltasRequestCompletionBlock; // @synthesize replaceDeltasRequestCompletionBlock=_replaceDeltasRequestCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadDeltaCompletionBlock; // @synthesize uploadDeltaCompletionBlock=_uploadDeltaCompletionBlock;
- (void)handleReplaceDeltasRequest:(id)arg1 result:(id)arg2;
- (void)handleDeltaUploaded:(id)arg1 result:(id)arg2;
- (void)_uploadAndReplaceDeltas:(CDUnknownBlockType)arg1;
- (void)_uploadAndReplaceDeltas;
- (void)_encryptMergeableDeltas;
- (void)main;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (int)operationType;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKUploadMergeableDeltasOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

