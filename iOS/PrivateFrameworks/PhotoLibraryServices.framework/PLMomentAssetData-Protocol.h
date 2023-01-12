//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLMomentRefreshable-Protocol.h>
#import <PhotoLibraryServices/PLRegionsClusteringItem-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSObject, NSString, PLRevGeoLocationInfo, PLRevGeoPlaceAnnotation, PLSharedAssetsContainerIncrementalChange;
@protocol NSCopying, PLMomentAssetData, PLMomentData, PLPhotosHighlightData;

@protocol PLMomentAssetData <PLMomentRefreshable, PLRegionsClusteringItem>
@property(readonly, nonatomic) _Bool hasChanges;
@property(readonly, nonatomic) _Bool isAvalancheStackPhoto;
@property(readonly, nonatomic) _Bool isInterestingForAvalanche;
@property(readonly, nonatomic) NSString *avalancheUUID;
@property(readonly, nonatomic) _Bool isScreenRecording;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool isPhoto;
@property(nonatomic) double curationScore;
@property(nonatomic) _Bool favorite;
@property(readonly, nonatomic) unsigned char shareState;
@property(retain, nonatomic) id <PLPhotosHighlightData> yearHighlightBeingKeyAssetShared;
@property(retain, nonatomic) id <PLPhotosHighlightData> monthHighlightBeingKeyAssetShared;
@property(retain, nonatomic) id <PLPhotosHighlightData> highlightBeingKeyAssetShared;
@property(retain, nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingKeyAssetShared;
@property(readonly, nonatomic) _Bool isSuggestedForSharingByPhotos;
@property(readonly, nonatomic) _Bool hasLibraryScope;
@property(retain, nonatomic) id <PLPhotosHighlightData> yearHighlightBeingKeyAssetPrivate;
@property(retain, nonatomic) id <PLPhotosHighlightData> monthHighlightBeingKeyAssetPrivate;
@property(retain, nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingSummaryAssets;
@property(retain, nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingExtendedAssets;
@property(retain, nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingKeyAssetPrivate;
@property(retain, nonatomic) id <PLPhotosHighlightData> dayGroupHighlightBeingAssets;
@property(retain, nonatomic) id <PLPhotosHighlightData> highlightBeingExtendedAssets;
@property(retain, nonatomic) id <PLPhotosHighlightData> highlightBeingSummaryAssets;
@property(retain, nonatomic) id <PLPhotosHighlightData> highlightBeingKeyAssetPrivate;
@property(retain, nonatomic) id <PLPhotosHighlightData> highlightBeingAssets;
@property(readonly, retain, nonatomic) PLRevGeoLocationInfo *locationInfo;
@property(readonly, retain, nonatomic) PLRevGeoPlaceAnnotation *placeAnnotation;
@property(nonatomic) _Bool shiftedLocationIsValid;
@property(retain, nonatomic) CLLocation *shiftedLocation;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(nonatomic) _Bool reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *reverseLocationData;
@property(retain, nonatomic) id <PLMomentData> moment;
@property(readonly, nonatomic) double gpsHorizontalAccuracy;
@property(readonly, nonatomic) int inferredTimeZoneOffset;
@property(readonly, retain, nonatomic) NSDate *localDateCreated;
@property(retain, nonatomic) NSDate *dateCreated;
@property(retain, nonatomic) CLLocation *location;
- (void)reportSharedAssetIncrementalChange:(PLSharedAssetsContainerIncrementalChange *)arg1;
- (NSString *)globalUUID;
- (_Bool)isDeleted;
- (_Bool)visibilityStateIsEqualToState:(short)arg1;
- (NSArray *)assetComparisonSortDescriptors;
- (long long)compareToAsset:(id <PLMomentAssetData>)arg1;

@optional
@property(readonly, retain, nonatomic) NSString *cloudAssetGUID;
@property(nonatomic) long long width;
@property(nonatomic) long long height;
@property(nonatomic) short kindSubtype;
@property(nonatomic) short kind;
@property(nonatomic) double duration;
@property(retain, nonatomic) NSDate *modificationDate;
@property(readonly, retain, nonatomic) NSString *uuid;
@end

