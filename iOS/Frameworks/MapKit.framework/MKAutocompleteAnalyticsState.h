//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MKAutocompleteAnalyticsState : NSObject
{
    NSString *_query;
    NSArray *_queryTokens;
    NSArray *_suggestionEntries;
}

@property(readonly, nonatomic) NSArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
@property(readonly, copy, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;

@end

