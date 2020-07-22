//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUSectionedGridLayoutDelegate-Protocol.h>

@class NSMutableDictionary, NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUCollectionsZoomLevelInfo <PUSectionedGridLayoutDelegate>
{
    PHFetchResult *_collectionsFetchResult;
    NSMutableDictionary *_resultsForCollectionList;
}

- (void).cxx_destruct;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)modelDidChange:(id)arg1;
- (_Bool)supportsIncrementalChangeNotifications;
- (double)cellAspectRatioHint;
- (long long)imageDeliveryMode;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (void)getPhotosDataSource:(id *)arg1 displayTitleInfo:(id *)arg2 forDetailsForVisualSection:(long long)arg3;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (void)_getDataForVisualSection:(long long)arg1 title:(id *)arg2 locations:(id *)arg3 startDate:(id *)arg4 endDate:(id *)arg5;
- (long long)cellFillMode;
- (struct CGSize)imageRequestItemSize;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)thumbnailImageSize;
- (long long)maxRowsPerSection;
- (id)sectionHeaderElementKind;
- (id)renderedStripsElementKind;
- (id)newCollectionViewLayout;
- (struct __CFString *)aggregateLevelKey;
- (id)displayTitle;
- (id)momentsInCollectionList:(id)arg1;
- (id)_collectionsFetchResult;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

