//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaItem.h"

@class NSObject, VUIVideoManagedObject;
@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaItem : VUIMediaItem
{
    VUIVideoManagedObject *_videoManagedObject;
    NSObject<VUIMediaEntityAssetController> *_assetController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // @synthesize videoManagedObject=_videoManagedObject;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)brandName;
- (id)brandID;
- (_Bool)renewsOfflineKeysAutomatically;
- (_Bool)allowsManualDownloadRenewal;
- (id)availabilityEndDate;
- (id)downloadExpirationDate;
- (id)episodeIndexInSeries;
- (id)fractionalEpisodeNumber;
- (id)episodeNumber;
- (id)showCanonicalID;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)seasonTitle;
- (id)seasonNumber;
- (id)showIdentifier;
- (id)showTitle;
- (id)isPlayable;
- (id)isLocal;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)storeID;
- (id)releaseDate;
- (id)addedDate;
- (id)genreTitle;
- (id)duration;
- (id)title;
- (_Bool)markedAsDeleted;
- (id)canonicalID;
- (id)assetType;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end

