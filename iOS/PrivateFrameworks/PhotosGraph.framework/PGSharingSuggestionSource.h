//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGSharingSuggestionSource : NSObject
{
}

- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (_Bool)canRunWithInput:(id)arg1;
- (_Bool)canRunWithOptions:(id)arg1;
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) NSString *details;
@property(readonly, nonatomic) NSString *name;
- (id)suggestionResultsWithPersons:(id)arg1;
- (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2;
- (id)suggestionResultWithPerson:(id)arg1;
- (id)sourceDescription;
- (id)description;

@end
