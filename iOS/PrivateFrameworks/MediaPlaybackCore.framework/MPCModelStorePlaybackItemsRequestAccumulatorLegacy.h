//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICUserIdentity, MPCModelStorePlaybackItemsRequest, MPMutableSectionedCollection, MPSectionedCollection, MPStoreModelGenericObjectBuilder, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MPCModelStorePlaybackItemsRequestAccumulatorLegacy : NSObject
{
    long long _currentBatchCount;
    long long _defaultLibraryPersonalizationStyle;
    NSMutableDictionary *_equivalencyMapping;
    _Bool _lastStoreIDBasedSectionWasPlaylist;
    NSArray *_orderedStoreIDs;
    NSMutableArray *_pendingOrderedStoreIDs;
    NSMutableArray *_pendingPrioritizedStoreIDs;
    NSMutableArray *_unprocessedItemIdentifiers;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    NSMutableDictionary *_receivedStoreIDs;
    MPStoreModelGenericObjectBuilder *_resultsGenericObjectBuilder;
    NSMutableDictionary *_sectionIndexToDeletedIndexSet;
    NSMutableDictionary *_storeIDToIndexPathReference;
    long long _unknownEndpointLibraryPersonalizationStyle;
    ICUserIdentity *_userIdentity;
    _Bool _allowsExplicitContent;
    MPCModelStorePlaybackItemsRequest *_request;
    _Bool _shouldLibraryPersonalize;
    long long _storePersonalizationStyle;
}

- (void).cxx_destruct;
- (id)_userIdentityWithRequest:(id)arg1;
- (_Bool)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)arg1;
- (void)_removeItemAtOriginalIndexPath:(id)arg1;
- (id)_originalIndexPathsForStoreID:(id)arg1;
- (void)_prepareRequestInformation;
- (id)_modelObjectWithStoreItemMetadata:(id)arg1 requestModelObject:(id)arg2 shouldUsePlaylistEntries:(_Bool)arg3;
- (id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)arg1;
- (struct _MPCModelStorePlaybackItemEligibility)_eligibilityForItem:(id)arg1;
- (void)_addOriginalIndexPath:(id)arg1 forStoreID:(id)arg2;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (id)newStoreItemMetadataRequest;
- (long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)arg1;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult)handleResponse:(id)arg1;
@property(readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property(readonly, copy, nonatomic) NSDictionary *equivalencyMapping;
- (id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(_Bool)arg2;

@end
