//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MPPropertySet, MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder;

@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject
{
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPPropertySet *_storeAssetProperties;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int duration:1;
        unsigned int trackNumber:1;
        unsigned int discNumber:1;
        unsigned int grouping:1;
        unsigned int explicit:1;
        unsigned int artistUploadedContent:1;
        unsigned int hasVideo:1;
        unsigned int artwork:1;
        unsigned int copyrightText:1;
        unsigned int keepLocalEnableState:1;
        unsigned int keepLocalManagedStatus:1;
        unsigned int hasCloudSyncSource:1;
        unsigned int localFileAsset:1;
        unsigned int libraryAdded:1;
        unsigned int libraryAddEligible:1;
        unsigned int shouldExcludeFromShuffle;
        unsigned int shouldShowComposer:1;
        unsigned int volumeNormalization:1;
        unsigned int year:1;
        unsigned int userRating:1;
        unsigned int gaplessInfo:1;
        unsigned int volumeAdjustment:1;
        unsigned int classicalWork:1;
        unsigned int classicalMovement:1;
        unsigned int classicalMovementCount:1;
        unsigned int classicalMovementNumber:1;
        CDStruct_0f043e9e album;
        CDStruct_63a3d127 artist;
        CDStruct_63a3d127 composer;
        CDStruct_63a3d127 genre;
        CDStruct_f9384266 homeSharingAsset;
        CDStruct_99cfb959 lyrics;
    } _requestedSongProperties;
    MPPropertySet *_requestedProperties;
}

@property(readonly, copy, nonatomic) MPPropertySet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
- (void).cxx_destruct;
- (id)genericObjectForStorePlatformMetadata:(id)arg1;
- (id)initWithRequestedProperties:(id)arg1;

@end

