//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICURLBag, MPModelForYouRecommendationMusicKitGroupBuilder, MPModelStoreBrowseContentItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDictionary;

__attribute__((visibility("hidden")))
@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject
{
    struct {
        _Bool isInitialized;
        _Bool itemType;
        _Bool url;
        _Bool reason;
        _Bool utterance;
        _Bool backedByStoreItemMetadata;
        _Bool album;
        _Bool playlist;
        _Bool radioStation;
        _Bool subgroup;
    } _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationMusicKitGroupBuilder *_subgroupBuilder;
    ICURLBag *_storeURLBag;
    _Bool _isListenNow;
    MPPropertySet *_requestedPropertySet;
    NSDictionary *_storeItemMetadataResults;
    MPMutableSectionedCollection *_flatSectionedItems;
}

+ (id)allSupportedProperties;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // @synthesize flatSectionedItems=_flatSectionedItems;
@property(readonly, nonatomic) NSDictionary *storeItemMetadataResults; // @synthesize storeItemMetadataResults=_storeItemMetadataResults;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (id)convertToStoreItemMetadataDictionary:(id)arg1;
- (id)storeItemMetadataWithMusicAPIMetadataDictionary:(id)arg1;
- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4;
- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 storeURLBag:(id)arg4 isListenNow:(_Bool)arg5;

@end

