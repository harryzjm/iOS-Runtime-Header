//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKPlaceSectionRowView.h"

@class MKPlaceHoursView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursDayRow : MKPlaceSectionRowView
{
    MKPlaceHoursView *_hoursView;
    NSLayoutConstraint *_topAnchorToTopLabelBaseline;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *topAnchorToTopLabelBaseline; // @synthesize topAnchorToTopLabelBaseline=_topAnchorToTopLabelBaseline;
@property(retain, nonatomic) MKPlaceHoursView *hoursView; // @synthesize hoursView=_hoursView;
- (void)hoursViewDidUpdate:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpViewsForPlaceHoursDayRow;
- (id)initWithBusinessHours:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

