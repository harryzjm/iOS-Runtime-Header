//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCloudContext, FCSearchResult, NSString;

@interface FCSearchOperation
{
    _Bool _shouldFetchFullHeadline;
    FCCloudContext *_cloudContext;
    NSString *_searchString;
    unsigned long long _batchSize;
    NSString *_keyboardInputMode;
    double _scale;
    CDUnknownBlockType _searchResultsBlock;
    FCSearchResult *_searchResult;
    unsigned long long _parsecQueryID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(retain, nonatomic) FCSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) CDUnknownBlockType searchResultsBlock; // @synthesize searchResultsBlock=_searchResultsBlock;
@property(nonatomic) _Bool shouldFetchFullHeadline; // @synthesize shouldFetchFullHeadline=_shouldFetchFullHeadline;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (id)_fetchFullHeadlineResultsForArticles:(id)arg1;
- (id)_fetchResultsForArticlesWithBatchSize:(unsigned long long)arg1;
- (id)_fetchResultsForTagsWithBatchSize:(unsigned long long)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithSearchText:(id)arg1 cloudContext:(id)arg2 parsecQueryID:(unsigned long long)arg3;

@end
