//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelTVShowBuilder
{
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int shortTitle:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int editorialArtwork:1;
        unsigned int artwork:1;
        unsigned int episodeCount:1;
        unsigned int tagline:1;
    } _requestedTVShowProperties;
}

+ (id)allSupportedProperties;
- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end

