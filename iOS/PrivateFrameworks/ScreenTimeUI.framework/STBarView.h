//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, STUsageReportGraphDataPoint;

@interface STBarView : UIView
{
    _Bool _selected;
    STUsageReportGraphDataPoint *_dataPoint;
    NSArray *_sectionViews;
    NSArray *_sectionHeightConstraints;
}

@property(copy, nonatomic) NSArray *sectionHeightConstraints; // @synthesize sectionHeightConstraints=_sectionHeightConstraints;
@property(copy, nonatomic) NSArray *sectionViews; // @synthesize sectionViews=_sectionViews;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) STUsageReportGraphDataPoint *dataPoint; // @synthesize dataPoint=_dataPoint;
- (void).cxx_destruct;
- (void)setUpSectionHeightConstraints;
- (void)setUpSections;
- (id)initWithDataPoint:(id)arg1;

@end

