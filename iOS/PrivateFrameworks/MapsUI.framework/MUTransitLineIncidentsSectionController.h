//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MKTransitLineIncidentsViewControllerDelegate-Protocol.h>
#import <MapsUI/MUPlaceSectionControlling-Protocol.h>

@class MKUGCCallToActionViewAppearance, MUFixedHeightAwareViewController, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MUTransitLineIncidentsSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitLineIncidentsSectionController <MKTransitLineIncidentsViewControllerDelegate, MUPlaceSectionControlling>
{
    MUFixedHeightAwareViewController *_fixedHeightAwareVC;
    MUPlaceSectionView *_sectionView;
    id <MUTransitLineIncidentsSectionControllerDelegate> _incidentsDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MUTransitLineIncidentsSectionControllerDelegate> incidentsDelegate; // @synthesize incidentsDelegate=_incidentsDelegate;
- (void)transitLineIncidentsViewController:(id)arg1 didSelectDetailsForIncidents:(id)arg2;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) UIViewController *sectionViewController;
- (void)_setupSection;
- (id)initWithTransitLineItem:(id)arg1;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end
