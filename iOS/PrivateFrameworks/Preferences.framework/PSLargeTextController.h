//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSLargeTextSliderListController;

@interface PSLargeTextController
{
    PSLargeTextSliderListController *_sliderListController;
    PSLargeTextSliderListController *_extendedRangeSliderListController;
    _Bool _usesExtendedRange;
    _Bool _showsExtendedRangeSwitch;
}

@property(nonatomic) _Bool showsExtendedRangeSwitch; // @synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch;
- (void).cxx_destruct;
- (id)usesExtendedRangeForSpecifier:(id)arg1;
- (void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)specifiers;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

