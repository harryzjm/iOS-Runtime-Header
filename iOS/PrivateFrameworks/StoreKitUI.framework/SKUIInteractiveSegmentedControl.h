//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray;

@interface SKUIInteractiveSegmentedControl : UIControl
{
    NSMutableArray *_dividerViews;
    CDUnknownBlockType _dividerCreationBlock;
    double _dividerWidth;
    NSArray *_segments;
    double _selectionProgress;
}

@property(nonatomic) double selectionProgress; // @synthesize selectionProgress=_selectionProgress;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) double dividerWidth; // @synthesize dividerWidth=_dividerWidth;
@property(copy, nonatomic) CDUnknownBlockType dividerCreationBlock; // @synthesize dividerCreationBlock=_dividerCreationBlock;
- (void).cxx_destruct;
- (void)_unregisterForObservationOfSegment:(id)arg1;
- (_Bool)_setSelectionProgress:(double)arg1;
- (void)_registerForObservationOfSegment:(id)arg1;
- (void)_notifyClientsOfSelectionProgressChange;
- (id)_createDividerViewWithFrame:(struct CGRect)arg1;
- (void)_applySelectionProgressToSegments;
- (void)_segmentControlTouchUpInsideAction:(id)arg1;
- (long long)selectedSegmentIndexForSelectionProgress:(double)arg1;
- (double)selectionProgressForSelectedSegmentAtIndex:(long long)arg1;
- (double)selectionProgressForRelativeSectionProgress:(double)arg1 segmentIndex:(long long)arg2;
- (double)relativeSelectionProgressForSelectionProgress:(double)arg1 segmentIndex:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

