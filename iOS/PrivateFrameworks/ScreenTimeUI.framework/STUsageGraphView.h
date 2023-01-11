//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ScreenTimeUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, STBarView, STDeviceBedtime, STPaddleView, STUsageReportGraphDataSet, UIImageView, UILayoutGuide;

@interface STUsageGraphView : UIView <UIGestureRecognizerDelegate>
{
    STUsageReportGraphDataSet *_dataSet;
    STDeviceBedtime *_bedtime;
    UIView *_titleView;
    STPaddleView *_paddleView;
    STBarView *_selectedBarView;
    UIView *_paddleConnectorView;
    NSLayoutConstraint *_paddleViewCenterXConstraint;
    NSLayoutConstraint *_paddleViewConnectorCenterXConstraint;
    UIImageView *_horizontalBaseline;
    NSArray *_verticalDividers;
    NSArray *_barViews;
    NSArray *_barViewHeightConstraints;
    NSArray *_verticalLayoutGuides;
    NSArray *_bedtimeFields;
    UILayoutGuide *_bedtimeFieldLayoutGuide;
    UILayoutGuide *_graphLayoutGuide;
    UILayoutGuide *_labelSectionLayoutGuide;
    UILayoutGuide *_barSectionLayoutGuide;
    UIImageView *_weeklyAverageLine;
    UILayoutGuide *_weeklyAverageLayoutGuide;
    NSLayoutConstraint *_weeklyAverageHeightConstraint;
    NSLayoutConstraint *_weeklyAverageTrailingConstraint;
}

+ (id)dashedAverageLineImage;
+ (id)bedtimeFieldImage;
+ (id)baselineImage;
@property(retain, nonatomic) NSLayoutConstraint *weeklyAverageTrailingConstraint; // @synthesize weeklyAverageTrailingConstraint=_weeklyAverageTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *weeklyAverageHeightConstraint; // @synthesize weeklyAverageHeightConstraint=_weeklyAverageHeightConstraint;
@property(retain, nonatomic) UILayoutGuide *weeklyAverageLayoutGuide; // @synthesize weeklyAverageLayoutGuide=_weeklyAverageLayoutGuide;
@property(retain, nonatomic) UIImageView *weeklyAverageLine; // @synthesize weeklyAverageLine=_weeklyAverageLine;
@property(retain, nonatomic) UILayoutGuide *barSectionLayoutGuide; // @synthesize barSectionLayoutGuide=_barSectionLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *labelSectionLayoutGuide; // @synthesize labelSectionLayoutGuide=_labelSectionLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *graphLayoutGuide; // @synthesize graphLayoutGuide=_graphLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *bedtimeFieldLayoutGuide; // @synthesize bedtimeFieldLayoutGuide=_bedtimeFieldLayoutGuide;
@property(copy, nonatomic) NSArray *bedtimeFields; // @synthesize bedtimeFields=_bedtimeFields;
@property(copy, nonatomic) NSArray *verticalLayoutGuides; // @synthesize verticalLayoutGuides=_verticalLayoutGuides;
@property(copy, nonatomic) NSArray *barViewHeightConstraints; // @synthesize barViewHeightConstraints=_barViewHeightConstraints;
@property(copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(copy, nonatomic) NSArray *verticalDividers; // @synthesize verticalDividers=_verticalDividers;
@property(retain, nonatomic) UIImageView *horizontalBaseline; // @synthesize horizontalBaseline=_horizontalBaseline;
@property(retain, nonatomic) NSLayoutConstraint *paddleViewConnectorCenterXConstraint; // @synthesize paddleViewConnectorCenterXConstraint=_paddleViewConnectorCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paddleViewCenterXConstraint; // @synthesize paddleViewCenterXConstraint=_paddleViewCenterXConstraint;
@property(retain, nonatomic) UIView *paddleConnectorView; // @synthesize paddleConnectorView=_paddleConnectorView;
@property(retain, nonatomic) STBarView *selectedBarView; // @synthesize selectedBarView=_selectedBarView;
@property(retain, nonatomic) STPaddleView *paddleView; // @synthesize paddleView=_paddleView;
@property(readonly, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
@property(retain, nonatomic) STUsageReportGraphDataSet *dataSet; // @synthesize dataSet=_dataSet;
- (void).cxx_destruct;
- (void)selectBarWithClosestHorizontalPositionToPoint:(struct CGPoint)arg1;
- (void)handleGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)createWeeklyAverageLineWithLayoutGuide:(id)arg1;
- (id)createBedtimeField;
- (id)createBarViewWithDataPoint:(id)arg1 layoutGuide:(id)arg2 previousView:(id)arg3 previousLayoutGuide:(id)arg4 layoutGuideWidthMultiplier:(double)arg5;
- (id)createDividerWithView:(id)arg1 layoutGuide:(id)arg2 previousLayoutGuide:(id)arg3 layoutGuideWidthMultiplier:(double)arg4;
- (id)createFirstDivider;
- (void)setUpWeeklyAverageLine:(_Bool)arg1;
- (void)setUpBedtimeFields;
- (void)updateBarViews;
- (void)setUpBarViewHeightContraints;
- (void)setUpGraphWithDividerInterval:(unsigned long long)arg1 labelFormatter:(id)arg2;
- (void)setDataSet:(id)arg1 animated:(_Bool)arg2;
- (id)initWithTitleView:(id)arg1 graphHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

