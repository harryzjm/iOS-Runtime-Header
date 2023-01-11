//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, PGGraph;

@interface PGGraphNamingProcessor : NSObject
{
    unsigned long long _runOptions;
    NSMutableArray *_analyzersToRun;
    NSSet *_personNodesToName;
    NSSet *_momentNodes;
    PGGraph *_graph;
    NSArray *_sortedPoolOfContactIdentifiers;
    NSMutableDictionary *_contactMatchesByPersonLocalIdentifier;
    NSMutableDictionary *_selectedContactMatchesByPersonLocalIdentifier;
    NSMutableDictionary *_filteredOutContactMatchesByPersonLocalIdentifier;
    unsigned long long _numberOfSignals;
}

@property(readonly, nonatomic) unsigned long long numberOfSignals; // @synthesize numberOfSignals=_numberOfSignals;
@property(retain, nonatomic) NSMutableDictionary *filteredOutContactMatchesByPersonLocalIdentifier; // @synthesize filteredOutContactMatchesByPersonLocalIdentifier=_filteredOutContactMatchesByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *selectedContactMatchesByPersonLocalIdentifier; // @synthesize selectedContactMatchesByPersonLocalIdentifier=_selectedContactMatchesByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *contactMatchesByPersonLocalIdentifier; // @synthesize contactMatchesByPersonLocalIdentifier=_contactMatchesByPersonLocalIdentifier;
@property(retain, nonatomic) NSArray *sortedPoolOfContactIdentifiers; // @synthesize sortedPoolOfContactIdentifiers=_sortedPoolOfContactIdentifiers;
@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly, nonatomic) NSSet *personNodesToName; // @synthesize personNodesToName=_personNodesToName;
@property(retain, nonatomic) NSMutableArray *analyzersToRun; // @synthesize analyzersToRun=_analyzersToRun;
@property(readonly, nonatomic) unsigned long long runOptions; // @synthesize runOptions=_runOptions;
- (void).cxx_destruct;
- (id)personNodesToNameFromPersonNodes:(id)arg1;
- (id)matchPropertiesBetweenContactIdentifier:(id)arg1 andPersonLocalIdentifier:(id)arg2;
- (id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)arg1;
- (id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)arg1;
- (id)_applyMessageFrequencyPenaltyToMatchScores:(id)arg1;
- (void)_removeSuggestionOfContact:(id)arg1 forPerson:(id)arg2;
- (void)_limitNumberOfContactSuggestionsPerPerson;
- (void)filterContactMatches;
- (id)_extractSortedPoolOfContactIdentifiers;
- (void)_extractSignalsFromRunOptions;
- (void)enumerateContactSuggestionsForPersonNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)runNamingAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2;

@end
