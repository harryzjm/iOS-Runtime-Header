//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContainerBoxView.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC19HealthVisualization24HighlightCalendarDayView : NUIContainerBoxView
{
    MISSING_TYPE *model;
    MISSING_TYPE *$__lazy_storage_$_circleView;
    MISSING_TYPE *$__lazy_storage_$_todayIndicatorView;
    MISSING_TYPE *$__lazy_storage_$_dayLabel;
    MISSING_TYPE *ringsRenderer;
    MISSING_TYPE *$__lazy_storage_$_activityRingsView;
}

- (void).cxx_destruct;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) long long axCircleState;
@property(nonatomic, readonly) NSString *axProjectionKind;
@property(nonatomic, readonly) long long axProbability;
@property(nonatomic, readonly) NSDate *axDate;

@end
