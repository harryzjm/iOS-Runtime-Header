//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXSearchTokenSuggestionModelTranslator : NSObject
{
}

+ (_Bool)_isRTL;
+ (id)_sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)arg1;
+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg1 sceneAncestryInformation:(id)arg2;
+ (id)_attributedTitleForWordEmbeddingMatchedText:(id)arg1 replacementText:(id)arg2 searchText:(id)arg3;
+ (id)searchTokenSuggestionsFromWordEmbeddings:(id)arg1 sceneAncestryInformation:(id)arg2 searchText:(id)arg3;
+ (id)searchTokenSuggestionsFromNextTokenSuggestions:(id)arg1;
+ (id)_attributedTitleForTokenTitle:(id)arg1 searchText:(id)arg2;
+ (id)searchTokenSuggestionsFromCompletions:(id)arg1 searchText:(id)arg2;
- (id)init;

@end
