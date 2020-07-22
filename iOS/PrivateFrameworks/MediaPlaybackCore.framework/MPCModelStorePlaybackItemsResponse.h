//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelResponse.h>

#import <MediaPlaybackCore/MPModelResponseDetailedKeepLocalStatusRequesting-Protocol.h>
#import <MediaPlaybackCore/MPModelStoreEquivalencyMapping-Protocol.h>

@class MPStoreLibraryPersonalizationResponse, NSDate, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelStoreEquivalencyMapping, MPModelResponseDetailedKeepLocalStatusRequesting>
{
    NSObject<OS_dispatch_source> *_invalidationTimer;
    _Bool _finalResponse;
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
    MPCModelStorePlaybackItemsResponse *_updatedResponse;
    NSDictionary *_localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
    NSDate *_invalidationDate;
}

@property(copy, nonatomic) NSDate *invalidationDate; // @synthesize invalidationDate=_invalidationDate;
@property(copy, nonatomic) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap; // @synthesize localStoreAdamIDToEquivalencySourceStoreAdamIDMap=_localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
@property(readonly, nonatomic, getter=_updatedResponse) MPCModelStorePlaybackItemsResponse *_updatedResponse; // @synthesize _updatedResponse;
@property(readonly, nonatomic) MPStoreLibraryPersonalizationResponse *_personalizationResponse; // @synthesize _personalizationResponse;
- (void).cxx_destruct;
- (void)_invalidateWithUpdatedResponse:(id)arg1;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)arg1;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
