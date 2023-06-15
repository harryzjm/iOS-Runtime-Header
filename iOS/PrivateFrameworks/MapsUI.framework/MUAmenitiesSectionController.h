//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class GEOBusinessInfoModuleConfiguration, MUAmenityListSectionView, MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUAmenitiesSectionController : MUPlaceSectionController
{
    MUPlaceSectionView *_sectionView;
    GEOBusinessInfoModuleConfiguration *_moduleConfig;
    MUAmenityListSectionView *_amenitySectionView;
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;
}

- (void).cxx_destruct;
- (_Bool)isImpressionable;
- (int)analyticsModuleType;
- (id)infoCardChildUnactionableUIElements;
@property(readonly, nonatomic) UIView *sectionView;
- (void)_setupAmenitiyRows;
- (id)initWithMapItem:(id)arg1 moduleConiguration:(id)arg2;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

