//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject
{
    NSArray *_requirements;
    NSPredicate *_predicateForEventsRequiredToBeTombstoned;
    NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
    NSArray *_propertiesToFetchForTombstones;
}

+ (id)defaultPolicy;
@property(retain, nonatomic) NSArray *propertiesToFetchForTombstones; // @synthesize propertiesToFetchForTombstones=_propertiesToFetchForTombstones;
@property(retain, nonatomic) NSPredicate *eventPredicateForEventsRequiredToBeTombstoned; // @synthesize eventPredicateForEventsRequiredToBeTombstoned=_eventPredicateForEventsRequiredToBeTombstoned;
@property(retain, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned; // @synthesize predicateForEventsRequiredToBeTombstoned=_predicateForEventsRequiredToBeTombstoned;
@property(retain, nonatomic) NSArray *requirements; // @synthesize requirements=_requirements;
- (void).cxx_destruct;
- (id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id *)arg2;
- (id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id *)arg2;
- (id)initWithRequirements:(id)arg1;
- (id)init;

@end

