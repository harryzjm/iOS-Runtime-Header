//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface ATXExecutableReferenceManager : NSObject
{
    NSString *_path;
    double _minDurationForTrackedReferencesToStayAround;
    NSMapTable *__cachedExecutableToReferenceMapForBatchUpdates;
    _Bool __cachedExecutableToReferenceMapNeedsWrite;
}

- (void).cxx_destruct;
- (void)_addExecutablePairs:(id)arg1 toMap:(id)arg2;
- (void)addReferencesForSuggestions:(id)arg1 clientModelId:(id)arg2;
- (void)purgeReferencesForSuggestions:(id)arg1 clientModelId:(id)arg2;
- (void)_purgeReferencesIfPossibleInMap:(id)arg1 forceWrite:(_Bool)arg2;
- (void)purgeReferencesIfPossible;
- (void)markReferenceAsHiddenForExecutable:(id)arg1 clientModelId:(id)arg2 untilDate:(id)arg3;
- (void)updateDateOfReferenceForExecutable:(id)arg1 clientModelId:(id)arg2;
- (void)markReferencesAsPurgableFromClientModelIdIfPossible:(id)arg1;
- (id)referencesForClientModelId:(id)arg1;
- (_Bool)isExecutableHidden:(id)arg1;
- (_Bool)canExecutableClearOnEngagement:(id)arg1;
- (id)clientModelIdsForExecutable:(id)arg1;
- (unsigned long long)referenceCountForExecutable:(id)arg1;
- (void)updateReferencesForProactiveSuggestions:(id)arg1 clientModelId:(id)arg2;
- (id)_executablePairsForSuggestions:(id)arg1 clientModelId:(id)arg2;
- (id)_pairsForClientModelId:(id)arg1 map:(id)arg2;
- (void)recordExecutable:(id)arg1 clientModelId:(id)arg2 shouldClearEngagement:(_Bool)arg3;
- (void)_writeReferences:(id)arg1;
- (id)_loadReferences;
- (void)performBatchUpdateOfReferencesWithBlock:(CDUnknownBlockType)arg1;
- (id)_readData;
- (_Bool)_writeData:(id)arg1;
- (id)description;
- (id)jsonDict;
- (id)initWithCacheDirectory:(id)arg1 minDurationForTrackedReferencesToStayAround:(double)arg2;
- (id)init;

@end
