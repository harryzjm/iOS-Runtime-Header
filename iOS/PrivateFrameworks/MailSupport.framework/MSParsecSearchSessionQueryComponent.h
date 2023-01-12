//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSParsecSearchSessionQueryComponent : NSObject
{
    _Bool _cannedSuggestion;
    NSString *_category;
    NSString *_scope;
    NSString *_queryString;
}

+ (id)_structuredQueryForComponents:(id)arg1 hasCurrentMailboxScope:(_Bool)arg2 languages:(id)arg3;
+ (id)suggestionAtomQueryComponentWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(_Bool)arg4;
+ (id)freeTextQueryComponentWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool cannedSuggestion; // @synthesize cannedSuggestion=_cannedSuggestion;
@property(readonly, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
- (id)_structuredQueryComponentWithLanguages:(id)arg1;
- (id)initWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(_Bool)arg4;

@end
