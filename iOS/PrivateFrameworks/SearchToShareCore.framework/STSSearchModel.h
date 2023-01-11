//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchToShareCore/PARSessionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PARSession, PARTask;
@protocol OS_dispatch_queue, STSRecentsDelegate, STSSearchModelDelegate, STSSearchModelQuerySuggestionsDelegate;

@interface STSSearchModel : NSObject <PARSessionDelegate>
{
    NSString *_currentQuery;
    NSArray *_sections;
    NSArray *_querySuggestions;
    NSArray *_predictedSuggestions;
    id <STSSearchModelDelegate> _delegate;
    id <STSRecentsDelegate> _recentsDelegate;
    id <STSSearchModelQuerySuggestionsDelegate> _querySuggestionsDelegate;
    PARSession *_parsecSession;
    NSArray *_categoryList;
    NSArray *_recentResults;
    unsigned long long _categoryListRequestQueryId;
    NSString *_conversationID;
    PARTask *_currentTask;
    NSObject<OS_dispatch_queue> *_mutableSectionsQueue;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *_zkwResultStore;
    NSMutableDictionary *_searchResultStore;
    NSArray *_searchResults;
    NSMutableArray *_recentsToDedup;
}

+ (void)incrementClientQueryId;
+ (unsigned long long)clientQueryId;
+ (id)serverURLString;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *recentsToDedup; // @synthesize recentsToDedup=_recentsToDedup;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) NSMutableDictionary *searchResultStore; // @synthesize searchResultStore=_searchResultStore;
@property(retain, nonatomic) NSMutableDictionary *zkwResultStore; // @synthesize zkwResultStore=_zkwResultStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mutableSectionsQueue; // @synthesize mutableSectionsQueue=_mutableSectionsQueue;
@property(retain, nonatomic) PARTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property unsigned long long categoryListRequestQueryId; // @synthesize categoryListRequestQueryId=_categoryListRequestQueryId;
@property(retain, nonatomic) NSArray *recentResults; // @synthesize recentResults=_recentResults;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) PARSession *parsecSession; // @synthesize parsecSession=_parsecSession;
@property(nonatomic) __weak id <STSSearchModelQuerySuggestionsDelegate> querySuggestionsDelegate; // @synthesize querySuggestionsDelegate=_querySuggestionsDelegate;
@property(nonatomic) __weak id <STSRecentsDelegate> recentsDelegate; // @synthesize recentsDelegate=_recentsDelegate;
@property(nonatomic) __weak id <STSSearchModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *predictedSuggestions; // @synthesize predictedSuggestions=_predictedSuggestions;
@property(retain, nonatomic) NSArray *querySuggestions; // @synthesize querySuggestions=_querySuggestions;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSString *currentQuery; // @synthesize currentQuery=_currentQuery;
- (id)defaultCategoryList;
- (void)performCategoryListRequest:(CDUnknownBlockType)arg1;
- (id)mockQuerySuggestions;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)_clearQuerySuggestionsAndNotifyDelegate;
- (void)_clearSectionsAndNotifyDelegate;
- (void)removeQuerySuggestions;
- (void)removeAllSections;
- (void)_updateSearchProviderImageForResult:(id)arg1;
- (void)_performParsecdSearchQuery:(id)arg1 requestType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performZKWSearchQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)prefetchRecentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performSearchWithQueryString:(id)arg1 requestType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)appendQueryItemsForRequest:(id)arg1 type:(long long)arg2;
- (id)createQuerySession;
- (void)fetchMoreResults;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
