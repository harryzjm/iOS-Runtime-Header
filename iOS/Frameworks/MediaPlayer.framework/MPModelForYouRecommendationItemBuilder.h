//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MPModelForYouRecommendationGroupBuilder, MPModelStoreBrowseContentItemBuilder, MPMutableSectionedCollection, MPPropertySet, NSDictionary;

@interface MPModelForYouRecommendationItemBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int itemType:1;
        unsigned int backedByStoreItemMetadata:1;
        unsigned int album:1;
        unsigned int playlist:1;
        unsigned int subgroup:1;
    } _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationGroupBuilder *_subgroupBuilder;
    MPPropertySet *_requestedPropertySet;
    NSDictionary *_storeItemMetadataResults;
    MPMutableSectionedCollection *_flatSectionedItems;
}

+ (id)allSupportedProperties;
@property(readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // @synthesize flatSectionedItems=_flatSectionedItems;
@property(readonly, nonatomic) NSDictionary *storeItemMetadataResults; // @synthesize storeItemMetadataResults=_storeItemMetadataResults;
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (void).cxx_destruct;
- (id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3;
- (id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3;

@end
