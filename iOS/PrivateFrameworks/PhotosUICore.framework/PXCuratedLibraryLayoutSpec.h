//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXAssetsSectionLayoutSpec, PXCuratedLibraryAllPhotosLayoutSpec, PXCuratedLibrarySectionHeaderLayoutSpec, PXMonthsLayoutMetrics, PXYearsLayoutMetrics;

@interface PXCuratedLibraryLayoutSpec
{
    double _estimatedSpacingBetweenMonths;
    double _spacingBetweenYears;
    double _spacingBetweenMonths;
    double _spacingBetweenDays;
    _Bool _allowsPaginatedScrollingInYearsAndMonths;
    _Bool _allowsSlideshowInYears;
    long long _axis;
    PXCuratedLibrarySectionHeaderLayoutSpec *_daysTopHeaderSpec;
    PXCuratedLibrarySectionHeaderLayoutSpec *_allPhotosFloatingHeaderSpec;
    PXCuratedLibraryAllPhotosLayoutSpec *_allPhotosLayoutSpec;
    PXAssetsSectionLayoutSpec *_sectionLayoutSpec;
    PXYearsLayoutMetrics *_yearsLayoutMetrics;
    PXMonthsLayoutMetrics *_monthsLayoutMetrics;
    double _spacingBetweenSafeAreaTopAndFirstYearCard;
    double _spacingBetweenSafeAreaTopAndFirstMonthTitle;
}

@property(readonly, nonatomic) _Bool allowsSlideshowInYears; // @synthesize allowsSlideshowInYears=_allowsSlideshowInYears;
@property(readonly, nonatomic) _Bool allowsPaginatedScrollingInYearsAndMonths; // @synthesize allowsPaginatedScrollingInYearsAndMonths=_allowsPaginatedScrollingInYearsAndMonths;
@property(readonly, nonatomic) double spacingBetweenSafeAreaTopAndFirstMonthTitle; // @synthesize spacingBetweenSafeAreaTopAndFirstMonthTitle=_spacingBetweenSafeAreaTopAndFirstMonthTitle;
@property(readonly, nonatomic) double spacingBetweenSafeAreaTopAndFirstYearCard; // @synthesize spacingBetweenSafeAreaTopAndFirstYearCard=_spacingBetweenSafeAreaTopAndFirstYearCard;
@property(readonly, nonatomic) PXMonthsLayoutMetrics *monthsLayoutMetrics; // @synthesize monthsLayoutMetrics=_monthsLayoutMetrics;
@property(readonly, nonatomic) PXYearsLayoutMetrics *yearsLayoutMetrics; // @synthesize yearsLayoutMetrics=_yearsLayoutMetrics;
@property(readonly, nonatomic) PXAssetsSectionLayoutSpec *sectionLayoutSpec; // @synthesize sectionLayoutSpec=_sectionLayoutSpec;
@property(readonly, nonatomic) PXCuratedLibraryAllPhotosLayoutSpec *allPhotosLayoutSpec; // @synthesize allPhotosLayoutSpec=_allPhotosLayoutSpec;
@property(readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *allPhotosFloatingHeaderSpec; // @synthesize allPhotosFloatingHeaderSpec=_allPhotosFloatingHeaderSpec;
@property(readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *daysTopHeaderSpec; // @synthesize daysTopHeaderSpec=_daysTopHeaderSpec;
@property(readonly, nonatomic) long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (double)defaultInterlayoutSpacingForZoomLevel:(long long)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3;

@end
