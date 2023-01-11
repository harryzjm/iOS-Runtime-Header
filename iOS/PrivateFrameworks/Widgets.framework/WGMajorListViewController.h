//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Widgets/WGWidgetListFooterViewDelegate-Protocol.h>

@class NSString, WGCollapsingView, WGWidgetListFooterView;

@interface WGMajorListViewController <WGWidgetListFooterViewDelegate>
{
    WGCollapsingView *_collapsingView;
    WGWidgetListFooterView *_footerView;
}

@property(readonly, nonatomic) WGWidgetListFooterView *footerView; // @synthesize footerView=_footerView;
- (void).cxx_destruct;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (void)_updateFooterViewShouldBlurContent;
- (void)presentEditView:(id)arg1;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1;
- (void)setShouldBlurContent:(_Bool)arg1;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (void)_configureStackView;
- (id)_group;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

