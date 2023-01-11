//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPStoreModelAlbumBuilder
{
    struct {
        unsigned int initialized:1;
        unsigned int copyrightText:1;
        unsigned int title:1;
        unsigned int trackCount:1;
        unsigned int maximumItemTrackNumber:1;
        unsigned int discCount:1;
        unsigned int hasCleanContent:1;
        unsigned int hasExplicitContent:1;
        unsigned int libraryAdded:1;
        unsigned int keepLocalEnableState:1;
        unsigned int keepLocalManagedStatus:1;
        unsigned int libraryAddEligible:1;
        unsigned int compilation:1;
        unsigned int classical:1;
        unsigned int releaseDate:1;
        unsigned int artwork:1;
        unsigned int year:1;
        unsigned int preorder:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int volumeNormalization:1;
        unsigned int songPopularity:1;
        unsigned int representativeSong:1;
        CDStruct_63a3d127 artist;
        CDStruct_63a3d127 genre;
    } _requestedAlbumProperties;
}

+ (id)allSupportedProperties;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end

