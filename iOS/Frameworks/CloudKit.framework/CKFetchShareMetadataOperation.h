//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKFetchShareMetadataOperation
{
    _Bool _shouldFetchRootRecord;
    CDUnknownBlockType _perShareMetadataBlock;
    CDUnknownBlockType _fetchShareMetadataCompletionBlock;
    NSArray *_shareURLs;
    NSArray *_rootRecordDesiredKeys;
    NSMutableDictionary *_errorsByURL;
    NSMutableSet *_packagesToDestroy;
}

@property(retain, nonatomic) NSMutableSet *packagesToDestroy; // @synthesize packagesToDestroy=_packagesToDestroy;
@property(retain, nonatomic) NSMutableDictionary *errorsByURL; // @synthesize errorsByURL=_errorsByURL;
@property(copy, nonatomic) NSArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(copy, nonatomic) NSArray *shareURLs; // @synthesize shareURLs=_shareURLs;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (_Bool)claimPackagesInRecord:(id)arg1 error:(id *)arg2;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType fetchShareMetadataCompletionBlock; // @synthesize fetchShareMetadataCompletionBlock=_fetchShareMetadataCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perShareMetadataBlock; // @synthesize perShareMetadataBlock=_perShareMetadataBlock;
- (id)initWithShareURLs:(id)arg1;
- (id)init;

@end

