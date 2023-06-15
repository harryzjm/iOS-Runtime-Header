//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPQueueFeeder.h>

@class MPCModelGenericAVItemUserIdentityPropertySet, MPCModelPlaybackContext, MPCPlaybackRequestEnvironment, MPIdentifierSet, MPModelGenericObject, MPModelRequest, MPModelResponse, MPPropertySet, MPRequestResponseController, NSDictionary, NSHashTable, NSLock, NSObject, NSString;
@protocol MPCModelPlaybackRequest, MPCModelPlaybackResponse, MPMutableIdentifierListSection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCModelQueueFeeder : MPQueueFeeder
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_diffQueue;
    NSLock *_diffLock;
    NSHashTable *_activeModelGenericAVItems;
    NSDictionary *_assetStoreFronts;
    NSDictionary *_endTimeModifications;
    CDUnknownBlockType _loadingCompletionHandler;
    MPRequestResponseController *_requestController;
    MPModelRequest<MPCModelPlaybackRequest> *_request;
    NSString *_rtcReportingPlayQueueSourceIdentifier;
    _Bool _isSiriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    id <MPMutableIdentifierListSection> _section;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    MPCModelPlaybackContext *_playbackContext;
    MPPropertySet *_representativeMetadataPropertySet;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    MPModelGenericObject *_fallbackSectionRepresentation;
    MPModelResponse<MPCModelPlaybackResponse> *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response; // @synthesize response=_response;
@property(copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation; // @synthesize fallbackSectionRepresentation=_fallbackSectionRepresentation;
- (id)_supplementalLibraryRequest;
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)arg1;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (void)_beginBackgroundTaskAssertion;
- (_Bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)firstItemIntersectingIdentifierSet:(id)arg1;
- (_Bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;
- (_Bool)containsTransportableContentWithReason:(id *)arg1;
@property(readonly, nonatomic) _Bool containsLiveStream;
- (_Bool)canJumpToItem:(id)arg1 reason:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (void)didFinishLoadingRequestForController:(id)arg1;
- (void)willBeginLoadingRequestForController:(id)arg1;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;
- (id)firstModelPlayEvent;
- (id)uniqueIdentifier;
- (id)updatedPlaybackContext;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (long long)supplementalPlaybackContextBehavior;
- (id)playbackInfoForItem:(id)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool containsRadioContent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly) Class superclass;

@end

