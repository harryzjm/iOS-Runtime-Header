//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKETAProvider, MKMapItem, MUNearestStationRowView, MUPlaceCallToActionAppearance, MUPlaceFooterAttributionController, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUPlaceVerticalCardContainerView, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MUNearestStationSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUNearestStationSectionController
{
    MKETAProvider *_etaProvider;
    MKMapItem *_nearestStation;
    MUPlaceSectionView *_sectionView;
    MUNearestStationRowView *_nearestStationRowView;
    MUPlaceFooterAttributionController *_footerAttributionController;
    MUPlaceVerticalCardContainerView *_containerView;
    id <MUNearestStationSectionControllerDelegate> _nearestStationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MUNearestStationSectionControllerDelegate> nearestStationDelegate; // @synthesize nearestStationDelegate=_nearestStationDelegate;
- (void)verticalCardContainerView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)ETAProviderUpdated:(id)arg1;
- (void)_handleAttributionTap;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) UIView *sectionView;
- (void)updateWithMapItem:(id)arg1 isLoading:(_Bool)arg2;
- (void)_createNearestStationSection;
- (id)initWithTransitLineItem:(id)arg1 etaProvider:(id)arg2;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

