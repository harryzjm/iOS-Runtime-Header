//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUFooterActionsSectionController, MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitFooterActionsSectionController
{
    MUFooterActionsSectionController *_underlyingSectionController;
}

- (void).cxx_destruct;
- (id)revealedAnalyticsModule;
- (id)analyticsModule;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
- (void)reloadData;
- (struct CGRect)impressionsFrame;
@property(readonly, nonatomic) UIView *sectionView;
- (id)initWithTransitLineItem:(id)arg1 actionManager:(id)arg2;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

