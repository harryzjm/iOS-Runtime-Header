//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchQueryControllerProtocol-Protocol.h>

@class NSString, PSIDatabase, PXSearchIndexManager, PXSearchQuery, PXSearchQueryExecutor;

@interface PXSearchQueryController : NSObject <PXSearchQueryControllerProtocol>
{
    _Bool _isOpeningSearchIndex;
    _Bool _requestSceneAncestryInformation;
    PXSearchIndexManager *_searchIndexManager;
    CDUnknownBlockType _resultsHandler;
    PSIDatabase *_searchIndex;
    PXSearchQueryExecutor *_searchQueryExecutor;
    PXSearchQuery *_currentSearchQuery;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requestSceneAncestryInformation; // @synthesize requestSceneAncestryInformation=_requestSceneAncestryInformation;
@property(nonatomic) _Bool isOpeningSearchIndex; // @synthesize isOpeningSearchIndex=_isOpeningSearchIndex;
@property(retain, nonatomic) PXSearchQuery *currentSearchQuery; // @synthesize currentSearchQuery=_currentSearchQuery;
@property(retain, nonatomic) PXSearchQueryExecutor *searchQueryExecutor; // @synthesize searchQueryExecutor=_searchQueryExecutor;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(readonly, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(readonly, nonatomic) PXSearchIndexManager *searchIndexManager; // @synthesize searchIndexManager=_searchIndexManager;
- (void)_performSearch:(id)arg1 retry:(_Bool)arg2;
- (void)performSearch:(id)arg1;
- (void)_openSearchIndex;
- (id)initWithSearchIndexManager:(id)arg1 requestSceneAncestryInformation:(_Bool)arg2 resultsHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
