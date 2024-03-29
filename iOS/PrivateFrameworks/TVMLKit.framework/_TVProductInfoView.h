//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVFocusRedirectView.h"

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductInfoView : _TVFocusRedirectView
{
    NSArray *_viewsAboveInfoSection;
    NSArray *_infoSectionViews;
    NSArray *_viewsBelowInfoSection;
    UIView *_defaultFocusView;
}

+ (id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *defaultFocusView; // @synthesize defaultFocusView=_defaultFocusView;
@property(retain, nonatomic) NSArray *viewsBelowInfoSection; // @synthesize viewsBelowInfoSection=_viewsBelowInfoSection;
@property(retain, nonatomic) NSArray *infoSectionViews; // @synthesize infoSectionViews=_infoSectionViews;
@property(retain, nonatomic) NSArray *viewsAboveInfoSection; // @synthesize viewsAboveInfoSection=_viewsAboveInfoSection;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

