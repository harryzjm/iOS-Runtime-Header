//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelRequest.h>

#import <MediaPlaybackCore/MPCModelPlaybackRequestEnvironmentConsuming-Protocol.h>
#import <MediaPlaybackCore/MPCModelRequestRTCReporting-Protocol.h>
#import <MediaPlaybackCore/MPCModelStorePreviousRequestStoring-Protocol.h>
#import <MediaPlaybackCore/MPModelRequestDetailedKeepLocalStatusRequesting-Protocol.h>

@class MPCPlaybackRequestEnvironment, MPModelResponse, MPSectionedCollection, NSArray, NSString;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>
{
    _Bool _allowsMultipleResponseHandlerCalls;
    _Bool _wantsDetailedKeepLocalRequestableResponse;
    _Bool _allowLocalEquivalencies;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPModelResponse *_previousResponse;
    NSString *_clientIdentifier;
    MPSectionedCollection *_sectionedModelObjects;
    NSArray *_storeIDs;
}

@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy, nonatomic) MPSectionedCollection *sectionedModelObjects; // @synthesize sectionedModelObjects=_sectionedModelObjects;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) _Bool allowLocalEquivalencies; // @synthesize allowLocalEquivalencies=_allowLocalEquivalencies;
@property(nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;
@property(nonatomic) _Bool allowsMultipleResponseHandlerCalls; // @synthesize allowsMultipleResponseHandlerCalls=_allowsMultipleResponseHandlerCalls;
@property(retain, nonatomic) MPModelResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property(copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
