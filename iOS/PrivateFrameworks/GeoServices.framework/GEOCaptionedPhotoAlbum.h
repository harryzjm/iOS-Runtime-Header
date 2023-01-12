//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDCategorizedPhotos, NSArray, NSMapTable, NSString;

@interface GEOCaptionedPhotoAlbum : NSObject
{
    GEOPDCategorizedPhotos *_categorizedPhotos;
    NSMapTable *_attributionMap;
    NSArray *_photoList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *photoList; // @synthesize photoList=_photoList;
@property(readonly, nonatomic) unsigned long long totalNumberOfPhotosAvailable;
@property(readonly, nonatomic) NSString *categoryId;
@property(readonly, nonatomic) NSString *categoryName;
- (id)description;
- (void)_buildPhotoList;
- (id)initWithCaptionedPhotoCategory:(id)arg1 attributionMap:(id)arg2;

@end
