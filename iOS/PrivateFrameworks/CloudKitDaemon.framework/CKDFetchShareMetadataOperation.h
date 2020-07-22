//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDFetchShareMetadataOperation
{
    _Bool _forceDSRefetch;
    _Bool _errorOnOON;
    _Bool _shouldFetchRootRecord;
    _Bool _clientWillDisplaySystemAcceptPrompt;
    CDUnknownBlockType _shareMetadataFetchedBlock;
    NSMutableArray *_shareURLsToFetch;
    NSMutableDictionary *_shareTokenMetadatasToFetchByURL;
    NSSet *_rootRecordDesiredKeysSet;
}

@property(nonatomic) _Bool clientWillDisplaySystemAcceptPrompt; // @synthesize clientWillDisplaySystemAcceptPrompt=_clientWillDisplaySystemAcceptPrompt;
@property(retain, nonatomic) NSSet *rootRecordDesiredKeysSet; // @synthesize rootRecordDesiredKeysSet=_rootRecordDesiredKeysSet;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSMutableDictionary *shareTokenMetadatasToFetchByURL; // @synthesize shareTokenMetadatasToFetchByURL=_shareTokenMetadatasToFetchByURL;
@property(retain, nonatomic) NSMutableArray *shareURLsToFetch; // @synthesize shareURLsToFetch=_shareURLsToFetch;
@property(copy, nonatomic) CDUnknownBlockType shareMetadataFetchedBlock; // @synthesize shareMetadataFetchedBlock=_shareMetadataFetchedBlock;
@property(nonatomic) _Bool errorOnOON; // @synthesize errorOnOON=_errorOnOON;
@property(nonatomic) _Bool forceDSRefetch; // @synthesize forceDSRefetch=_forceDSRefetch;
- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_prepareShortTokens;
- (void)_performCallbackAfterFetchingRootRecordForURL:(id)arg1 withMetadata:(id)arg2;
- (void)_fetchShortTokenMetadata;
- (id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2;
- (void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
