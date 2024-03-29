//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class GEOWebContentModuleConfiguration, MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUWebContentViewController, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceWebContentSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceWebContentSectionController : MUPlaceSectionController
{
    GEOWebContentModuleConfiguration *_webContentConfig;
    MUWebContentViewController *_webContentViewController;
    MUPlaceSectionView *_sectionView;
    _Bool _shouldRemoveWebContent;
    id <MUPlaceWebContentSectionControllerDelegate> _webContentDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MUPlaceWebContentSectionControllerDelegate> webContentDelegate; // @synthesize webContentDelegate=_webContentDelegate;
- (_Bool)isImpressionable;
- (int)analyticsModuleType;
- (id)draggableContent;
- (void)webContentViewControllerDidStopLoading:(id)arg1;
- (void)webContentViewController:(id)arg1 performHeightChangeWithBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeWebContentViewController:(id)arg1 arguments:(id)arg2;
- (_Bool)isWebContentViewControllerParentPlacecardLoading:(id)arg1;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) UIViewController *sectionViewController;
- (void)_setupWebContentViewController;
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

