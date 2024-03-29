//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUAlbumListViewControllerSpec, PUSessionInfo, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;
@protocol PXGridPresentation;

__attribute__((visibility("hidden")))
@interface PUAlbumNavigationHelperParams : NSObject
{
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUSessionInfo *_sessionInfo;
    PUAlbumListViewControllerSpec *_spec;
    id <PXGridPresentation> _gridPresentation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PXGridPresentation> gridPresentation; // @synthesize gridPresentation=_gridPresentation;
@property(retain, nonatomic) PUAlbumListViewControllerSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;

@end

