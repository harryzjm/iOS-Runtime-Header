//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIArrayController.h>

@class NSArray, NSDate, NSMutableDictionary, NSObject, NSOperationQueue, NSOrderedSet, NSPredicate, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerLocalDirectoryObserver : _UIArrayController
{
    NSArray *_sortDescriptors;
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSObject<OS_dispatch_queue> *_queryDispatchQueue;
    NSArray *_sources;
    NSMutableDictionary *_resultsForSources;
    _Bool _updateScheduled;
    _Bool _afterInitialUpdate;
    NSDate *_lastSnapshotDate;
    NSOperationQueue *_queryWorkerQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool afterInitialUpdate; // @synthesize afterInitialUpdate=_afterInitialUpdate;
@property(retain, nonatomic) NSOperationQueue *queryWorkerQueue; // @synthesize queryWorkerQueue=_queryWorkerQueue;
@property(retain, nonatomic) NSDate *lastSnapshotDate; // @synthesize lastSnapshotDate=_lastSnapshotDate;
- (void)dispatchSourceDidReceiveEvent:(id)arg1;
- (void)updateResultsForSource:(id)arg1;
- (void)initialUpdate;
- (id)gatherResults;
- (id)gatherResultsForSource:(id)arg1;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (id)isVisiblePredicate;
- (_Bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
@property(retain, nonatomic) NSOrderedSet *staticItems;
@property(retain, nonatomic) NSPredicate *queryPredicate;
- (void)invalidate;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

