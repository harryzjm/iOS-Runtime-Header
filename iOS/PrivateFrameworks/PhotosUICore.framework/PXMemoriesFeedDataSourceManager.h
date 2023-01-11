//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PXMemoriesFeedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_privateWorkQueue;
    unsigned long long _workTag;
    _Bool __generatingAdditionalEntries;
}

@property(nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) _Bool _generatingAdditionalEntries; // @synthesize _generatingAdditionalEntries=__generatingAdditionalEntries;
- (void).cxx_destruct;
- (id)objectReferenceForMemory:(id)arg1;
- (unsigned long long)_indexOfEntry:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)_indexOfEntryForMemory:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)arg1 changeDetails:(id)arg2 firstUngroupedMemoryIndex:(unsigned long long)arg3;
- (void)_generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(_Bool)arg3;
- (void)reloadMemories:(_Bool)arg1;
- (void)generateAdditionalEntriesIfPossible;
- (void)generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(_Bool)arg3;
- (void)startGeneratingMemories;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

