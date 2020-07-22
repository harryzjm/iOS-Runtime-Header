//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKGraphSeries, NSArray;

@interface _HKGraphViewSelectionContext : NSObject
{
    long long _selectionState;
    NSArray *_touchPoints;
    NSArray *_selectionAreaMapping;
    NSArray *_selectedRangeBoundariesXValue;
    HKGraphSeries *_selectedSeries;
    struct CGRect _seriesSelectionRect;
}

@property(retain, nonatomic) HKGraphSeries *selectedSeries; // @synthesize selectedSeries=_selectedSeries;
@property(retain, nonatomic) NSArray *selectedRangeBoundariesXValue; // @synthesize selectedRangeBoundariesXValue=_selectedRangeBoundariesXValue;
@property(retain, nonatomic) NSArray *selectionAreaMapping; // @synthesize selectionAreaMapping=_selectionAreaMapping;
@property(retain, nonatomic) NSArray *touchPoints; // @synthesize touchPoints=_touchPoints;
@property(nonatomic) struct CGRect seriesSelectionRect; // @synthesize seriesSelectionRect=_seriesSelectionRect;
@property(nonatomic) long long selectionState; // @synthesize selectionState=_selectionState;
- (void).cxx_destruct;
@property(readonly, nonatomic) double minimumSelectionDistance;

@end

