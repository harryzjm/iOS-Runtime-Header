//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNFullTextSearchContactPredicate : CNPredicate
{
    NSString *_searchString;
    NSArray *_containerIdentifiers;
    NSArray *_groupIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

