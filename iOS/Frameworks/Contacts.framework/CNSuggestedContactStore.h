//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SGSuggestionsServiceContactsProtocol;

__attribute__((visibility("hidden")))
@interface CNSuggestedContactStore
{
    id <SGSuggestionsServiceContactsProtocol> _suggestionService;
}

+ (_Bool)isSuggestionsSupported;
+ (void)initialize;
+ (id)storeIdentifier;
+ (id)storeInfoClasses;
@property(retain, nonatomic) id <SGSuggestionsServiceContactsProtocol> suggestionService; // @synthesize suggestionService=_suggestionService;
- (void).cxx_destruct;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_processSuggestions:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
- (id)initWithSuggestionsService:(id)arg1;
- (id)init;

@end

