//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostPredicateProducer-Protocol.h>

@class NSMutableDictionary, NSPredicate;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer>
{
    NSMutableDictionary *_subsystemsDict;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *subsystemsDict; // @synthesize subsystemsDict=_subsystemsDict;
- (id)debugDescription;
- (void)addEntry:(id)arg1;
- (void)addSubsystem:(id)arg1 category:(id)arg2;
- (id)_initWithEntries:(id)arg1;
- (_Bool)matchesSubsystem:(id)arg1 category:(id)arg2;
- (id)liveStreamingPredicate;
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;
- (id)_predicateEquivalentWithIsSimplified:(_Bool)arg1;
- (id)_subpredicatesForSubsystemsWithIsSimplified:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long _compoundPredicateType;
- (void)_fixupToSupportFramerateCalculation;
- (void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2;
@property(readonly, nonatomic) _Bool _wantsNotSubsystem;
- (_Bool)passesSubsystem:(id)arg1 category:(id)arg2;

@end
