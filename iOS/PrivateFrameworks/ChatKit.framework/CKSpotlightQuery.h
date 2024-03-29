//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMChatRegistry, MDSearchQuery, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKSpotlightQuery : NSObject
{
    _Bool _cancelled;
    CDUnknownBlockType _completion;
    MDSearchQuery *_currentQuery;
    unsigned long long _resultIndex;
    NSArray *_searchResults;
    NSMutableDictionary *_chatGUIDToLatestSearchResult;
    NSObject<OS_dispatch_group> *_searchResultLoadingGroup;
    IMChatRegistry *_chatRegisteryOverride;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IMChatRegistry *chatRegisteryOverride; // @synthesize chatRegisteryOverride=_chatRegisteryOverride;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *searchResultLoadingGroup; // @synthesize searchResultLoadingGroup=_searchResultLoadingGroup;
@property(retain, nonatomic) NSMutableDictionary *chatGUIDToLatestSearchResult; // @synthesize chatGUIDToLatestSearchResult=_chatGUIDToLatestSearchResult;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) unsigned long long resultIndex; // @synthesize resultIndex=_resultIndex;
@property(readonly, nonatomic) MDSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)chatRegistry;
- (id)initWithSearchText:(id)arg1 chatRegistryOverride:(id)arg2 startQuery:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithSearchText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)dealloc;
- (id)initWithSearchText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 startQuery:(_Bool)arg3;
- (void)_callCompletion;
- (void)_cleanup;
- (void)_processSearchResults;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

