//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

#import <PlacesKit/PXPlacesMapAnnotationViewFadable-Protocol.h>

@class NSString, PKExtendedTraitCollection, PXPlacesImageCache, UIImageView, UILabel;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable>
{
    long long _geotaggablesCount;
    CDUnknownBlockType _displayCompletion;
    PKExtendedTraitCollection *_extendedTraitCollection;
    id _extendedTraitObserver;
    UILabel *_countLabel;
    UIImageView *_countLabelBackgroundImageView;
    PXPlacesImageCache *_imageCache;
}

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;
@property(retain, nonatomic) PXPlacesImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) UIImageView *countLabelBackgroundImageView; // @synthesize countLabelBackgroundImageView=_countLabelBackgroundImageView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) id extendedTraitObserver; // @synthesize extendedTraitObserver=_extendedTraitObserver;
@property(retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(copy, nonatomic) CDUnknownBlockType displayCompletion; // @synthesize displayCompletion=_displayCompletion;
- (void).cxx_destruct;
- (id)renderToImage;
- (void)_hideCountLabel;
- (void)_showCountLabel;
- (void)_reloadCount:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)_processPostImage;
- (void)_processGeotaggable:(id)arg1 withImage:(struct CGImage *)arg2 popoverImageType:(unsigned long long)arg3 shouldCache:(_Bool)arg4;
- (void)_processPlaceHolderForGeotaggable:(id)arg1;
- (void)_fetchImageWithNetworkAccessAllowed:(_Bool)arg1;
- (void)_reloadData:(_Bool)arg1;
- (id)_countLabelBackgroundColor;
- (id)userCacheKey;
- (id)primaryGeotaggable;
- (void)prepareForReuse;
- (void)setAnnotation:(id)arg1;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

