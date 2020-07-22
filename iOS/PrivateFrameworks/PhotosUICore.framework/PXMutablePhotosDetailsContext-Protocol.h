//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDictionary, NSString, PHFetchResult;

@protocol PXMutablePhotosDetailsContext <NSObject>
@property(nonatomic) unsigned long long viewSourceOrigin;
@property(nonatomic) _Bool shouldShowMovieHeader;
@property(copy, nonatomic) NSString *titleFontName;
@property(copy, nonatomic) NSString *localizedSubtitle;
@property(copy, nonatomic) NSString *localizedTitle;
@property(retain, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property(retain, nonatomic) PHFetchResult *people;
@property(copy, nonatomic) NSDictionary *assetsByCollection;
@property(retain, nonatomic) PHFetchResult *assetCollections;
@end
