//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceCollection, NSAttributedString, NSRelativeDateTimeFormatter, UIColor, UIFont, UIImage;
@protocol MKCuratedCollectionsSyncCoordinator, OS_dispatch_queue;

@interface MKPlaceCollectionViewModel : NSObject
{
    NSRelativeDateTimeFormatter *_collectionDateFormatter;
    long long _context;
    UIFont *_titleFont;
    UIImage *_collectionImage;
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
    _Bool _isSaved;
    _Bool _shouldDisplayMetadata;
    UIColor *_backgroundColor;
    NSAttributedString *_collectionTitle;
    NSAttributedString *_secondaryCollectionTitle;
    GEOPlaceCollection *_placeCollection;
    id <MKCuratedCollectionsSyncCoordinator> _syncCoordinator;
    UIImage *_publisherLogoImage;
    struct CGSize _photoSize;
}

- (void).cxx_destruct;
@property(retain) UIImage *publisherLogoImage; // @synthesize publisherLogoImage=_publisherLogoImage;
@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property(retain, nonatomic) id <MKCuratedCollectionsSyncCoordinator> syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain, nonatomic) GEOPlaceCollection *placeCollection; // @synthesize placeCollection=_placeCollection;
@property(nonatomic) _Bool shouldDisplayMetadata; // @synthesize shouldDisplayMetadata=_shouldDisplayMetadata;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(retain, nonatomic) NSAttributedString *secondaryCollectionTitle; // @synthesize secondaryCollectionTitle=_secondaryCollectionTitle;
@property(retain, nonatomic) NSAttributedString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)publisherLogoImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithGEOPlaceCollection:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3 usingTitleFont:(id)arg4 usingFormatter:(id)arg5;
- (void)cancelCollectionImageDownload;
- (void)collectionImageForSize:(struct CGSize)arg1 onCompletion:(CDUnknownBlockType)arg2;

@end
