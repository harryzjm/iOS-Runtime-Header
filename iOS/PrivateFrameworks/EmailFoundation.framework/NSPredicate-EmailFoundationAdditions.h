//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@class NSString;

@interface NSPredicate (EmailFoundationAdditions)
+ (id)ef_andCompoundPredicateForOptionalPredicate:(id)arg1 second:(id)arg2;
+ (id)ef_matchNothingPredicate;
+ (id)ef_matchEverythingPredicate;
@property(readonly, nonatomic) _Bool ef_matchesNothing;
@property(readonly, nonatomic) _Bool ef_matchesEverything;
@property(readonly, nonatomic) NSPredicate *ef_simplifiedPredicate;
- (_Bool)ef_containsSubpredicate:(id)arg1;
- (_Bool)ef_containsKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (id)_ef_parenthesizedPublicDescription;
- (id)predicateNodeFromPropertyMapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

