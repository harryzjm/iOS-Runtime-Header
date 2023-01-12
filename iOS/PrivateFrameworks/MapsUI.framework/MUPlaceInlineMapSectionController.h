//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class CLLocation, MKPlaceInlineMapViewController, MKPlacePoisInlineMapViewController, MKUGCCallToActionViewAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceInlineMapSectionController : MUPlaceSectionController
{
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlacePoisInlineMapViewController *_poiInlineMapViewController;
    MUPlaceSectionView *_sectionView;
}

- (void).cxx_destruct;
- (_Bool)isImpressionable;
- (int)analyticsModuleType;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) UIView *sectionView;
- (void)updateWithMapItem:(id)arg1;
@property(retain, nonatomic) CLLocation *location;
- (void)_setupInlineMap;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

