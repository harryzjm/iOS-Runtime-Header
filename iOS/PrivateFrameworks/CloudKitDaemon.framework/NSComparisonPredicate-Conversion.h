//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)
- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id *)arg2;
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;
@end

