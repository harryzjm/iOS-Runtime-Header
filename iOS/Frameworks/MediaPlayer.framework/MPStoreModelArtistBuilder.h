//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPStoreModelArtistBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int name:1;
        unsigned int hasBiography:1;
        unsigned int hasSocialPosts:1;
        unsigned int artwork:1;
        unsigned int editorialArtwork:1;
        CDStruct_63a3d127 genre;
    } _requestedArtistProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
