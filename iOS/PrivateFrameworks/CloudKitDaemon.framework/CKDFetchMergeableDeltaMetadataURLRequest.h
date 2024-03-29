//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest
{
    NSArray *_mergeableValueIDs;
    NSDictionary *_continuationTokens;
    CDUnknownBlockType _metadataFetchedBlock;
    NSMutableDictionary *_mergeableValueIDByRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mergeableValueIDByRequestID; // @synthesize mergeableValueIDByRequestID=_mergeableValueIDByRequestID;
@property(copy, nonatomic) CDUnknownBlockType metadataFetchedBlock; // @synthesize metadataFetchedBlock=_metadataFetchedBlock;
@property(retain, nonatomic) NSDictionary *continuationTokens; // @synthesize continuationTokens=_continuationTokens;
@property(retain, nonatomic) NSArray *mergeableValueIDs; // @synthesize mergeableValueIDs=_mergeableValueIDs;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)anonymousUserIDForHTTPHeader;
- (_Bool)handlesAnonymousCKUserIDPropagation;
- (int)isolationLevel;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (_Bool)allowsAnonymousAccount;
- (void)fillOutRequestProperties:(id)arg1;
- (id)equivalencyProperties;
- (id)initWithOperation:(id)arg1 mergeableValueIDs:(id)arg2 continuationTokens:(id)arg3;

@end

