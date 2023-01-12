//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SPSearchPhotosEntity
{
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
    NSDictionary *_rankCategories;
    NSDictionary *_rankTerms;
    _Bool _isNLP;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)spotlightFilterQueries;
- (id)spotlightQueryString;
- (id)symbolName;
- (id)tokenText;
- (id)queryString;
- (id)searchString;
- (_Bool)isScopedSearch;
- (_Bool)isNLPEntitySearch;
- (_Bool)isPhotosEntitySearch;
- (void)updateSearchString:(id)arg1;
- (id)initWithPhotosSearchString:(id)arg1 spotlightQueryString:(id)arg2 rankCategories:(id)arg3 rankTerms:(id)arg4 isNLQuery:(_Bool)arg5 includeSyndicatedPhotos:(_Bool)arg6 fromSuggestion:(_Bool)arg7;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
