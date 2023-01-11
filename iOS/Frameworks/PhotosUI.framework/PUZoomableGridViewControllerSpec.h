//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUPhotosGridViewControllerSpec;

@interface PUZoomableGridViewControllerSpec : NSObject
{
    _Bool _canDisplayMultipleRightBarButtonItems;
    double _magnifiedYOffset;
    long long _fullMomentsSectionHeaderStyle;
    long long _collectionsSectionHeaderStyle;
    long long _yearsSectionHeaderStyle;
    PUPhotosGridViewControllerSpec *_gridSpec;
    struct CGSize _magnifiedImageSize;
    struct CGSize _fullMomentsLevelThumbnailSize;
    struct UIEdgeInsets _magnifiedDragEdgeInsets;
    struct UIEdgeInsets _fullMomentsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets _collectionsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets _yearsLevelSectionHeaderHighlightInset;
}

@property(retain, nonatomic, setter=_setGridSpec:) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
@property(readonly, nonatomic) long long yearsSectionHeaderStyle; // @synthesize yearsSectionHeaderStyle=_yearsSectionHeaderStyle;
@property(readonly, nonatomic) struct UIEdgeInsets yearsLevelSectionHeaderHighlightInset; // @synthesize yearsLevelSectionHeaderHighlightInset=_yearsLevelSectionHeaderHighlightInset;
@property(readonly, nonatomic) long long collectionsSectionHeaderStyle; // @synthesize collectionsSectionHeaderStyle=_collectionsSectionHeaderStyle;
@property(readonly, nonatomic) struct UIEdgeInsets collectionsLevelSectionHeaderHighlightInset; // @synthesize collectionsLevelSectionHeaderHighlightInset=_collectionsLevelSectionHeaderHighlightInset;
@property(readonly, nonatomic) long long fullMomentsSectionHeaderStyle; // @synthesize fullMomentsSectionHeaderStyle=_fullMomentsSectionHeaderStyle;
@property(readonly, nonatomic) struct UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset; // @synthesize fullMomentsLevelSectionHeaderHighlightInset=_fullMomentsLevelSectionHeaderHighlightInset;
@property(readonly, nonatomic) struct CGSize fullMomentsLevelThumbnailSize; // @synthesize fullMomentsLevelThumbnailSize=_fullMomentsLevelThumbnailSize;
@property(nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets; // @synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets;
@property(nonatomic) double magnifiedYOffset; // @synthesize magnifiedYOffset=_magnifiedYOffset;
@property(readonly, nonatomic) struct CGSize magnifiedImageSize; // @synthesize magnifiedImageSize=_magnifiedImageSize;
@property(readonly, nonatomic) _Bool canDisplayMultipleRightBarButtonItems; // @synthesize canDisplayMultipleRightBarButtonItems=_canDisplayMultipleRightBarButtonItems;
- (void).cxx_destruct;
- (_Bool)dynamicLayoutEnabled;
@property(readonly, nonatomic) struct CGSize yearsLevelThumbnailSize;
@property(readonly, nonatomic) long long yearsLevelCellFillMode;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
@property(readonly, nonatomic) struct CGSize collectionsLevelThumbnailSize;
@property(readonly, nonatomic) long long collectionsLevelCellFillMode;
@property(readonly, nonatomic) unsigned long long yearsSectionHeaderBackgroundStyle;
@property(readonly, nonatomic) unsigned long long collectionsSectionHeaderBackgroundStyle;
@property(readonly, nonatomic) unsigned long long fullMomentsSectionHeaderBackgroundStyle;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
@property(readonly, nonatomic) long long fullMomentsLevelCellFillMode;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (id)newGridSpec;

@end

