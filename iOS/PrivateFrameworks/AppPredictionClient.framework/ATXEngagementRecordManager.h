//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXBiomeERMStream, ATXExecutableReferenceManager, NSString;
@protocol OS_dispatch_queue;

@interface ATXEngagementRecordManager : NSObject
{
    ATXExecutableReferenceManager *_referenceManager;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeERMStream *_eventStream;
    double _minDurationForTrackedReferencesToStayAround;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double minDurationForTrackedReferencesToStayAround; // @synthesize minDurationForTrackedReferencesToStayAround=_minDurationForTrackedReferencesToStayAround;
- (id)_readData;
- (_Bool)_writeData:(id)arg1;
- (void)_serializeAndWriteNoSyncSet:(id)arg1;
- (void)_logDidAddEntryToBiomeStream:(id)arg1;
- (void)_addHiddenSuggestionNoSync:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;
- (void)_addEngagedSuggestionNoSync:(id)arg1 type:(unsigned long long)arg2;
- (id)_engagedEntriesNoSync;
- (void)_fetchEngagedEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_engagedEntriesNoSyncOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;
- (id)_identifiersFromEntries:(id)arg1;
- (void)removeAllEngagementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeEngagementsOnQueuePassingTest:(CDUnknownBlockType)arg1;
- (void)removeEngagementForExecutableIdentifier:(id)arg1 recordType:(unsigned long long)arg2 abortingRemovalIfEngagementDateIsLaterThanDate:(id)arg3;
- (void)removeAllEngagementsOfRecordType:(unsigned long long)arg1;
- (void)removeAllEngagementsForSuggestion:(id)arg1;
- (void)removeEngagementForSuggestion:(id)arg1 recordType:(unsigned long long)arg2;
- (void)_removeEngagedSuggestionsIfPossibleNoSync;
- (void)addHiddenSuggestion:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;
- (void)addEngagedSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2;
- (id)engagedExecutablesOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;
- (void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)arg1;
- (_Bool)hasEngagedWithSuggestion:(id)arg1 engagedExecutables:(id)arg2;
- (_Bool)hasEngagedWithSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2;
- (void)updateForClientModelCacheUpdate:(id)arg1 clientModelId:(id)arg2;
- (id)jsonDict;
- (id)description;
- (id)initWithCacheDirectory:(id)arg1;
- (id)init;

@end
