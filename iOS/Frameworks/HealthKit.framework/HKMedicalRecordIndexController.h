//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSearchableIndex, HKHealthRecordsStore, HKHealthStore, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HKMedicalRecordIndexController : NSObject
{
    _Bool _indexStarted;
    CDUnknownBlockType _observerBlock;
    NSMutableDictionary *_activeAnchoredQueries;
    NSObject<OS_dispatch_source> *_anchorCommitTimer;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HKHealthStore *_healthStore;
    HKHealthRecordsStore *_healthRecordsStore;
    NSMutableDictionary *_lastIndexedAnchor;
    CSSearchableIndex *_spotlightIndex;
}

+ (id)indexedSampleTypes;
@property(retain, nonatomic) CSSearchableIndex *spotlightIndex; // @synthesize spotlightIndex=_spotlightIndex;
@property(retain, nonatomic) NSMutableDictionary *lastIndexedAnchor; // @synthesize lastIndexedAnchor=_lastIndexedAnchor;
@property(nonatomic) _Bool indexStarted; // @synthesize indexStarted=_indexStarted;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *anchorCommitTimer; // @synthesize anchorCommitTimer=_anchorCommitTimer;
@property(retain, nonatomic) NSMutableDictionary *activeAnchoredQueries; // @synthesize activeAnchoredQueries=_activeAnchoredQueries;
@property(copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void).cxx_destruct;
- (void)_queue_commitAnchorUpdates;
- (void)_updateAnchor:(id)arg1 forType:(id)arg2;
- (void)_deleteIndexForObjects:(id)arg1 type:(id)arg2 anchor:(id)arg3;
- (id)_searchableItemAttributeSetWithRecord:(id)arg1 concept:(id)arg2;
- (void)_updateOrInsertIndexForSamples:(id)arg1 type:(id)arg2 anchor:(id)arg3;
- (void)_startIndexingMedicalRecordSamples;
- (void)_queue_readLastIndexedAnchorWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAllIndexesWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopIndexing;
- (void)startIndexing;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2;

@end
