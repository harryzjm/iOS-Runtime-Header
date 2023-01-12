//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFPerformEntityQueryCommand;

@interface SPSearchCommandEntity
{
    NSString *_tokenText;
    NSString *_searchString;
    SFPerformEntityQueryCommand *_performCommand;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)command;
- (id)tokenText;
- (id)symbolName;
- (id)spotlightQueryString;
- (id)searchString;
- (_Bool)isScopedSearch;
- (void)updateSearchString:(id)arg1;
- (id)initWithCommand:(id)arg1 fromSuggestion:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isCommandEntitySearch;

@end
